#include "../../Headers/Include.h"
#include "../Hooks/ProcessEventHook/ProcessEventHook.h"

void ProcessEvent(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters) {
    if (!Function) return;
    auto Find = Config::FunctionCalls.find(Function->GetFullName().c_str());

    if (Find == Config::FunctionCalls.end())
    {
        Config::FunctionCalls.insert(std::make_pair(Function->GetFullName().c_str(), 1));
    }
    else
    {
        Find->second++;
    }

    std::string name = Function->GetFullName();

    oProcessEvent(Object, Function, Parameters);
}