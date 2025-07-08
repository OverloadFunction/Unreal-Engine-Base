#include "../../../Headers/Include.h"

SafeDrawlistSwap SafeSwap;

const char* FStringToCString(const SDK::FString& str)
{
	std::wstring ws(str.ToWString());
	static std::string s;
	s = std::string(ws.begin(), ws.end());
	return s.c_str();
}

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

typedef HRESULT(__stdcall* PresentFn)(IDXGISwapChain* Present, UINT SyncInterval, UINT Flags);
static PresentFn oPresent;

WNDPROC oWndProc;
HWND Window = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11Device* pDevice = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

DWORD_PTR* pSwapChainVtable = nullptr;
IDXGISwapChain* tempSwapChain = nullptr;

LRESULT __stdcall WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (Config::Open && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	if (Config::Open)
	{
		switch (uMsg)
		{
		case WM_KEYDOWN:
		case WM_KEYUP:
		case WM_SYSKEYDOWN:
		case WM_SYSKEYUP:
		case WM_CHAR:
		case WM_MOUSEMOVE:
		case WM_LBUTTONDOWN:
		case WM_LBUTTONUP:
		case WM_LBUTTONDBLCLK:
		case WM_RBUTTONDOWN:
		case WM_RBUTTONUP:
		case WM_RBUTTONDBLCLK:
		case WM_MBUTTONDOWN:
		case WM_MBUTTONUP:
		case WM_MBUTTONDBLCLK:
		case WM_MOUSEWHEEL:
		case WM_MOUSEHWHEEL:
		case WM_XBUTTONDOWN:
		case WM_XBUTTONUP:
		case WM_XBUTTONDBLCLK:
			return true;
		}
	}

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

bool SafeSetMaterial(SDK::UPrimitiveComponent* mesh, int index, SDK::UMaterialInterface* material) {
	__try {
		mesh->SetMaterial(index, material);
		return true;
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		return false;
	}
}

HRESULT __stdcall PresentHook(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags) {
	if (!Config::PresentInit) {
		if (SUCCEEDED(SwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice))) {
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			SwapChain->GetDesc(&sd);
			Window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			SwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();

			oWndProc = (WNDPROC)SetWindowLongPtr(Window, GWLP_WNDPROC, (LONG_PTR)WndProc);

			ImGui::CreateContext();
			ImGui::StyleColorsDark();
			ImGuiIO& io = ImGui::GetIO();
			io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;

			Config::Poppins = io.Fonts->AddFontFromMemoryTTF((void*)poppins_ttf, poppins_ttf_size, 16.f, nullptr, io.Fonts->GetGlyphRangesDefault());
			float iconFontSize = 24.f * 2.0f / 3.0f;

			static constexpr ImWchar iconsRanges[] = { ICON_MIN_FA, ICON_MAX_16_FA, 0 };
			ImFontConfig iconsConfig;
			iconsConfig.MergeMode = true;
			iconsConfig.PixelSnapH = true;
			iconsConfig.GlyphMinAdvanceX = iconFontSize;
			io.Fonts->AddFontFromMemoryCompressedTTF(fa_solid_900_compressed_data, fa_solid_900_compressed_size, iconFontSize, &iconsConfig, iconsRanges);

			ImGui_ImplWin32_Init(Window);
			ImGui_ImplDX11_Init(pDevice, pContext);

			Config::PresentInit = true;
		}

		else {
			return oPresent(SwapChain, SyncInterval, Flags);
		}
	}

	if (GetAsyncKeyState(VK_INSERT) & 1) {
		Config::Open = !Config::Open;
		if (Config::Open) {
			ImGui::GetIO().MouseDrawCursor = true;
		}
		else {
			ImGui::GetIO().MouseDrawCursor = false;
		}
	}

	Render(pContext, mainRenderTargetView);

	return oPresent(SwapChain, SyncInterval, Flags);
}

