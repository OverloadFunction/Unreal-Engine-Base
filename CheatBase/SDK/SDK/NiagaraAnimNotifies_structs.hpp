﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraAnimNotifies

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct NiagaraAnimNotifies.CurveParameterPair
// 0x0018 (0x0018 - 0x0000)
struct FCurveParameterPair final
{
public:
	class FName                                   AnimCurveName;                                     // 0x0000(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   UserVariableName;                                  // 0x000C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCurveParameterPair) == 0x000004, "Wrong alignment on FCurveParameterPair");
static_assert(sizeof(FCurveParameterPair) == 0x000018, "Wrong size on FCurveParameterPair");
static_assert(offsetof(FCurveParameterPair, AnimCurveName) == 0x000000, "Member 'FCurveParameterPair::AnimCurveName' has a wrong offset!");
static_assert(offsetof(FCurveParameterPair, UserVariableName) == 0x00000C, "Member 'FCurveParameterPair::UserVariableName' has a wrong offset!");

}

