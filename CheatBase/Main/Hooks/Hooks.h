#pragma once
#include "PostRenderHook/PostRenderHook.h"
#include "ProcessRPCHook/ProcessRPCHook.h"
#include "ProcessEventHook/ProcessEventHook.h"

namespace Hooks
{
	void PostRenderHook();
	void InitD3DHooks();
	void ProcessRPCHook();
	void ProcessEventHook();
}