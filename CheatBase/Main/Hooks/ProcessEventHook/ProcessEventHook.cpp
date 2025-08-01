#include "ProcessEventHook.h"

tProcessEvent oProcessEvent = nullptr;

namespace Hooks
{

    void ProcessEventHook()
    {
    InitStart:
        auto GWorld = reinterpret_cast<SDK::UWorld**>((uint64_t)GetModuleHandle(0) + (uintptr_t)SDK::Offsets::GWorld);
        auto UWorld = *GWorld;
        if (!UWorld) goto InitStart;

        auto GameInstance = UWorld->OwningGameInstance;
        if (!GameInstance) goto InitStart;

        auto LocalPlayer = GameInstance->LocalPlayers[0];
        if (!LocalPlayer) goto InitStart;

        auto PlayerController = LocalPlayer->PlayerController;
        if (!PlayerController) goto InitStart;

        auto BaseObject = static_cast<SDK::UObject*>(PlayerController);

        if (!oProcessEvent) {
            void** VTable = *(void***)BaseObject;
            DWORD oldProtect;
            VirtualProtect(&VTable[Insert Vtable index here], 8, PAGE_EXECUTE_READWRITE, &oldProtect);
            oProcessEvent = (tProcessEvent)VTable[Insert Vtable index here];
            VTable[Insert Vtable index here] = (void*)ProcessEvent;
            VirtualProtect(&VTable[Insert Vtable index here], 8, oldProtect, nullptr);
            printf("hooked processevent\n");
        }
    }
}
