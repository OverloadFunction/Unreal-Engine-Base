#pragma once
#include "../../../Headers/Include.h"

typedef void(__fastcall* ProcessRemoteFunctionFn)(SDK::UNetDriver* UNetDriver, void* Function, void* Parameters, void* FunctionName);
extern ProcessRemoteFunctionFn oProcessRemoteFunction;

void __fastcall ProcessRemoteFunction(SDK::UNetDriver* UNetDriver, void* Function, void* Parameters, void* FunctionName);