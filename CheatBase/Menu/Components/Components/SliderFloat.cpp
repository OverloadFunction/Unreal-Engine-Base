#include "../Components.h"

void SliderFloat(const char* label, float* value, float min, float max, const char* format, float power) {
    ImGui::Text(label);
    float spacing = 10.0f;

    ImGui::SameLine();

    float sliderWidth = ImGui::GetContentRegionAvail().x - spacing;

    std::string id = "##" + std::string(label);
    ImGui::SliderFloat(id.c_str(), value, min, max, format, power);
}