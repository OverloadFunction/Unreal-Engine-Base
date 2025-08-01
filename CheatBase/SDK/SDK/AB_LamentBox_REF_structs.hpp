﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_LamentBox_REF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct AB_LamentBox_REF.AB_LamentBox_REF_C.AnimBlueprintGeneratedConstantData
// 0x00E7 (0x00E8 - 0x0001)
struct AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_7;                                  // 0x0004(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_8;                                  // 0x0010(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_9;                                // 0x0020(0x0028)(BlueprintVisible, NoDestructor)
	ERefPoseType                                  __ByteProperty_10;                                 // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0050(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00D0(0x0018)()
};
static_assert(alignof(AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData) == 0x0000E8, "Wrong size on AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData, __NameProperty_7) == 0x000004, "Member 'AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData::__NameProperty_7' has a wrong offset!");
static_assert(offsetof(AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData, __NameProperty_8) == 0x000010, "Member 'AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData::__NameProperty_8' has a wrong offset!");
static_assert(offsetof(AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData, __StructProperty_9) == 0x000020, "Member 'AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData::__StructProperty_9' has a wrong offset!");
static_assert(offsetof(AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData, __ByteProperty_10) == 0x000048, "Member 'AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData::__ByteProperty_10' has a wrong offset!");
static_assert(offsetof(AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000050, "Member 'AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000D0, "Member 'AB_LamentBox_REF::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct AB_LamentBox_REF.AB_LamentBox_REF_C.AnimBlueprintGeneratedMutableData
// 0x0000 (0x0001 - 0x0001)
struct AB_LamentBox_REF::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
};
static_assert(alignof(AB_LamentBox_REF::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on AB_LamentBox_REF::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AB_LamentBox_REF::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong size on AB_LamentBox_REF::FAnimBlueprintGeneratedMutableData");

}

