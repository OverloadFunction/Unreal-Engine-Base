﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Menu_CamperMale10

#include "Basic.hpp"

#include "BP_Menu_CamperMale10_classes.hpp"
#include "BP_Menu_CamperMale10_parameters.hpp"


namespace SDK
{

// Function BP_Menu_CamperMale10.BP_Menu_CamperMale10_C.ExecuteUbergraph_BP_Menu_CamperMale10
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Menu_CamperMale10_C::ExecuteUbergraph_BP_Menu_CamperMale10(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_CamperMale10_C", "ExecuteUbergraph_BP_Menu_CamperMale10");

	Params::BP_Menu_CamperMale10_C_ExecuteUbergraph_BP_Menu_CamperMale10 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Menu_CamperMale10.BP_Menu_CamperMale10_C.OnIsReadyChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsReady                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Menu_CamperMale10_C::OnIsReadyChanged(bool IsReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_CamperMale10_C", "OnIsReadyChanged");

	Params::BP_Menu_CamperMale10_C_OnIsReadyChanged Parms{};

	Parms.IsReady = IsReady;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Menu_CamperMale10.BP_Menu_CamperMale10_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Menu_CamperMale10_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_CamperMale10_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

