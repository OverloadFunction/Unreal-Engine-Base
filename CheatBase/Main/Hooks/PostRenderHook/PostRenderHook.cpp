#include "PostRenderHook.h"

PostRenderFn oPostRender = nullptr;

namespace Hooks
{

    void PostRenderHook()
    {
    InitStart:
        auto GWorld = reinterpret_cast<SDK::UWorld**>((uint64_t)GetModuleHandle(0) + (uintptr_t)SDK::Offsets::GWorld);
        auto UWorld = *GWorld;
        if (!UWorld) goto InitStart;

        auto GameInstance = UWorld->OwningGameInstance;
        if (!GameInstance) goto InitStart;

        auto LocalPlayer = GameInstance->LocalPlayers[0];
        if (!LocalPlayer) goto InitStart;

        auto GameViewport = LocalPlayer->ViewportClient;
        if (!GameViewport) goto InitStart;

        void** GameViewportVTable = (void**)GameViewport->VTable;

        if (!oPostRender) {
            DWORD Restore;
            VirtualProtect(&GameViewportVTable[Insert Vtable index here], 8, PAGE_EXECUTE_READWRITE, &Restore);
            oPostRender = reinterpret_cast<decltype(oPostRender)>(GameViewportVTable[Insert Vtable index here]);
            GameViewportVTable[Insert Vtable index here] = &PostRenderHooked;
            VirtualProtect(&GameViewportVTable[Insert Vtable index here], 8, Restore, 0);
            printf("hooked postrender\n");
        }
    }
}
