#include "MenuStyle.h"

void ApplyStyle() {
    ImGuiStyle& ui = ImGui::GetStyle();
    ui.WindowRounding = 8.0f;
    ui.TabRounding = 8.0f;
    ui.FrameRounding = 4.0f;

    // Custom color for checkmark
    ui.Colors[ImGuiCol_CheckMark] = RGBAToVec4(148, 156, 247, 1);

    // Slider knob colors
    ui.Colors[ImGuiCol_SliderGrab] = RGBAToVec4(148, 156, 247, 1);
    ui.Colors[ImGuiCol_SliderGrabActive] = RGBAToVec4(148, 156, 247, 1);

    // Frame background and other UI elements
    ui.Colors[ImGuiCol_FrameBg] = RGBAToVec4(25, 31, 36, 1);
    ui.Colors[ImGuiCol_WindowBg] = RGBAToVec4(7, 8, 9, 0.80);
    ui.WindowBorderSize = 0.0f;

    // Hover effect for frame background
    ui.Colors[ImGuiCol_FrameBgHovered] = RGBAToVec4(23, 28, 32, 1);
    ui.Colors[ImGuiCol_FrameBgActive] = RGBAToVec4(33, 39, 46, 1);
    ui.Colors[ImGuiCol_Button] = RGBAToVec4(23, 28, 32, 1);
    ui.Colors[ImGuiCol_ButtonHovered] = RGBAToVec4(33, 39, 46, 1);
    ui.Colors[ImGuiCol_ButtonActive] = RGBAToVec4(33, 39, 46, 1);
    ui.Colors[ImGuiCol_Text] = RGBAToVec4(148, 156, 247, 1);
    ui.ChildBorderSize = 0.0f;

    ui.Colors[ImGuiCol_Tab] = RGBAToVec4(23, 28, 32, 1);
    ui.Colors[ImGuiCol_TabHovered] = RGBAToVec4(33, 39, 46, 1);
    ui.Colors[ImGuiCol_TabActive] = RGBAToVec4(33, 39, 46, 1);
    ui.Colors[ImGuiCol_TabUnfocused] = RGBAToVec4(23, 28, 32, 1);
    ui.Colors[ImGuiCol_TabUnfocusedActive] = RGBAToVec4(33, 39, 46, 1);

    ui.Colors[ImGuiCol_PopupBg] = RGBAToVec4(7, 8, 9, 0.85f);

    ui.Colors[ImGuiCol_Header] = RGBAToVec4(23, 28, 32, 1);
    ui.Colors[ImGuiCol_HeaderHovered] = RGBAToVec4(33, 39, 46, 1);
    ui.Colors[ImGuiCol_HeaderActive] = RGBAToVec4(33, 39, 46, 1);

    ui.Colors[ImGuiCol_Border] = RGBAToVec4(33, 39, 46, 0.25f);
    ui.Colors[ImGuiCol_BorderShadow] = RGBAToVec4(0, 0, 0, 0.0f);


}