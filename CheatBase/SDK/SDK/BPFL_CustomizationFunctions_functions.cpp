﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_CustomizationFunctions

#include "Basic.hpp"

#include "BPFL_CustomizationFunctions_classes.hpp"
#include "BPFL_CustomizationFunctions_parameters.hpp"


namespace SDK
{

// Function BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C.GetOwningSkeletalMesh
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimInstance*                    Anim_Instance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent**          Skeletal_Mesh_Component                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPFL_CustomizationFunctions_C::GetOwningSkeletalMesh(class UAnimInstance* Anim_Instance, class UObject* __WorldContext, class USkeletalMeshComponent** Skeletal_Mesh_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_CustomizationFunctions_C", "GetOwningSkeletalMesh");

	Params::BPFL_CustomizationFunctions_C_GetOwningSkeletalMesh Parms{};

	Parms.Anim_Instance = Anim_Instance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Skeletal_Mesh_Component != nullptr)
		*Skeletal_Mesh_Component = Parms.Skeletal_Mesh_Component;
}

}

