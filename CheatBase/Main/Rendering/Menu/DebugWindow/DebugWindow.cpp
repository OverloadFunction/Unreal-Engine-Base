#include "DebugWindow.h"

void RenderDebugWindow()
{
	ImGui::Begin("Console", nullptr, ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse);

	ImGui::Checkbox("Function Log", &Config::ProcessEventDraw);
	ImGui::SameLine();
	ImGui::Checkbox("RPC Log", &Config::ProcessRemoteFunctionDraw);
	ImGui::SameLine();
	ImGui::Checkbox("Request Log", &Config::RequestDraw);
	ImGui::SameLine();
	ImGui::InputText("Search", (char*)Config::Filter.c_str(), sizeof((char*)Config::Filter.c_str()));

	if (Config::ProcessEventDraw)
	{
		for (const auto& Entry : Config::FunctionCalls)
		{
			std::string Text = Entry.first + " [" + std::to_string(Entry.second) + "]";
			if (Entry.first.find(Config::Filter.c_str()) != std::string::npos)
			{
				if (ImGui::Selectable(Text.c_str()))
				{
					ImGui::SetClipboardText(Entry.first.c_str());
				}
			}
		}
	}
	else
	{
		Config::FunctionCalls = {};
	}

	if (Config::ProcessRemoteFunctionDraw)
	{
		for (const auto& Entry : Config::RPCCalls)
		{
			std::string Text = Entry.first + " [" + std::to_string(Entry.second) + "]";
			if (Entry.first.find(Config::Filter.c_str()) != std::string::npos)
			{
				if (ImGui::Selectable(Text.c_str()))
				{
					ImGui::SetClipboardText(Entry.first.c_str());
				}
			}
		}
	}
	else
	{
		Config::RPCCalls = {};
	}
	ImGui::End();
}