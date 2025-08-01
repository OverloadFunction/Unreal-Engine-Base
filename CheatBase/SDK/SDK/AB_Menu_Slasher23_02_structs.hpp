﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Menu_Slasher23_02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct AB_Menu_Slasher23_02.AB_Menu_Slasher23_02_C.AnimBlueprintGeneratedConstantData
// 0x015F (0x0160 - 0x0001)
struct AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_43;                                 // 0x0004(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_44;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_45;                                   // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_46;                                 // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_47;                                 // 0x0021(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_48;                                // 0x0028(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 __ArrayProperty_49;                                // 0x0038(0x0010)(BlueprintVisible)
	bool                                          __BoolProperty_50;                                 // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_51;                                // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_52;                               // 0x0050(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_53;                                // 0x007C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_54;                                 // 0x0080(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_55;                                 // 0x0081(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_56;                                 // 0x0082(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83[0x1];                                       // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_57;                                 // 0x0084(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_58;                                 // 0x0090(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_59;                                  // 0x009C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_60;                               // 0x00A0(0x0028)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00C8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0148(0x0018)()
};
static_assert(alignof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData) == 0x000160, "Wrong size on AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __NameProperty_43) == 0x000004, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__NameProperty_43' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __BlendProfile_44) == 0x000010, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__BlendProfile_44' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __CurveFloat_45) == 0x000018, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__CurveFloat_45' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __EnumProperty_46) == 0x000020, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__EnumProperty_46' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __EnumProperty_47) == 0x000021, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__EnumProperty_47' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __ArrayProperty_48) == 0x000028, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__ArrayProperty_48' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __ArrayProperty_49) == 0x000038, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__ArrayProperty_49' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __BoolProperty_50) == 0x000048, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__BoolProperty_50' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __FloatProperty_51) == 0x00004C, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__FloatProperty_51' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __StructProperty_52) == 0x000050, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__StructProperty_52' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __FloatProperty_53) == 0x00007C, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__FloatProperty_53' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __EnumProperty_54) == 0x000080, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__EnumProperty_54' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __ByteProperty_55) == 0x000081, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__ByteProperty_55' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __BoolProperty_56) == 0x000082, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__BoolProperty_56' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __NameProperty_57) == 0x000084, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__NameProperty_57' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __NameProperty_58) == 0x000090, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__NameProperty_58' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __IntProperty_59) == 0x00009C, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__IntProperty_59' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, __StructProperty_60) == 0x0000A0, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::__StructProperty_60' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C8, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000148, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct AB_Menu_Slasher23_02.AB_Menu_Slasher23_02_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct AB_Menu_Slasher23_02::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         __ByteProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on AB_Menu_Slasher23_02::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on AB_Menu_Slasher23_02::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AB_Menu_Slasher23_02::FAnimBlueprintGeneratedMutableData, __ByteProperty) == 0x000001, "Member 'AB_Menu_Slasher23_02::FAnimBlueprintGeneratedMutableData::__ByteProperty' has a wrong offset!");

}

