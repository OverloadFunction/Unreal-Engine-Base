#include "Renderer.h"

void Render(ID3D11DeviceContext* pContext, ID3D11RenderTargetView* mainRenderTargetView)
{
	//PRE RENDER CALLS================================================================================================================================================
	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	ImGui::RenderNotifications();
	ImDrawList* DrawList = ImGui::GetBackgroundDrawList();
	//PRE RENDER CALLS================================================================================================================================================



	//RENDERING CALLS=================================================================================================================================================	
	RenderMenu();
	if (Config::Console) RenderDebugWindow();
	//RENDERING CALLS=================================================================================================================================================



	//POST RENDER CALLS===============================================================================================================================================
	ImGui::Render();
	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	SafeSwap.Render();
	SafeSwap.Swap(ImGui::GetDrawData());
	//POST RENDER CALLS===============================================================================================================================================
}