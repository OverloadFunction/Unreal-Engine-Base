﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IKRig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "IKRig_structs.hpp"


namespace SDK::Params
{

// Function IKRig.IKGoalCreatorInterface.AddIKGoals
// 0x0050 (0x0050 - 0x0000)
struct IKGoalCreatorInterface_AddIKGoals final
{
public:
	TMap<class FName, struct FIKRigGoal>          OutGoals;                                          // 0x0000(0x0050)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKGoalCreatorInterface_AddIKGoals) == 0x000008, "Wrong alignment on IKGoalCreatorInterface_AddIKGoals");
static_assert(sizeof(IKGoalCreatorInterface_AddIKGoals) == 0x000050, "Wrong size on IKGoalCreatorInterface_AddIKGoals");
static_assert(offsetof(IKGoalCreatorInterface_AddIKGoals, OutGoals) == 0x000000, "Member 'IKGoalCreatorInterface_AddIKGoals::OutGoals' has a wrong offset!");

// Function IKRig.IKRigComponent.SetIKRigGoal
// 0x00A0 (0x00A0 - 0x0000)
struct IKRigComponent_SetIKRigGoal final
{
public:
	struct FIKRigGoal                             Goal;                                              // 0x0000(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRigComponent_SetIKRigGoal) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoal");
static_assert(sizeof(IKRigComponent_SetIKRigGoal) == 0x0000A0, "Wrong size on IKRigComponent_SetIKRigGoal");
static_assert(offsetof(IKRigComponent_SetIKRigGoal, Goal) == 0x000000, "Member 'IKRigComponent_SetIKRigGoal::Goal' has a wrong offset!");

// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
// 0x0060 (0x0060 - 0x0000)
struct IKRigComponent_SetIKRigGoalPositionAndRotation final
{
public:
	class FName                                   GoalName;                                          // 0x0000(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Position;                                          // 0x0010(0x0018)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Rotation;                                          // 0x0030(0x0020)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionAlpha;                                     // 0x0050(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlpha;                                     // 0x0054(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRigComponent_SetIKRigGoalPositionAndRotation) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoalPositionAndRotation");
static_assert(sizeof(IKRigComponent_SetIKRigGoalPositionAndRotation) == 0x000060, "Wrong size on IKRigComponent_SetIKRigGoalPositionAndRotation");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, GoalName) == 0x000000, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::GoalName' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, Position) == 0x000010, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::Position' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, Rotation) == 0x000030, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::Rotation' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, PositionAlpha) == 0x000050, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::PositionAlpha' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, RotationAlpha) == 0x000054, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::RotationAlpha' has a wrong offset!");

// Function IKRig.IKRigComponent.SetIKRigGoalTransform
// 0x0080 (0x0080 - 0x0000)
struct IKRigComponent_SetIKRigGoalTransform final
{
public:
	class FName                                   GoalName;                                          // 0x0000(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0010(0x0060)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionAlpha;                                     // 0x0070(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlpha;                                     // 0x0074(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRigComponent_SetIKRigGoalTransform) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoalTransform");
static_assert(sizeof(IKRigComponent_SetIKRigGoalTransform) == 0x000080, "Wrong size on IKRigComponent_SetIKRigGoalTransform");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, GoalName) == 0x000000, "Member 'IKRigComponent_SetIKRigGoalTransform::GoalName' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, Transform) == 0x000010, "Member 'IKRigComponent_SetIKRigGoalTransform::Transform' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, PositionAlpha) == 0x000070, "Member 'IKRigComponent_SetIKRigGoalTransform::PositionAlpha' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, RotationAlpha) == 0x000074, "Member 'IKRigComponent_SetIKRigGoalTransform::RotationAlpha' has a wrong offset!");

// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
// 0x00D0 (0x00D0 - 0x0000)
struct IKRetargeter_GetChainSettingsFromRetargetAsset final
{
public:
	const class UIKRetargeter*                    RetargetAsset;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TargetChainName;                                   // 0x0008(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   OptionalProfileName;                               // 0x0014(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetChainSettings                   ReturnValue;                                       // 0x0020(0x00B0)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRetargeter_GetChainSettingsFromRetargetAsset) == 0x000008, "Wrong alignment on IKRetargeter_GetChainSettingsFromRetargetAsset");
static_assert(sizeof(IKRetargeter_GetChainSettingsFromRetargetAsset) == 0x0000D0, "Wrong size on IKRetargeter_GetChainSettingsFromRetargetAsset");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetAsset, RetargetAsset) == 0x000000, "Member 'IKRetargeter_GetChainSettingsFromRetargetAsset::RetargetAsset' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetAsset, TargetChainName) == 0x000008, "Member 'IKRetargeter_GetChainSettingsFromRetargetAsset::TargetChainName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetAsset, OptionalProfileName) == 0x000014, "Member 'IKRetargeter_GetChainSettingsFromRetargetAsset::OptionalProfileName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetAsset, ReturnValue) == 0x000020, "Member 'IKRetargeter_GetChainSettingsFromRetargetAsset::ReturnValue' has a wrong offset!");

// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
// 0x01D0 (0x01D0 - 0x0000)
struct IKRetargeter_GetChainSettingsFromRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                   TargetChainName;                                   // 0x0110(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTargetChainSettings                   ReturnValue;                                       // 0x0120(0x00B0)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRetargeter_GetChainSettingsFromRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_GetChainSettingsFromRetargetProfile");
static_assert(sizeof(IKRetargeter_GetChainSettingsFromRetargetProfile) == 0x0001D0, "Wrong size on IKRetargeter_GetChainSettingsFromRetargetProfile");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_GetChainSettingsFromRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetProfile, TargetChainName) == 0x000110, "Member 'IKRetargeter_GetChainSettingsFromRetargetProfile::TargetChainName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetProfile, ReturnValue) == 0x000120, "Member 'IKRetargeter_GetChainSettingsFromRetargetProfile::ReturnValue' has a wrong offset!");

// Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
// 0x00C8 (0x00C8 - 0x0000)
struct IKRetargeter_GetChainUsingGoalFromRetargetAsset final
{
public:
	const class UIKRetargeter*                    RetargetAsset;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   IKGoalName;                                        // 0x0008(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTargetChainSettings                   ReturnValue;                                       // 0x0018(0x00B0)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRetargeter_GetChainUsingGoalFromRetargetAsset) == 0x000008, "Wrong alignment on IKRetargeter_GetChainUsingGoalFromRetargetAsset");
static_assert(sizeof(IKRetargeter_GetChainUsingGoalFromRetargetAsset) == 0x0000C8, "Wrong size on IKRetargeter_GetChainUsingGoalFromRetargetAsset");
static_assert(offsetof(IKRetargeter_GetChainUsingGoalFromRetargetAsset, RetargetAsset) == 0x000000, "Member 'IKRetargeter_GetChainUsingGoalFromRetargetAsset::RetargetAsset' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainUsingGoalFromRetargetAsset, IKGoalName) == 0x000008, "Member 'IKRetargeter_GetChainUsingGoalFromRetargetAsset::IKGoalName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainUsingGoalFromRetargetAsset, ReturnValue) == 0x000018, "Member 'IKRetargeter_GetChainUsingGoalFromRetargetAsset::ReturnValue' has a wrong offset!");

// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
// 0x0038 (0x0038 - 0x0000)
struct IKRetargeter_GetGlobalSettingsFromRetargetAsset final
{
public:
	const class UIKRetargeter*                    RetargetAsset;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   OptionalProfileName;                               // 0x0008(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRetargetGlobalSettings                OutSettings;                                       // 0x0014(0x0024)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRetargeter_GetGlobalSettingsFromRetargetAsset) == 0x000008, "Wrong alignment on IKRetargeter_GetGlobalSettingsFromRetargetAsset");
static_assert(sizeof(IKRetargeter_GetGlobalSettingsFromRetargetAsset) == 0x000038, "Wrong size on IKRetargeter_GetGlobalSettingsFromRetargetAsset");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetAsset, RetargetAsset) == 0x000000, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetAsset::RetargetAsset' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetAsset, OptionalProfileName) == 0x000008, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetAsset::OptionalProfileName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetAsset, OutSettings) == 0x000014, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetAsset::OutSettings' has a wrong offset!");

// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
// 0x0138 (0x0138 - 0x0000)
struct IKRetargeter_GetGlobalSettingsFromRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FRetargetGlobalSettings                ReturnValue;                                       // 0x0110(0x0024)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRetargeter_GetGlobalSettingsFromRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_GetGlobalSettingsFromRetargetProfile");
static_assert(sizeof(IKRetargeter_GetGlobalSettingsFromRetargetProfile) == 0x000138, "Wrong size on IKRetargeter_GetGlobalSettingsFromRetargetProfile");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetProfile, ReturnValue) == 0x000110, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetProfile::ReturnValue' has a wrong offset!");

// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
// 0x0080 (0x0080 - 0x0000)
struct IKRetargeter_GetRootSettingsFromRetargetAsset final
{
public:
	const class UIKRetargeter*                    RetargetAsset;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   OptionalProfileName;                               // 0x0008(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTargetRootSettings                    OutSettings;                                       // 0x0018(0x0068)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRetargeter_GetRootSettingsFromRetargetAsset) == 0x000008, "Wrong alignment on IKRetargeter_GetRootSettingsFromRetargetAsset");
static_assert(sizeof(IKRetargeter_GetRootSettingsFromRetargetAsset) == 0x000080, "Wrong size on IKRetargeter_GetRootSettingsFromRetargetAsset");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetAsset, RetargetAsset) == 0x000000, "Member 'IKRetargeter_GetRootSettingsFromRetargetAsset::RetargetAsset' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetAsset, OptionalProfileName) == 0x000008, "Member 'IKRetargeter_GetRootSettingsFromRetargetAsset::OptionalProfileName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetAsset, OutSettings) == 0x000018, "Member 'IKRetargeter_GetRootSettingsFromRetargetAsset::OutSettings' has a wrong offset!");

// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
// 0x0178 (0x0178 - 0x0000)
struct IKRetargeter_GetRootSettingsFromRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetRootSettings                    ReturnValue;                                       // 0x0110(0x0068)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRetargeter_GetRootSettingsFromRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_GetRootSettingsFromRetargetProfile");
static_assert(sizeof(IKRetargeter_GetRootSettingsFromRetargetProfile) == 0x000178, "Wrong size on IKRetargeter_GetRootSettingsFromRetargetProfile");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_GetRootSettingsFromRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetProfile, ReturnValue) == 0x000110, "Member 'IKRetargeter_GetRootSettingsFromRetargetProfile::ReturnValue' has a wrong offset!");

// Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
// 0x0138 (0x0138 - 0x0000)
struct IKRetargeter_SetChainFKSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetChainFKSettings                 FKSettings;                                        // 0x0110(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   TargetChainName;                                   // 0x0128(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRetargeter_SetChainFKSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetChainFKSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetChainFKSettingsInRetargetProfile) == 0x000138, "Wrong size on IKRetargeter_SetChainFKSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetChainFKSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetChainFKSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainFKSettingsInRetargetProfile, FKSettings) == 0x000110, "Member 'IKRetargeter_SetChainFKSettingsInRetargetProfile::FKSettings' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainFKSettingsInRetargetProfile, TargetChainName) == 0x000128, "Member 'IKRetargeter_SetChainFKSettingsInRetargetProfile::TargetChainName' has a wrong offset!");

// Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
// 0x0198 (0x0198 - 0x0000)
struct IKRetargeter_SetChainIKSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetChainIKSettings                 IKSettings;                                        // 0x0110(0x0078)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   TargetChainName;                                   // 0x0188(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRetargeter_SetChainIKSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetChainIKSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetChainIKSettingsInRetargetProfile) == 0x000198, "Wrong size on IKRetargeter_SetChainIKSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetChainIKSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetChainIKSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainIKSettingsInRetargetProfile, IKSettings) == 0x000110, "Member 'IKRetargeter_SetChainIKSettingsInRetargetProfile::IKSettings' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainIKSettingsInRetargetProfile, TargetChainName) == 0x000188, "Member 'IKRetargeter_SetChainIKSettingsInRetargetProfile::TargetChainName' has a wrong offset!");

// Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
// 0x01D0 (0x01D0 - 0x0000)
struct IKRetargeter_SetChainSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetChainSettings                   ChainSettings_0;                                   // 0x0110(0x00B0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   TargetChainName;                                   // 0x01C0(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRetargeter_SetChainSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetChainSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetChainSettingsInRetargetProfile) == 0x0001D0, "Wrong size on IKRetargeter_SetChainSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetChainSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetChainSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainSettingsInRetargetProfile, ChainSettings_0) == 0x000110, "Member 'IKRetargeter_SetChainSettingsInRetargetProfile::ChainSettings_0' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainSettingsInRetargetProfile, TargetChainName) == 0x0001C0, "Member 'IKRetargeter_SetChainSettingsInRetargetProfile::TargetChainName' has a wrong offset!");

// Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
// 0x0138 (0x0138 - 0x0000)
struct IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetChainSpeedPlantSettings         SpeedPlantSettings;                                // 0x0110(0x001C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   TargetChainName;                                   // 0x012C(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile) == 0x000138, "Wrong size on IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile, SpeedPlantSettings) == 0x000110, "Member 'IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile::SpeedPlantSettings' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile, TargetChainName) == 0x00012C, "Member 'IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile::TargetChainName' has a wrong offset!");

// Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
// 0x0138 (0x0138 - 0x0000)
struct IKRetargeter_SetGlobalSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FRetargetGlobalSettings                GlobalSettings_0;                                  // 0x0110(0x0024)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(IKRetargeter_SetGlobalSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetGlobalSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetGlobalSettingsInRetargetProfile) == 0x000138, "Wrong size on IKRetargeter_SetGlobalSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetGlobalSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetGlobalSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetGlobalSettingsInRetargetProfile, GlobalSettings_0) == 0x000110, "Member 'IKRetargeter_SetGlobalSettingsInRetargetProfile::GlobalSettings_0' has a wrong offset!");

// Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
// 0x0178 (0x0178 - 0x0000)
struct IKRetargeter_SetRootSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;                                   // 0x0000(0x0110)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetRootSettings                    RootSettings_0;                                    // 0x0110(0x0068)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(IKRetargeter_SetRootSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetRootSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetRootSettingsInRetargetProfile) == 0x000178, "Wrong size on IKRetargeter_SetRootSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetRootSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetRootSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetRootSettingsInRetargetProfile, RootSettings_0) == 0x000110, "Member 'IKRetargeter_SetRootSettingsInRetargetProfile::RootSettings_0' has a wrong offset!");

}

