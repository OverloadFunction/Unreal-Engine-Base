﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_S29_Tablete

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_S29_Tablete.AB_S29_Tablete_C
// 0x0140 (0x0490 - 0x0350)
class UAB_S29_Tablete_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0388(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0398(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x03B8(0x00C8)()
	bool                                          Role_Selected;                                     // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_AB_S29_Tablete(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_S29_Tablete_C">();
	}
	static class UAB_S29_Tablete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_S29_Tablete_C>();
	}
};
static_assert(alignof(UAB_S29_Tablete_C) == 0x000010, "Wrong alignment on UAB_S29_Tablete_C");
static_assert(sizeof(UAB_S29_Tablete_C) == 0x000490, "Wrong size on UAB_S29_Tablete_C");
static_assert(offsetof(UAB_S29_Tablete_C, UberGraphFrame) == 0x000350, "Member 'UAB_S29_Tablete_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_S29_Tablete_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UAB_S29_Tablete_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_S29_Tablete_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UAB_S29_Tablete_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_S29_Tablete_C, AnimGraphNode_Root) == 0x000368, "Member 'UAB_S29_Tablete_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_S29_Tablete_C, AnimGraphNode_LocalRefPose) == 0x000388, "Member 'UAB_S29_Tablete_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UAB_S29_Tablete_C, AnimGraphNode_StateResult) == 0x000398, "Member 'UAB_S29_Tablete_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAB_S29_Tablete_C, AnimGraphNode_StateMachine) == 0x0003B8, "Member 'UAB_S29_Tablete_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_S29_Tablete_C, Role_Selected) == 0x000480, "Member 'UAB_S29_Tablete_C::Role_Selected' has a wrong offset!");

}

