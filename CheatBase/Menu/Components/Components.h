#pragma once
#include "../Main/Menu.h"

bool SidebarButton(const char* label, int currentTab, int tabID);
void Checkbox(const char* label, bool* value, const std::string& feature);
void SliderFloat(const char* label, float* value, float min, float max, const char* format = "%.3f", float power = 1.0f);
void SliderInt(const char* label, int* value, int min, int max, const char* format = "%d");
bool InputTextMultiline(const char* label, char* buffer, size_t buffer_size);
void KeybindButton(const char* label, const std::string& feature);