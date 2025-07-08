#include "../Components.h"

bool InputTextMultiline(const char* label, char* buffer, size_t buffer_size) {
    ImGui::Text(label);
    float spacing = 10.0f;

    ImGui::SameLine();

    float inputWidth = ImGui::GetContentRegionAvail().x - spacing;
    float inputHeight = ImGui::GetTextLineHeight() + spacing;

    ImGui::PushStyleVar(ImGuiStyleVar_ScrollbarSize, 0.0f);

    std::string id = "##" + std::string(label);
    bool changed = ImGui::InputTextMultiline(id.c_str(), buffer, buffer_size, ImVec2(inputWidth, inputHeight), ImGuiInputTextFlags_AllowTabInput);

    ImGui::PopStyleVar();

    return changed;
}