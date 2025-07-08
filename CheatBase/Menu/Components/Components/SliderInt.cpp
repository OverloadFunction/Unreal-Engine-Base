#include "../Components.h"

void SliderInt(const char* label, int* value, int min, int max, const char* format) {
    ImGui::Text(label);
    float spacing = 10.0f;

    ImGui::SameLine();

    float sliderWidth = ImGui::GetContentRegionAvail().x - spacing;

    std::string id = "##" + std::string(label);
    ImGui::SliderInt(id.c_str(), value, min, max, format);
}