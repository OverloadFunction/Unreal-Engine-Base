#pragma once
#include "../../../Headers/Include.h"

typedef void(*tProcessEvent)(SDK::UObject*, SDK::UFunction*, void*);
extern tProcessEvent oProcessEvent;

void ProcessEvent(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters);