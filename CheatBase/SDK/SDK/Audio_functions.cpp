﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Audio

#include "Basic.hpp"

#include "Audio_classes.hpp"
#include "Audio_parameters.hpp"


namespace SDK
{

// Function Audio.Audio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAudio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Audio_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Audio.Audio_C.ExecuteUbergraph_Audio
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAudio_C::ExecuteUbergraph_Audio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Audio_C", "ExecuteUbergraph_Audio");

	Params::Audio_C_ExecuteUbergraph_Audio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

