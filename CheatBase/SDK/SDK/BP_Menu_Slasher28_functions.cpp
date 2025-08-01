﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Menu_Slasher28

#include "Basic.hpp"

#include "BP_Menu_Slasher28_classes.hpp"
#include "BP_Menu_Slasher28_parameters.hpp"


namespace SDK
{

// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.ExecuteUbergraph_BP_Menu_Slasher28
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Menu_Slasher28_C::ExecuteUbergraph_BP_Menu_Slasher28(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "ExecuteUbergraph_BP_Menu_Slasher28");

	Params::BP_Menu_Slasher28_C_ExecuteUbergraph_BP_Menu_Slasher28 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_ExitingLocker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher28_C::FX_K28_ExitingLocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "FX_K28_ExitingLocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_HideKiller
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher28_C::FX_K28_HideKiller()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "FX_K28_HideKiller");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_NightBegins
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher28_C::FX_K28_NightBegins()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "FX_K28_NightBegins");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_NightEnds
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher28_C::FX_K28_NightEnds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "FX_K28_NightEnds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_ShowKiller
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher28_C::FX_K28_ShowKiller()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "FX_K28_ShowKiller");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.OnCustomizationChanged_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher28_C::OnCustomizationChanged_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "OnCustomizationChanged_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Menu_Slasher28_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher28.BP_Menu_Slasher28_C.SetAudioSwitchSubKillerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Switch_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Menu_Slasher28_C::SetAudioSwitchSubKillerState(const class FString& Switch_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher28_C", "SetAudioSwitchSubKillerState");

	Params::BP_Menu_Slasher28_C_SetAudioSwitchSubKillerState Parms{};

	Parms.Switch_State = std::move(Switch_State);

	UObject::ProcessEvent(Func, &Parms);
}

}

