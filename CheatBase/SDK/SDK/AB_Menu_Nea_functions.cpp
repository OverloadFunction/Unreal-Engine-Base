﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Menu_Nea

#include "Basic.hpp"

#include "AB_Menu_Nea_classes.hpp"
#include "AB_Menu_Nea_parameters.hpp"


namespace SDK
{

// Function AB_Menu_Nea.AB_Menu_Nea_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAB_Menu_Nea_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Menu_Nea_C", "AnimGraph");

	Params::AB_Menu_Nea_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AB_Menu_Nea.AB_Menu_Nea_C.BlueprintLinkedAnimationLayersInitialized
// (Event, Public, BlueprintEvent)

void UAB_Menu_Nea_C::BlueprintLinkedAnimationLayersInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Menu_Nea_C", "BlueprintLinkedAnimationLayersInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Menu_Nea.AB_Menu_Nea_C.ExecuteUbergraph_AB_Menu_Nea
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Menu_Nea_C::ExecuteUbergraph_AB_Menu_Nea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Menu_Nea_C", "ExecuteUbergraph_AB_Menu_Nea");

	Params::AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Menu_Nea.AB_Menu_Nea_C.Override_Dynamic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Menu_Nea_C::Override_Dynamic(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Menu_Nea_C", "Override_Dynamic");

	Params::AB_Menu_Nea_C_Override_Dynamic Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function AB_Menu_Nea.AB_Menu_Nea_C.Override_Nea_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Menu_Nea_C::Override_Nea_0(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Menu_Nea_C", "Override_Nea_0");

	Params::AB_Menu_Nea_C_Override_Nea_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}

