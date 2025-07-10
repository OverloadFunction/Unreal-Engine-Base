#include "../Tabs.h"

void DebugTab() {
    ImGui::Checkbox("Show ProcessEvent Logger", &Config::Console);
    if (ImGui::Button("Toast Notif", ImVec2(100, 100))) ImGui::InsertNotification({ ImGuiToastType::Success, 3000, "Menu Open!" });
}