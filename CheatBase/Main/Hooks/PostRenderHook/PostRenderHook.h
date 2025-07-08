#pragma once
#include "../../../Headers/Include.h"

typedef void(__fastcall* PostRenderFn)(SDK::UGameViewportClient* UGameViewportClient, SDK::UCanvas* UCanvas);
extern PostRenderFn oPostRender;

void __fastcall PostRenderHooked(SDK::UGameViewportClient* UGameViewportClient, SDK::UCanvas* UCanvas);
