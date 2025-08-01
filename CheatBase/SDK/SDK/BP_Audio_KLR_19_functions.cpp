﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Audio_KLR_19

#include "Basic.hpp"

#include "BP_Audio_KLR_19_classes.hpp"
#include "BP_Audio_KLR_19_parameters.hpp"


namespace SDK
{

// Function BP_Audio_KLR_19.BP_Audio_KLR_19_C.ExecuteUbergraph_BP_Audio_KLR_19
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Audio_KLR_19_C::ExecuteUbergraph_BP_Audio_KLR_19(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Audio_KLR_19_C", "ExecuteUbergraph_BP_Audio_KLR_19");

	Params::BP_Audio_KLR_19_C_ExecuteUbergraph_BP_Audio_KLR_19 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Audio_KLR_19.BP_Audio_KLR_19_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Audio_KLR_19_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Audio_KLR_19_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Audio_KLR_19.BP_Audio_KLR_19_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Audio_KLR_19_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Audio_KLR_19_C", "ReceiveEndPlay");

	Params::BP_Audio_KLR_19_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}

