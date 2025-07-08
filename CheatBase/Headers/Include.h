#pragma once

#define WIN32_LEAN_AND_MEAN
#pragma comment(lib, "detours.lib")
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "winmm.lib")
#include <thread>
#include <Windows.h>
#include <d3d11.h>
#include <map>
#include "detours.h"
#include <fstream>
#include <filesystem>
#include <mmsystem.h>
#include <string>
#include <array>
#include <chrono>
#include <functional>
#include <algorithm>
#include <unordered_set>
#include "iostream"
#include "../SDK/SDK.hpp"
#include "../Main/Hooks/Hooks.h"
#include "../Main/GeneralFunctions/Functions.h"
#include "../Main/Hooks/D3DHook/Dependencies/SafeSwap/SafeSwap.h"
#include "../Menu/MenuDependencies/ImGui/imgui.h"
#include "../Menu/MenuDependencies/ImGui/ImGuiNotify.hpp"
#include "../Menu/MenuDependencies/ImGui/imgui_impl_dx11.h"
#include "../Menu/MenuDependencies/ImGui/imgui_impl_win32.h"
#include "../Menu/MenuDependencies/Fonts/fa-solid-900.h"
#include "../Menu/MenuDependencies/Fonts/IconsFontAwesome6.h"
#include "../Menu/MenuDependencies/Fonts/Pixel.h"
#include "../Menu/MenuDependencies/Fonts/Poppins.h"
#include "../Menu/Config.h"
#include "../Menu/Main/Menu.h"
#include "../Menu/Styling/MenuStyle.h"
#include "../Menu/MenuDependencies/Resource Files/resource.h"
#include "../Main/Rendering/Renderer.h"