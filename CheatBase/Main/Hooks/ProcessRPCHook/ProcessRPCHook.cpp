#include "ProcessRPCHook.h"

ProcessRemoteFunctionFn oProcessRemoteFunction = nullptr;

namespace Hooks
{
	void ProcessRPCHook()
	{
		auto GWorld = reinterpret_cast<SDK::UWorld**>((uint64_t)GetModuleHandle(0) + (uintptr_t)SDK::Offsets::GWorld);
		auto UWorld = *GWorld;
		if (!UWorld) return;

		auto NetDriver = UWorld->NetDriver;
		if (!NetDriver) return;

		void** NetDriverVTable = (void**)NetDriver->VTable;
		if (!NetDriverVTable) return;

		/*const void* target = reinterpret_cast<void*>(0x7FF6BBE55DD0);

		// Search VTable
		int index = -1;
		printf("starting loop\n");
		for (int i = 0; i < 500; ++i)
		{
			if (NetDriverVTable[i] == target)
			{
				index = i;
				break;
			}
		}

		if (index == -1)
		{
			printf("Function 0x%p not found in VTable!\n", target);
			return;
		}

		printf("Found target function at VTable index: %d\n", index);*/

		static DWORD Restore;
		VirtualProtect(&NetDriverVTable[106], 8, PAGE_EXECUTE_READWRITE, &Restore);
		oProcessRemoteFunction = reinterpret_cast<decltype(oProcessRemoteFunction)>(NetDriverVTable[106]);
		NetDriverVTable[106] = &ProcessRemoteFunction;
		VirtualProtect(&NetDriverVTable[106], 8, Restore, 0);

		printf("ProcessRemoteFunction Hooked\n");
		Config::PostRenderInit = true;
	}
}