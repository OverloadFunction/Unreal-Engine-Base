#include "../../Headers/Include.h"
#include "../Hooks/PostRenderHook/PostRenderHook.h"

void __fastcall PostRenderHooked(SDK::UGameViewportClient* UGameViewportClient, SDK::UCanvas* UCanvas)
{
    if (!Config::PresentInit) return oPostRender(UGameViewportClient, UCanvas);

    auto GWorldPtr = (uint64_t)GetModuleHandle(0) + (uintptr_t)SDK::Offsets::GWorld;
    if (!GWorldPtr) return oPostRender(UGameViewportClient, UCanvas);

    auto GWorld = reinterpret_cast<SDK::UWorld**>(GWorldPtr);
    if (!GWorld || !*GWorld) return oPostRender(UGameViewportClient, UCanvas);

    auto UWorld = *GWorld;
    if (!UWorld || !UWorld->PersistentLevel || !UWorld->OwningGameInstance) return oPostRender(UGameViewportClient, UCanvas);

    if (!Config::PostRenderInit) Hooks::ProcessRPCHook();

    auto ULevel = UWorld->PersistentLevel;
    if (!ULevel) return oPostRender(UGameViewportClient, UCanvas);

    auto GameInstance = UWorld->OwningGameInstance;
    if (!GameInstance) return oPostRender(UGameViewportClient, UCanvas);

    auto LocalPlayer = GameInstance->LocalPlayers[0];
    if (!LocalPlayer) return oPostRender(UGameViewportClient, UCanvas);

    auto GameViewport = LocalPlayer->ViewportClient;
    if (!GameViewport) return oPostRender(UGameViewportClient, UCanvas);

    auto PlayerController = LocalPlayer->PlayerController;
    if (!PlayerController) return oPostRender(UGameViewportClient, UCanvas);

    auto Me = (SDK::ADBDPlayer*)PlayerController->Pawn;
    if (!Me || !Me->IsA(Insert player class here)) return oPostRender(UGameViewportClient, UCanvas);

    auto Actors = ULevel->GetActors();
    if (!Actors || Actors.Num() == 0) return oPostRender(UGameViewportClient, UCanvas);

    return oPostRender(UGameViewportClient, UCanvas);
}
