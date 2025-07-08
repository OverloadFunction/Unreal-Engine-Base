#include "../Components.h"
#include "Binding.h"


void KeybindButton(const char* label, const std::string& feature) {
    float keybindWidth = 100.0f;
    std::string keybindId = "##keybind_" + feature;
    ImGuiID keybindButtonID = ImGui::GetID(keybindId.c_str());

    ImGui::AlignTextToFramePadding();
    ImGui::Text("%s", label);
    ImGui::SameLine();

    int key = Config::GetKeybind(feature);
    const char* keyName = GetKeyName(key);
    bool isThisBindingActive = (currentBindingFeature == feature);

    ImGui::PushID(keybindId.c_str());
    bool keybindButtonClicked = ImGui::Button(
        isThisBindingActive ? "Press a key..." : keyName,
        ImVec2(keybindWidth, 0)
    );
    ImGui::PopID();

    if (keybindButtonClicked) {
        currentBindingFeature = feature;
        isAnyBindingActive = true;
        lastFocusedID = keybindButtonID;
    }

    if (isThisBindingActive) {
        if (ImGui::IsKeyPressed(ImGuiKey_Escape)) {
            Config::SetKeybind(feature, 0);
            currentBindingFeature = "";
            isAnyBindingActive = false;
            Config::SaveConfig();
            return;
        }

        for (int key = ImGuiKey_Tab; key < ImGuiKey_COUNT; key++) {
            if (ImGui::IsKeyPressed(static_cast<ImGuiKey>(key))) {
                Config::SetKeybind(feature, key);
                currentBindingFeature = "";
                isAnyBindingActive = false;
                Config::SaveConfig();
                return;
            }
        }

        for (int i = 0; i < 5; i++) {
            if (ImGui::IsMouseClicked(i)) {
                int mouseKey = VK_LBUTTON + i;
                Config::SetKeybind(feature, mouseKey);
                currentBindingFeature = "";
                isAnyBindingActive = false;
                Config::SaveConfig();
                return;
            }
        }
    }
}