﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Audio_KLR_08

#include "Basic.hpp"

#include "BP_Audio_KLR_08_classes.hpp"
#include "BP_Audio_KLR_08_parameters.hpp"


namespace SDK
{

// Function BP_Audio_KLR_08.BP_Audio_KLR_08_C.ExecuteUbergraph_BP_Audio_KLR_08
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Audio_KLR_08_C::ExecuteUbergraph_BP_Audio_KLR_08(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Audio_KLR_08_C", "ExecuteUbergraph_BP_Audio_KLR_08");

	Params::BP_Audio_KLR_08_C_ExecuteUbergraph_BP_Audio_KLR_08 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Audio_KLR_08.BP_Audio_KLR_08_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Audio_KLR_08_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Audio_KLR_08_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Audio_KLR_08.BP_Audio_KLR_08_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Audio_KLR_08_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Audio_KLR_08_C", "ReceiveEndPlay");

	Params::BP_Audio_KLR_08_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Audio_KLR_08.BP_Audio_KLR_08_C.SelectAudioStatusStartEvent
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsInMenu                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent**                   AudioEvent                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Audio_KLR_08_C::SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Audio_KLR_08_C", "SelectAudioStatusStartEvent");

	Params::BP_Audio_KLR_08_C_SelectAudioStatusStartEvent Parms{};

	Parms.IsInMenu = IsInMenu;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioEvent != nullptr)
		*AudioEvent = Parms.AudioEvent;
}

}

