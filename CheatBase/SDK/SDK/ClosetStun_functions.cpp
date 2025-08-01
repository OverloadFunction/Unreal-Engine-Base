﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClosetStun

#include "Basic.hpp"

#include "ClosetStun_classes.hpp"
#include "ClosetStun_parameters.hpp"


namespace SDK
{

// Function ClosetStun.ClosetStun_C.ExecuteUbergraph_ClosetStun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClosetStun_C::ExecuteUbergraph_ClosetStun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetStun_C", "ExecuteUbergraph_ClosetStun");

	Params::ClosetStun_C_ExecuteUbergraph_ClosetStun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClosetStun.ClosetStun_C.GetCamper
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClosetStun_C::GetCamper(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetStun_C", "GetCamper");

	Params::ClosetStun_C_GetCamper Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function ClosetStun.ClosetStun_C.OnInteractionEnterStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   actualSnapTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClosetStun_C::OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetStun_C", "OnInteractionEnterStart");

	Params::ClosetStun_C_OnInteractionEnterStart Parms{};

	Parms.Player = Player;
	Parms.actualSnapTime = actualSnapTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

