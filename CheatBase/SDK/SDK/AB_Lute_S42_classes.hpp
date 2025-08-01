﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Lute_S42

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Enum_CamperMenuAnimationState_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Lute_S42.AB_Lute_S42_C
// 0x0060 (0x03B0 - 0x0350)
class UAB_Lute_S42_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0388(0x0010)()
	class ABP_Menu_Base_Camper_C*                 CamperBP;                                          // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	Enum_CamperMenuAnimationState                 Animation_Menu_State;                              // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_AB_Lute_S42(int32 EntryPoint);
	void OnMenuAnimationStateChange_Event(Enum_CamperMenuAnimationState State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Lute_S42_C">();
	}
	static class UAB_Lute_S42_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Lute_S42_C>();
	}
};
static_assert(alignof(UAB_Lute_S42_C) == 0x000010, "Wrong alignment on UAB_Lute_S42_C");
static_assert(sizeof(UAB_Lute_S42_C) == 0x0003B0, "Wrong size on UAB_Lute_S42_C");
static_assert(offsetof(UAB_Lute_S42_C, UberGraphFrame) == 0x000350, "Member 'UAB_Lute_S42_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Lute_S42_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UAB_Lute_S42_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_Lute_S42_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UAB_Lute_S42_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_Lute_S42_C, AnimGraphNode_Root) == 0x000368, "Member 'UAB_Lute_S42_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_Lute_S42_C, AnimGraphNode_LocalRefPose) == 0x000388, "Member 'UAB_Lute_S42_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UAB_Lute_S42_C, CamperBP) == 0x000398, "Member 'UAB_Lute_S42_C::CamperBP' has a wrong offset!");
static_assert(offsetof(UAB_Lute_S42_C, Animation_Menu_State) == 0x0003A0, "Member 'UAB_Lute_S42_C::Animation_Menu_State' has a wrong offset!");

}

