#include "Menu.h"

int currentTab = 0;
int lastTab = -1;
float menuAlpha = 0.0f;
float menuScale = 0.8f;
bool isAnimating = false;
bool injected = false;
ImVec2 menuPos = ImVec2(0, 0);
float contentAlpha = 1.0f;

void RenderMenu() {
    static bool wasOpen = false;
    if (!injected)
    {
        ApplyStyle();
        ImGuiToast toast(ImGuiToastType::Success, 5000);
        toast.setTitle("Successfully Injected!");
        //toast.setContent("Press insert key to open menu...");
        ImGui::InsertNotification(toast);
        injected = true;
    }

    if (Config::Open) {
        if (!wasOpen) {
            menuAlpha = 0.0f;
            menuScale = 0.8f;
            isAnimating = true;
            wasOpen = true;
        }

        menuAlpha = Lerp(menuAlpha, 1.0f, 0.1f);
        menuScale = Lerp(menuScale, 1.0f, 0.1f);

        ImGui::SetNextWindowSize(ImVec2(600 * menuScale, 400 * menuScale));
        ImGui::SetNextWindowBgAlpha(menuAlpha);
        ImGui::SetNextWindowPos(menuPos, ImGuiCond_FirstUseEver);

        ImGui::Begin("WhiteWyche", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);
        if (ImGui::IsWindowHovered() && ImGui::IsMouseDragging(0)) {
            menuPos.x += ImGui::GetIO().MouseDelta.x;
            menuPos.y += ImGui::GetIO().MouseDelta.y;
        }

        if (currentTab != lastTab) {
            contentAlpha = 0.0f;
            lastTab = currentTab;
        }
        contentAlpha = Lerp(contentAlpha, 1.0f, 0.025f);

        ImGui::Columns(2, nullptr, false);
        ImGui::SetColumnWidth(0, 120);
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 5);

        float currentAlpha = ImGui::GetStyle().Alpha;
        ImGui::PushStyleVar(ImGuiStyleVar_Alpha, menuAlpha);

        ImGui::BeginChild("Sidebar", ImVec2(120, 0), true);
        if (SidebarButton("Info", currentTab, 0)) currentTab = 0;
        if (SidebarButton("Debug", currentTab, 9)) currentTab = 9;
        ImGui::EndChild();

        ImGui::PopStyleVar();

        ImGui::NextColumn();

        float padding = 10.0f;
        float rounding = 10.0f;
        float columnWidth = ImGui::GetColumnWidth();
        float contentHeight = ImGui::GetContentRegionAvail().y;
        ImVec2 contentPos = ImGui::GetCursorScreenPos();
        contentPos.y += (padding / 2);
        ImVec2 boxSize = ImVec2(columnWidth - padding * 2, contentHeight - padding);

        ImDrawList* drawList = ImGui::GetWindowDrawList();
        drawList->AddRectFilled(
            ImVec2(contentPos.x, contentPos.y),
            ImVec2(contentPos.x + boxSize.x, contentPos.y + boxSize.y),
            IM_COL32(14, 17, 19, (int)(255 * menuAlpha)),
            rounding
        );

        ImGui::PushStyleVar(ImGuiStyleVar_Alpha, contentAlpha * menuAlpha);

        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPosX() + padding, ImGui::GetCursorPosY() + padding));
        ImGui::BeginChild("MainContent", ImVec2(boxSize.x - padding * 2, boxSize.y - padding * 2), true, ImGuiWindowFlags_NoScrollbar);

        switch (currentTab) {
        case 0: InfoTab(); break;
        case 9: DebugTab(); break;
        }

        ImGui::EndChild();
        ImGui::PopStyleVar();

        ImGui::End();

        menuPos = ImGui::GetWindowPos();
    }
    else if (isAnimating) {
        menuAlpha = Lerp(menuAlpha, 0.0f, 0.1f);
        menuScale = Lerp(menuScale, 0.8f, 0.1f);

        if (menuAlpha <= 0.01f) {
            isAnimating = false;
            wasOpen = false;
        }
    }
}