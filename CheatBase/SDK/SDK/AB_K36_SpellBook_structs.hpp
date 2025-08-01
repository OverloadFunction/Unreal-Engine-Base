﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_K36_SpellBook

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct AB_K36_SpellBook.AB_K36_SpellBook_C.AnimBlueprintGeneratedConstantData
// 0x01A7 (0x01A8 - 0x0001)
struct AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_144;                                // 0x0004(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_145;                                // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_146;                                  // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_147;                                // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_148;                                // 0x0021(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_149;                               // 0x0028(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 __ArrayProperty_150;                               // 0x0038(0x0010)(BlueprintVisible)
	class FName                                   __NameProperty_151;                                // 0x0048(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_152;                                // 0x0054(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_153;                                // 0x0060(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_154;                                // 0x006C(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_155;                                 // 0x0078(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_156;                                // 0x007C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_157;                               // 0x0080(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_158;                              // 0x0084(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_159;                               // 0x00B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_160;                                // 0x00B4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_161;                                // 0x00B5(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_162;                                // 0x00B6(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B7[0x1];                                       // 0x00B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_163;                                // 0x00B8(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_164;                                 // 0x00C4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_165;                                // 0x00C8(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_166;                                // 0x00D4(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_167;                                 // 0x00E0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_168;                              // 0x00E8(0x0028)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0110(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0190(0x0018)()
};
static_assert(alignof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData) == 0x0001A8, "Wrong size on AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __NameProperty_144) == 0x000004, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__NameProperty_144' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __BlendProfile_145) == 0x000010, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__BlendProfile_145' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __CurveFloat_146) == 0x000018, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__CurveFloat_146' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __EnumProperty_147) == 0x000020, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__EnumProperty_147' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __EnumProperty_148) == 0x000021, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__EnumProperty_148' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __ArrayProperty_149) == 0x000028, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__ArrayProperty_149' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __ArrayProperty_150) == 0x000038, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__ArrayProperty_150' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __NameProperty_151) == 0x000048, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__NameProperty_151' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __NameProperty_152) == 0x000054, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__NameProperty_152' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __NameProperty_153) == 0x000060, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__NameProperty_153' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __NameProperty_154) == 0x00006C, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__NameProperty_154' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __IntProperty_155) == 0x000078, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__IntProperty_155' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __BoolProperty_156) == 0x00007C, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__BoolProperty_156' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __FloatProperty_157) == 0x000080, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__FloatProperty_157' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __StructProperty_158) == 0x000084, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__StructProperty_158' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __FloatProperty_159) == 0x0000B0, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__FloatProperty_159' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __BoolProperty_160) == 0x0000B4, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__BoolProperty_160' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __EnumProperty_161) == 0x0000B5, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__EnumProperty_161' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __ByteProperty_162) == 0x0000B6, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__ByteProperty_162' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __NameProperty_163) == 0x0000B8, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__NameProperty_163' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __IntProperty_164) == 0x0000C4, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__IntProperty_164' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __NameProperty_165) == 0x0000C8, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__NameProperty_165' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __NameProperty_166) == 0x0000D4, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__NameProperty_166' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __IntProperty_167) == 0x0000E0, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__IntProperty_167' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, __StructProperty_168) == 0x0000E8, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::__StructProperty_168' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000110, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000190, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct AB_K36_SpellBook.AB_K36_SpellBook_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct AB_K36_SpellBook::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         __ByteProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_K36_SpellBook::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on AB_K36_SpellBook::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AB_K36_SpellBook::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on AB_K36_SpellBook::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AB_K36_SpellBook::FAnimBlueprintGeneratedMutableData, __ByteProperty) == 0x000001, "Member 'AB_K36_SpellBook::FAnimBlueprintGeneratedMutableData::__ByteProperty' has a wrong offset!");

}

