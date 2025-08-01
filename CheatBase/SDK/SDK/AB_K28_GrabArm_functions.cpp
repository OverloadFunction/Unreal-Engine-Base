﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_K28_GrabArm

#include "Basic.hpp"

#include "AB_K28_GrabArm_classes.hpp"
#include "AB_K28_GrabArm_parameters.hpp"


namespace SDK
{

// Function AB_K28_GrabArm.AB_K28_GrabArm_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAB_K28_GrabArm_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_K28_GrabArm_C", "AnimGraph");

	Params::AB_K28_GrabArm_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AB_K28_GrabArm.AB_K28_GrabArm_C.ExecuteUbergraph_AB_K28_GrabArm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_K28_GrabArm_C::ExecuteUbergraph_AB_K28_GrabArm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_K28_GrabArm_C", "ExecuteUbergraph_AB_K28_GrabArm");

	Params::AB_K28_GrabArm_C_ExecuteUbergraph_AB_K28_GrabArm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

