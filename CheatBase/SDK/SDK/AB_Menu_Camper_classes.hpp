﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Menu_Camper

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "AB_Menu_Camper_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_CamperMenuAnimationState_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C
// 0x15F0 (0x1940 - 0x0350)
class UAB_Menu_Camper_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AB_Menu_Camper::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;               // 0x0358(0x0007)(HasGetValueTypeHash)
	uint8                                         Pad_35F[0x1];                                      // 0x035F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03E0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0408(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0438(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x0458(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x04A0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x04E8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0530(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0550(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0598(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x05B8(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0680(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x06C8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x06E8(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x07B0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x07F8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0840(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0888(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x08D0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0918(0x0108)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0A20(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0A48(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0A70(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0AA0(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0AC0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0AE0(0x0030)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0B10(0x0020)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x0B30(0x0540)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone;                          // 0x1070(0x0178)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x11E8(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1208(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1238(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1258(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1320(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1368(0x0030)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1398(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x14A0(0x0030)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x14D0(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1608(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1628(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x1648(0x00E0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1728(0x00E0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1808(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1850(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1898(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x18E0(0x0048)()
	EItemHandPosition                             Hand_Position;                                     // 0x1928(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1929[0x3];                                     // 0x1929(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedIdleIndex;                                 // 0x192C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Role_Selected;                                     // 0x1930(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dynamic_Override;                                  // 0x1931(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Override_Nea;                                      // 0x1932(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Override_Jane;                                     // 0x1933(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _weaponRT_adjustment;                              // 0x1934(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MenuInterrupt;                                     // 0x1935(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1936[0x2];                                     // 0x1936(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDMenuPlayer*                         DBDMenuPlayer;                                     // 0x1938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_IsLeavingMenuInterruptFromTransition();
	void AnimNotify_IsPlayingMenuInterruptFromTransition();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_144CBC12420AC4B1AEB6C483367DB5D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_483650134A1995C68296AC8A711B4368();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_D31FAC3144F53773EC44BF83B1E4C609();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_31D12DEB4EEE47CA5AFD35BA4FF29D01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_942BFBC04EC5441670A131B2CBD7B90D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_ModifyBone_F80FCF524110A51D7C4B38A1720994C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_87CDC7454897F2F416A5B78669C05DF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA();
	void ExecuteUbergraph_AB_Menu_Camper(int32 EntryPoint);
	void Get_BP_MenuBaseCamper(class ABP_Menu_Base_Camper_C** BP_MenuBaseCamper);
	void GetCamperMenuAnimationState(Enum_CamperMenuAnimationState* MenuAnimationState);
	void IsPlayingMenuInterrupt(bool IsPlayingAnimation);
	void RandomTimer();
	void SetCamperMenuAnimationState(Enum_CamperMenuAnimationState State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Menu_Camper_C">();
	}
	static class UAB_Menu_Camper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Menu_Camper_C>();
	}
};
static_assert(alignof(UAB_Menu_Camper_C) == 0x000010, "Wrong alignment on UAB_Menu_Camper_C");
static_assert(sizeof(UAB_Menu_Camper_C) == 0x001940, "Wrong size on UAB_Menu_Camper_C");
static_assert(offsetof(UAB_Menu_Camper_C, UberGraphFrame) == 0x000350, "Member 'UAB_Menu_Camper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, __AnimBlueprintMutables) == 0x000358, "Member 'UAB_Menu_Camper_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UAB_Menu_Camper_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UAB_Menu_Camper_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_Root) == 0x000370, "Member 'UAB_Menu_Camper_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_TransitionResult_4) == 0x000390, "Member 'UAB_Menu_Camper_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_TransitionResult_3) == 0x0003B8, "Member 'UAB_Menu_Camper_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_TransitionResult_2) == 0x0003E0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_UseCachedPose_5) == 0x000408, "Member 'UAB_Menu_Camper_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateResult_6) == 0x000438, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer_8) == 0x000458, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_BlendListByBool_5) == 0x0004A0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer_7) == 0x0004E8, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateResult_5) == 0x000530, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer_6) == 0x000550, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateResult_4) == 0x000598, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateMachine_2) == 0x0005B8, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer_5) == 0x000680, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateResult_3) == 0x0006C8, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateMachine_1) == 0x0006E8, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_BlendListByBool_4) == 0x0007B0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer_4) == 0x0007F8, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer_3) == 0x000840, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer_2) == 0x000888, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer_1) == 0x0008D0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SaveCachedPose_1) == 0x000918, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_TransitionResult_1) == 0x000A20, "Member 'UAB_Menu_Camper_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_TransitionResult) == 0x000A48, "Member 'UAB_Menu_Camper_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_UseCachedPose_4) == 0x000A70, "Member 'UAB_Menu_Camper_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateResult_2) == 0x000AA0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000AC0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_UseCachedPose_3) == 0x000AE0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000B10, "Member 'UAB_Menu_Camper_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_AnimDynamics) == 0x000B30, "Member 'UAB_Menu_Camper_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SpringBone) == 0x001070, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SpringBone' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateResult_1) == 0x0011E8, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_UseCachedPose_2) == 0x001208, "Member 'UAB_Menu_Camper_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateResult) == 0x001238, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_StateMachine) == 0x001258, "Member 'UAB_Menu_Camper_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_BlendListByBool_3) == 0x001320, "Member 'UAB_Menu_Camper_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_UseCachedPose_1) == 0x001368, "Member 'UAB_Menu_Camper_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SaveCachedPose) == 0x001398, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_UseCachedPose) == 0x0014A0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_ModifyBone) == 0x0014D0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_LocalToComponentSpace) == 0x001608, "Member 'UAB_Menu_Camper_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_ComponentToLocalSpace) == 0x001628, "Member 'UAB_Menu_Camper_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_LayeredBoneBlend_1) == 0x001648, "Member 'UAB_Menu_Camper_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_LayeredBoneBlend) == 0x001728, "Member 'UAB_Menu_Camper_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_BlendListByBool_2) == 0x001808, "Member 'UAB_Menu_Camper_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_BlendListByBool_1) == 0x001850, "Member 'UAB_Menu_Camper_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_BlendListByBool) == 0x001898, "Member 'UAB_Menu_Camper_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, AnimGraphNode_SequencePlayer) == 0x0018E0, "Member 'UAB_Menu_Camper_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, Hand_Position) == 0x001928, "Member 'UAB_Menu_Camper_C::Hand_Position' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, SelectedIdleIndex) == 0x00192C, "Member 'UAB_Menu_Camper_C::SelectedIdleIndex' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, Role_Selected) == 0x001930, "Member 'UAB_Menu_Camper_C::Role_Selected' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, Dynamic_Override) == 0x001931, "Member 'UAB_Menu_Camper_C::Dynamic_Override' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, Override_Nea) == 0x001932, "Member 'UAB_Menu_Camper_C::Override_Nea' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, Override_Jane) == 0x001933, "Member 'UAB_Menu_Camper_C::Override_Jane' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, _weaponRT_adjustment) == 0x001934, "Member 'UAB_Menu_Camper_C::_weaponRT_adjustment' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, MenuInterrupt) == 0x001935, "Member 'UAB_Menu_Camper_C::MenuInterrupt' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Camper_C, DBDMenuPlayer) == 0x001938, "Member 'UAB_Menu_Camper_C::DBDMenuPlayer' has a wrong offset!");

}

