﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Menu_Slasher34

#include "Basic.hpp"

#include "BP_Menu_Slasher34_classes.hpp"
#include "BP_Menu_Slasher34_parameters.hpp"


namespace SDK
{

// Function BP_Menu_Slasher34.BP_Menu_Slasher34_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EAudioCustomizationCategory             category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    switchState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Menu_Slasher34_C::BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, const class FString& switchState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher34_C", "BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature");

	Params::BP_Menu_Slasher34_C_BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature Parms{};

	Parms.category = category;
	Parms.switchState = std::move(switchState);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Menu_Slasher34.BP_Menu_Slasher34_C.ExecuteUbergraph_BP_Menu_Slasher34
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Menu_Slasher34_C::ExecuteUbergraph_BP_Menu_Slasher34(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher34_C", "ExecuteUbergraph_BP_Menu_Slasher34");

	Params::BP_Menu_Slasher34_C_ExecuteUbergraph_BP_Menu_Slasher34 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Menu_Slasher34.BP_Menu_Slasher34_C.OnCustomizationChanged_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher34_C::OnCustomizationChanged_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher34_C", "OnCustomizationChanged_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher34.BP_Menu_Slasher34_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Menu_Slasher34_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher34_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

