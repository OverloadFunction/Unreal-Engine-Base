﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Menu_Slasher32

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "Aset_Slasher_Menu_structs.hpp"
#include "DBDAnimation_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Menu_Slasher32.AB_Menu_Slasher32_C
// 0x05D0 (0x0960 - 0x0390)
class UAB_Menu_Slasher32_C final : public UBaseMenuAnimInstance
{
public:
	uint8                                         Pad_388[0x8];                                      // 0x0388(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Tag;                        // 0x0398(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03A0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03A8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03B0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03D0(0x0028)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x03F8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0418(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0438(0x0138)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0570(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x05B8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x05D8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x05F8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0618(0x0138)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x0750(0x00B8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0808(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0828(0x00C8)()
	struct FVector                                __CustomProperty_ScaleInLobby_710133574F4DE2FB2774CBAD40AF348F; // 0x08F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameFlowStep                                 CurrentMenu;                                       // 0x0908(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_909[0x7];                                      // 0x0909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAset_Slasher_Menu                     MenuAnimSet;                                       // 0x0910(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintLinkedAnimationLayersInitialized();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher32_AnimGraphNode_TransitionResult_13FC268E47D12B172B1C768D9D6C59EC();
	void ExecuteUbergraph_AB_Menu_Slasher32(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Menu_Slasher32_C">();
	}
	static class UAB_Menu_Slasher32_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Menu_Slasher32_C>();
	}
};
static_assert(alignof(UAB_Menu_Slasher32_C) == 0x000010, "Wrong alignment on UAB_Menu_Slasher32_C");
static_assert(sizeof(UAB_Menu_Slasher32_C) == 0x000960, "Wrong size on UAB_Menu_Slasher32_C");
static_assert(offsetof(UAB_Menu_Slasher32_C, UberGraphFrame) == 0x000390, "Member 'UAB_Menu_Slasher32_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimBlueprintExtension_Tag) == 0x000398, "Member 'UAB_Menu_Slasher32_C::AnimBlueprintExtension_Tag' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimBlueprintExtension_PropertyAccess) == 0x0003A0, "Member 'UAB_Menu_Slasher32_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimBlueprintExtension_Base) == 0x0003A8, "Member 'UAB_Menu_Slasher32_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_Root) == 0x0003B0, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_TransitionResult) == 0x0003D0, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0003F8, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000418, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_ModifyBone_1) == 0x000438, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_SequencePlayer) == 0x000570, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_StateResult_1) == 0x0005B8, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_ComponentToLocalSpace) == 0x0005D8, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_LocalToComponentSpace) == 0x0005F8, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_ModifyBone) == 0x000618, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_LinkedAnimGraph) == 0x000750, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_StateResult) == 0x000808, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, AnimGraphNode_StateMachine) == 0x000828, "Member 'UAB_Menu_Slasher32_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, __CustomProperty_ScaleInLobby_710133574F4DE2FB2774CBAD40AF348F) == 0x0008F0, "Member 'UAB_Menu_Slasher32_C::__CustomProperty_ScaleInLobby_710133574F4DE2FB2774CBAD40AF348F' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, CurrentMenu) == 0x000908, "Member 'UAB_Menu_Slasher32_C::CurrentMenu' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher32_C, MenuAnimSet) == 0x000910, "Member 'UAB_Menu_Slasher32_C::MenuAnimSet' has a wrong offset!");

}

