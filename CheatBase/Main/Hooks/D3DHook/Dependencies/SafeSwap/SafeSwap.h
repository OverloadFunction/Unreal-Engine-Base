#pragma once
#include <shared_mutex>
//#include "../../../../../Headers/Include.h"
#include "../../../../../Menu/MenuDependencies/ImGui/imgui.h"
#include "../../../../../Menu/MenuDependencies/ImGui/imgui_impl_win32.h"
#include "../../../../../Menu/MenuDependencies/ImGui/imgui_impl_dx11.h"

class SafeDrawlistSwap {
public:
	void Render();
	void Swap(const ImDrawData* Data);
private:
	std::shared_mutex m_Mutex = { };
	ImDrawData m_TempData;
};

extern SafeDrawlistSwap SafeSwap;