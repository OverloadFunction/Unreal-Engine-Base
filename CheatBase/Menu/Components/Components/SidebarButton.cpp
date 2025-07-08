#include "../Components.h"

bool SidebarButton(const char* label, int currentTab, int tabID) {
    ImVec2 avail = ImGui::GetContentRegionAvail();
    float buttonHeight = 24.0f;
    ImVec2 buttonSize = ImVec2(avail.x - 10, buttonHeight);

    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 6.0f);
    ImGui::PushStyleColor(ImGuiCol_Button, currentTab == tabID ? RGBAToVec4(33, 39, 46, 1) : RGBAToVec4(14, 17, 19, 1));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, RGBAToVec4(23, 28, 32, 1));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, RGBAToVec4(33, 39, 46, 1));

    ImGui::AlignTextToFramePadding();
    bool clicked = ImGui::Button(label, buttonSize);

    ImGui::PopStyleColor(3);
    ImGui::PopStyleVar();
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);

    return clicked;
}