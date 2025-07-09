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

		static DWORD Restore;
		VirtualProtect(&NetDriverVTable[Insert Vtable index here], 8, PAGE_EXECUTE_READWRITE, &Restore);
		oProcessRemoteFunction = reinterpret_cast<decltype(oProcessRemoteFunction)>(NetDriverVTable[Insert Vtable index here]);
		NetDriverVTable[Insert Vtable index here] = &ProcessRemoteFunction;
		VirtualProtect(&NetDriverVTable[Insert Vtable index here], 8, Restore, 0);

		printf("ProcessRemoteFunction Hooked\n");
		Config::PostRenderInit = true;
	}
}
