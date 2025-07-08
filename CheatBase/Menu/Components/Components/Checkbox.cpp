#include "../Components.h"
#include "Binding.h"

void InitializeMenu() {
    ImGui::PushID("MenuControls");
    ResetBindingState();
}

void FinalizeMenu() {
    ImGui::PopID();
}

void Checkbox(const char* label, bool* value, const std::string& feature) {
    float spacing = 30.0f;
    float availableWidth = ImGui::GetContentRegionAvail().x;
    float keybindWidth = 75.0f;
    float remainingWidth = availableWidth - keybindWidth - spacing;

    std::string checkboxId = "##checkbox_" + std::string(label);
    std::string keybindId = "##keybind_" + feature;
    ImGuiID keybindButtonID = ImGui::GetID(keybindId.c_str());

    ImGui::AlignTextToFramePadding();
    ImGui::Text("%s", label);

    ImGui::SameLine(remainingWidth);
    bool checkboxClicked = ImGui::Checkbox(checkboxId.c_str(), value);
    if (checkboxClicked) {
        Config::SaveConfig();
    }

    int key = Config::GetKeybind(feature);
    const char* keyName = GetKeyName(key);

    ImGui::SameLine();
    bool isThisBindingActive = (currentBindingFeature == feature);

    ImGui::PushID(keybindId.c_str());
    bool keybindButtonClicked = ImGui::Button(
        isThisBindingActive ? "Press a key..." : keyName,
        ImVec2(keybindWidth, 0)
    );
    ImGui::PopID();

    if (keybindButtonClicked) {
        if (currentBindingFeature.empty() || currentBindingFeature == feature) {
            if (currentBindingFeature == feature) {
                currentBindingFeature = "";
                isAnyBindingActive = false;
            }
            else {
                currentBindingFeature = feature;
                isAnyBindingActive = true;
                lastFocusedID = keybindButtonID;
            }
        }
        else {
            currentBindingFeature = feature;
            isAnyBindingActive = true;
            lastFocusedID = keybindButtonID;
        }
    }

    if (isThisBindingActive) {
        if (ImGui::IsKeyPressed(ImGuiKey_Escape, false)) {
            Config::SetKeybind(feature, 0);
            currentBindingFeature = "";
            isAnyBindingActive = false;
            Config::SaveConfig();
            return;
        }

        for (int key = ImGuiKey_Tab; key < ImGuiKey_COUNT; key++) {
            if (ImGui::IsKeyPressed(static_cast<ImGuiKey>(key), false)) {
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

void SetKeybindingForFeature(const std::string& feature) {
    currentBindingFeature = feature;
    isAnyBindingActive = true;
}


void HandleKeybinds() {
    if (Config::ChatActive) return;
    if (IsGameFocused() == false) return;
    if (!currentBindingFeature.empty() || isAnyBindingActive)
        return;
    if (Config::Features.empty() || Config::Keybinds.empty()) {
        return;
    }

    for (auto& [feature, keyCode] : Config::Keybinds) {
        if (keyCode == 0)
            continue;

        bool currentState = false;

        int vkCode = keyCode;

        if (keyCode >= VK_LBUTTON && keyCode <= VK_XBUTTON2) {
            vkCode = keyCode;
        }

        else if (keyCode >= ImGuiKey_Tab && keyCode < ImGuiKey_COUNT) {
            vkCode = ImGuiKeyToVKey(keyCode);
        }

        if (vkCode != 0) {
            currentState = (GetAsyncKeyState(vkCode) & 0x8000) != 0;
        }

        if (currentState && !lastKeyState[keyCode]) {
            auto it = Config::Features.find(feature);
            if (it != Config::Features.end()) {
                it->second = !it->second;
            }
        }
        lastKeyState[keyCode] = currentState;
    }
}