bool __stdcall CreateDeviceAndSwapChain() {
	HWND hWnd = FindWindowA("UnrealWindow", "GameName "); // Example: DeadByDaylight
	if (hWnd == nullptr)
	{
		printf("can't find window\n");
		return false;
	}

	D3D_FEATURE_LEVEL featureLevel = D3D_FEATURE_LEVEL_11_0;
	DXGI_SWAP_CHAIN_DESC swapChainDesc;
	ZeroMemory(&swapChainDesc, sizeof(swapChainDesc));
	swapChainDesc.BufferCount = 1;
	swapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	swapChainDesc.OutputWindow = hWnd;
	swapChainDesc.SampleDesc.Count = 1;
	swapChainDesc.Windowed = (GetWindowLong(hWnd, GWL_STYLE) & WS_POPUP) != 0 ? FALSE : TRUE;
	swapChainDesc.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
	swapChainDesc.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
	swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	HRESULT create = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, NULL, &featureLevel, 1, D3D11_SDK_VERSION, &swapChainDesc, &tempSwapChain, &pDevice, NULL, &pContext);

	if (FAILED(create))
	{
		printf("failled\n");
		std::cout << "Failed to CreateDeviceAndSwapChain: " << (create == DXGI_ERROR_INVALID_CALL) << " - " << std::hex << create << std::endl;
		return false;
	}

	pSwapChainVtable = (DWORD_PTR*)tempSwapChain;
	pSwapChainVtable = (DWORD_PTR*)pSwapChainVtable[0];
	printf("SwapChainVtable: %p\n", (void*)pSwapChainVtable);

	return (pSwapChainVtable);
}

bool FindDynamicallySwapChain() {
	if (CreateDeviceAndSwapChain() == false)
	{
		printf("returning false\n");
		return false;
	}
#ifdef _AMD64_
#define _PTR_MAX_VALUE 0x7FFFFFFEFFFF
	MEMORY_BASIC_INFORMATION64 mbi = { 0 };
#else
#define _PTR_MAX_VALUE 0xFFE00000
	MEMORY_BASIC_INFORMATION32 mbi = { 0 };
#endif

	DWORD_PTR dwVTableAddress;

	for (DWORD_PTR memptr = 0x10000; memptr < _PTR_MAX_VALUE; memptr = mbi.BaseAddress + mbi.RegionSize) //For x64 -> 0x10000 ->  0x7FFFFFFEFFFF
	{
		if (!VirtualQuery(reinterpret_cast<LPCVOID>(memptr), reinterpret_cast<PMEMORY_BASIC_INFORMATION>(&mbi), sizeof(MEMORY_BASIC_INFORMATION))) //Iterate memory by using VirtualQuery
			continue;

		if (mbi.State != MEM_COMMIT || mbi.Protect == PAGE_NOACCESS || mbi.Protect & PAGE_GUARD) //Filter Regions
			continue;

		DWORD_PTR len = mbi.BaseAddress + mbi.RegionSize;	 //Do once

		for (DWORD_PTR current = mbi.BaseAddress; current < len; ++current)
		{

			__try
			{
				dwVTableAddress = *(DWORD_PTR*)current;
			}
			__except (1)
			{
				continue;
			}


			if (dwVTableAddress == (DWORD_PTR)pSwapChainVtable)
			{
				if (current == (DWORD_PTR)tempSwapChain) continue;
				auto PresentAddress = pSwapChainVtable[8];
				oPresent = (PresentFn)PresentAddress;

				printf("PresentAddress: %p\n", PresentAddress);

				DetourRestoreAfterWith();
				DetourTransactionBegin();
				DetourUpdateThread(GetCurrentThread());
				DetourAttach(&(PVOID&)oPresent, PresentHook);
				DetourTransactionCommit();

				printf("Hooked Present.\n");
				return true;
			}
		}
	}

	return false;
}

void Hooks::InitD3DHooks()
{
	std::thread hookthread(FindDynamicallySwapChain);
	hookthread.detach();
}