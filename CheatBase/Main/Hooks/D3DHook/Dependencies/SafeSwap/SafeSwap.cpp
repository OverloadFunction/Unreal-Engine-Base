#include "SafeSwap.h"

void SafeDrawlistSwap::Render()
{
    std::unique_lock<std::shared_mutex> lock(this->m_Mutex);
    ImGui_ImplDX11_RenderDrawData(&this->m_TempData);
}

void SafeDrawlistSwap::Swap(const ImDrawData* Data)
{
    std::unique_lock<std::shared_mutex> lock(this->m_Mutex);

    m_TempData.Clear();

    if (Data == nullptr || Data->CmdListsCount == 0)
        return;

    m_TempData.Valid = Data->Valid;
    m_TempData.CmdListsCount = Data->CmdListsCount;
    m_TempData.TotalVtxCount = Data->TotalVtxCount;
    m_TempData.TotalIdxCount = Data->TotalIdxCount;
    m_TempData.DisplayPos = Data->DisplayPos;
    m_TempData.DisplaySize = Data->DisplaySize;
    m_TempData.FramebufferScale = Data->FramebufferScale;

    m_TempData.CmdLists.resize(Data->CmdListsCount);

    for (int i = 0; i < Data->CmdListsCount; i++)
    {
        m_TempData.CmdLists[i] = Data->CmdLists[i]->CloneOutput();
    }
}