#include "../Headers/Include.h"

void InitSdk()
{
	std::wstring ModuleName = L".exe"; // Replace with the actual module name of the game, e.g., L"GameName.exe"
    auto BaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleW(ModuleName.c_str()));

    printf("BaseAddress: %p\n", BaseAddress);

    auto GOBJ = SDK::UObject::GObjects.InitGObjects();
    printf("GObjects:    %p\n", GOBJ);
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        AllocConsole();
        freopen("conin$", "r", stdin);
        freopen("conout$", "w", stdout);
        freopen("conout$", "w", stderr);
        InitSdk();
        for (const auto& feature : Config::Features) {
            Config::Keybinds[feature.first] = 0;
        }
        Config::LoadConfig();
        Hooks::PostRenderHook();
        Hooks::ProcessEventHook();
        Hooks::InitD3DHooks();
        std::thread([hModule]() {
            PlaySound(MAKEINTRESOURCE(IDR_WAVE1), hModule, SND_RESOURCE | SND_ASYNC);
            }).detach();
        break;

    case DLL_PROCESS_DETACH:
        try {
            Config::SaveConfig();
        }
        catch (...) {
            printf("Error during cleanup\n");
        }
        break;
    }
    return TRUE;
}

