﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Menu_Slasher13

#include "Basic.hpp"

#include "BP_Menu_Slasher13_classes.hpp"
#include "BP_Menu_Slasher13_parameters.hpp"


namespace SDK
{

// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.ExecuteUbergraph_BP_Menu_Slasher13
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Menu_Slasher13_C::ExecuteUbergraph_BP_Menu_Slasher13(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "ExecuteUbergraph_BP_Menu_Slasher13");

	Params::BP_Menu_Slasher13_C_ExecuteUbergraph_BP_Menu_Slasher13 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.GetShard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent**          Shard                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Menu_Slasher13_C::GetShard(class USkeletalMeshComponent** Shard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "GetShard");

	Params::BP_Menu_Slasher13_C_GetShard Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Shard != nullptr)
		*Shard = Parms.Shard;
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.GetSword
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent**          Sword                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Menu_Slasher13_C::GetSword(class USkeletalMeshComponent** Sword)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "GetSword");

	Params::BP_Menu_Slasher13_C_GetSword Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Sword != nullptr)
		*Sword = Parms.Sword;
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordAppear
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher13_C::K13_FX_MakeSwordAppear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "K13_FX_MakeSwordAppear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordDisappear
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher13_C::K13_FX_MakeSwordDisappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "K13_FX_MakeSwordDisappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher13_C::K13_FX_MakeSwordInvisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "K13_FX_MakeSwordInvisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordVisible
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher13_C::K13_FX_MakeSwordVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "K13_FX_MakeSwordVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_ModifyFace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  SadFaceCurveValue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MadFaceCurveValue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Menu_Slasher13_C::K13_FX_ModifyFace(double SadFaceCurveValue, double MadFaceCurveValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "K13_FX_ModifyFace");

	Params::BP_Menu_Slasher13_C_K13_FX_ModifyFace Parms{};

	Parms.SadFaceCurveValue = SadFaceCurveValue;
	Parms.MadFaceCurveValue = MadFaceCurveValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Make Sword Disappear__FinishedFunc
// (BlueprintEvent)

void ABP_Menu_Slasher13_C::Make_Sword_Disappear__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "Make Sword Disappear__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Make Sword Disappear__UpdateFunc
// (BlueprintEvent)

void ABP_Menu_Slasher13_C::Make_Sword_Disappear__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "Make Sword Disappear__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.OnAttack_StopTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher13_C::OnAttack_StopTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "OnAttack_StopTimeline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.OnCustomizationUpdated
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher13_C::OnCustomizationUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "OnCustomizationUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Menu_Slasher13_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Show Sword__FinishedFunc
// (BlueprintEvent)

void ABP_Menu_Slasher13_C::Show_Sword__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "Show Sword__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Show Sword__UpdateFunc
// (BlueprintEvent)

void ABP_Menu_Slasher13_C::Show_Sword__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "Show Sword__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_Menu_Slasher13_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_Menu_Slasher13_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Menu_Slasher13_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

