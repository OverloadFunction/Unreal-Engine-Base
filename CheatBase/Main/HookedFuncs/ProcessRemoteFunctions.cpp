#include "../../Headers/Include.h"
#include "../Hooks/ProcessRPCHook/ProcessRPCHook.h"

void __fastcall ProcessRemoteFunction(SDK::UNetDriver* UNetDriver, void* Function, void* Parameters, void* FunctionName)
{
    if (oProcessRemoteFunction) oProcessRemoteFunction(UNetDriver, Function, Parameters, FunctionName);

    auto UFunction = static_cast<SDK::UFunction*>(Function);
    std::string functionName = UFunction->GetFullName();

    auto find = Config::RPCCalls.find(functionName);
    if (find == Config::RPCCalls.end())
        Config::RPCCalls.insert({ functionName, 1 });
    else
        find->second++;
}