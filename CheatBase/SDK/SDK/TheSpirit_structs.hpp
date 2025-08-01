﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheSpirit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct TheSpirit.PhaseWalkInfo
// 0x0028 (0x0028 - 0x0000)
struct FPhaseWalkInfo final
{
public:
	bool                                          IsActivePhaseWalking;                              // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsPassivePhaseWalking;                             // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInteractionPhaseWalking;                         // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               HuskRotation;                                      // 0x0008(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          TeleportToHusk;                                    // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPhaseWalkInfo) == 0x000008, "Wrong alignment on FPhaseWalkInfo");
static_assert(sizeof(FPhaseWalkInfo) == 0x000028, "Wrong size on FPhaseWalkInfo");
static_assert(offsetof(FPhaseWalkInfo, IsActivePhaseWalking) == 0x000000, "Member 'FPhaseWalkInfo::IsActivePhaseWalking' has a wrong offset!");
static_assert(offsetof(FPhaseWalkInfo, IsPassivePhaseWalking) == 0x000001, "Member 'FPhaseWalkInfo::IsPassivePhaseWalking' has a wrong offset!");
static_assert(offsetof(FPhaseWalkInfo, IsInteractionPhaseWalking) == 0x000002, "Member 'FPhaseWalkInfo::IsInteractionPhaseWalking' has a wrong offset!");
static_assert(offsetof(FPhaseWalkInfo, HuskRotation) == 0x000008, "Member 'FPhaseWalkInfo::HuskRotation' has a wrong offset!");
static_assert(offsetof(FPhaseWalkInfo, TeleportToHusk) == 0x000020, "Member 'FPhaseWalkInfo::TeleportToHusk' has a wrong offset!");

}

