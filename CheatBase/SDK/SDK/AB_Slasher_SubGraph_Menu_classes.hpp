﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Slasher_SubGraph_Menu

#include "Basic.hpp"

#include "Enum_MenuAnimationState_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "AB_Slasher_SubGraph_Menu_structs.hpp"
#include "DBDAnimation_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C
// 0x0B90 (0x0F20 - 0x0390)
class UAB_Slasher_SubGraph_Menu_C final : public UBaseMenuAnimInstance
{
public:
	uint8                                         Pad_388[0x8];                                      // 0x0388(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AB_Slasher_SubGraph_Menu::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;     // 0x0398(0x0003)(HasGetValueTypeHash)
	uint8                                         Pad_39B[0x5];                                      // 0x039B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03A0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03A8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03B0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x03D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x03F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0420(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0448(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0470(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0498(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x04E0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0500(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0528(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0570(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0590(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x05D8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x05F8(0x00C8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x06C0(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x07F8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0818(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0838(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0880(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0988(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x09B8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x09E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0A10(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0A38(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0A80(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0AA0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0AE8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0B08(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0BD0(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0CD8(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0D08(0x0030)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0D38(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0D80(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0DB0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0DF8(0x0048)()
	class ABP_Menu_BaseSlasher_C*                 BP_Menu_Base_Slasher;                              // 0x0E40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MenuLobby;                                         // 0x0E48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MenuIdle;                                          // 0x0E50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MenuIdleInterrupt01;                               // 0x0E58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MenuIdleInterrupt02;                               // 0x0E60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MenuIdleInterrupt03;                               // 0x0E68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MenuIdleBack;                                      // 0x0E70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugPassToNextAnimation;                          // 0x0E78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E79[0x7];                                      // 0x0E79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ScaleInLobby;                                      // 0x0E80(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameFlowStep                                 GameFlowStep;                                      // 0x0E98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E99[0x7];                                      // 0x0E99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      MenuLobbyInterrupt01;                              // 0x0EA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsArchiveRift;                                     // 0x0EA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasMenuLobbyInterrupt;                             // 0x0EA9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasMenuIdleInterrupt;                              // 0x0EAA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EAB[0x5];                                      // 0x0EAB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      MenuIdleInterrupt_ToPlay;                          // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimSequenceBase*>              MenuIdleInterrupt_Array;                           // 0x0EB8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimSequenceBase*                      MenuLobbyInterrupt_ToPlay;                         // 0x0EC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimSequenceBase*>              MenuLobbyIdleInterrupt_Array;                      // 0x0ED0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CVar_MenuIdleInterrupt;                            // 0x0EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EE4[0x4];                                      // 0x0EE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      MenuIntro01;                                       // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MenuIntro02;                                       // 0x0EF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MenuIntro03;                                       // 0x0EF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimSequenceBase*>              MenuIntro_Array;                                   // 0x0F00(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimSequenceBase*                      MenuIntro_ToPlay;                                  // 0x0F10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasMenuIntro;                                      // 0x0F18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameFlowStep                                 CurrentMenu;                                       // 0x0F19(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayingInterrupt;                                // 0x0F1A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNextInterruptReady;                              // 0x0F1B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_OnStartMenuIdleInterrupt();
	void AnimNotify_OnStopMenuIdleInterrupt();
	void BlueprintInitializeAnimation();
	void BlueprintLinkedAnimationLayersInitialized();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BuildIntroArray();
	void BuildLobbyInterruptArray();
	void BuildMenuInterruptArray();
	void CVarSpecificMenuInterrupt();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_10B8A25E42D4C8E81053569D27E44C07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_6D2F7FB540BF4660E4584AB0B255221D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_A7B6260F4E7EF5DA66C2179EF01F4D9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_E6E2FC834E4E02688CB7A3BBD2CCA9D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_EE90647340D120A12EF9CD9BF02FCFA5();
	void ExecuteUbergraph_AB_Slasher_SubGraph_Menu(int32 EntryPoint);
	void OnDataDrivenCVarDelegate_Event(const class FString& CVarName);
	void OnMenuAnimationStateChange(Enum_MenuAnimationState State);
	void PrepareNextIdleMenuInterrupt();
	void SetAnimIdleInterrupt();
	void SetAnimLobbyInterrupt();
	void SetMenuAnimationFromMainAB(const struct FAset_Slasher_Menu& MenuAnimSet);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Slasher_SubGraph_Menu_C">();
	}
	static class UAB_Slasher_SubGraph_Menu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Slasher_SubGraph_Menu_C>();
	}
};
static_assert(alignof(UAB_Slasher_SubGraph_Menu_C) == 0x000010, "Wrong alignment on UAB_Slasher_SubGraph_Menu_C");
static_assert(sizeof(UAB_Slasher_SubGraph_Menu_C) == 0x000F20, "Wrong size on UAB_Slasher_SubGraph_Menu_C");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, UberGraphFrame) == 0x000390, "Member 'UAB_Slasher_SubGraph_Menu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, __AnimBlueprintMutables) == 0x000398, "Member 'UAB_Slasher_SubGraph_Menu_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimBlueprintExtension_PropertyAccess) == 0x0003A0, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimBlueprintExtension_Base) == 0x0003A8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_Root) == 0x0003B0, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_TransitionResult_7) == 0x0003D0, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_TransitionResult_6) == 0x0003F8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_TransitionResult_5) == 0x000420, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_TransitionResult_4) == 0x000448, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_TransitionResult_3) == 0x000470, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SequencePlayer_6) == 0x000498, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_StateResult_4) == 0x0004E0, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_TransitionResult_2) == 0x000500, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SequencePlayer_5) == 0x000528, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_StateResult_3) == 0x000570, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SequencePlayer_4) == 0x000590, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_StateResult_2) == 0x0005D8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_StateMachine_1) == 0x0005F8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_ModifyBone) == 0x0006C0, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_LocalToComponentSpace) == 0x0007F8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_ComponentToLocalSpace) == 0x000818, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_BlendListByEnum) == 0x000838, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SaveCachedPose_1) == 0x000880, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_UseCachedPose_4) == 0x000988, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_UseCachedPose_3) == 0x0009B8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_TransitionResult_1) == 0x0009E8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_TransitionResult) == 0x000A10, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SequencePlayer_3) == 0x000A38, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_StateResult_1) == 0x000A80, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SequencePlayer_2) == 0x000AA0, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_StateResult) == 0x000AE8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_StateMachine) == 0x000B08, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SaveCachedPose) == 0x000BD0, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_UseCachedPose_2) == 0x000CD8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_UseCachedPose_1) == 0x000D08, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_BlendListByBool) == 0x000D38, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_UseCachedPose) == 0x000D80, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SequencePlayer_1) == 0x000DB0, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, AnimGraphNode_SequencePlayer) == 0x000DF8, "Member 'UAB_Slasher_SubGraph_Menu_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, BP_Menu_Base_Slasher) == 0x000E40, "Member 'UAB_Slasher_SubGraph_Menu_C::BP_Menu_Base_Slasher' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuLobby) == 0x000E48, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuLobby' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIdle) == 0x000E50, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIdle' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIdleInterrupt01) == 0x000E58, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIdleInterrupt01' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIdleInterrupt02) == 0x000E60, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIdleInterrupt02' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIdleInterrupt03) == 0x000E68, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIdleInterrupt03' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIdleBack) == 0x000E70, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIdleBack' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, DebugPassToNextAnimation) == 0x000E78, "Member 'UAB_Slasher_SubGraph_Menu_C::DebugPassToNextAnimation' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, ScaleInLobby) == 0x000E80, "Member 'UAB_Slasher_SubGraph_Menu_C::ScaleInLobby' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, GameFlowStep) == 0x000E98, "Member 'UAB_Slasher_SubGraph_Menu_C::GameFlowStep' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuLobbyInterrupt01) == 0x000EA0, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuLobbyInterrupt01' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, IsArchiveRift) == 0x000EA8, "Member 'UAB_Slasher_SubGraph_Menu_C::IsArchiveRift' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, HasMenuLobbyInterrupt) == 0x000EA9, "Member 'UAB_Slasher_SubGraph_Menu_C::HasMenuLobbyInterrupt' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, HasMenuIdleInterrupt) == 0x000EAA, "Member 'UAB_Slasher_SubGraph_Menu_C::HasMenuIdleInterrupt' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIdleInterrupt_ToPlay) == 0x000EB0, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIdleInterrupt_ToPlay' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIdleInterrupt_Array) == 0x000EB8, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIdleInterrupt_Array' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuLobbyInterrupt_ToPlay) == 0x000EC8, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuLobbyInterrupt_ToPlay' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuLobbyIdleInterrupt_Array) == 0x000ED0, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuLobbyIdleInterrupt_Array' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, CVar_MenuIdleInterrupt) == 0x000EE0, "Member 'UAB_Slasher_SubGraph_Menu_C::CVar_MenuIdleInterrupt' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIntro01) == 0x000EE8, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIntro01' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIntro02) == 0x000EF0, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIntro02' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIntro03) == 0x000EF8, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIntro03' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIntro_Array) == 0x000F00, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIntro_Array' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, MenuIntro_ToPlay) == 0x000F10, "Member 'UAB_Slasher_SubGraph_Menu_C::MenuIntro_ToPlay' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, HasMenuIntro) == 0x000F18, "Member 'UAB_Slasher_SubGraph_Menu_C::HasMenuIntro' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, CurrentMenu) == 0x000F19, "Member 'UAB_Slasher_SubGraph_Menu_C::CurrentMenu' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, IsPlayingInterrupt) == 0x000F1A, "Member 'UAB_Slasher_SubGraph_Menu_C::IsPlayingInterrupt' has a wrong offset!");
static_assert(offsetof(UAB_Slasher_SubGraph_Menu_C, IsNextInterruptReady) == 0x000F1B, "Member 'UAB_Slasher_SubGraph_Menu_C::IsNextInterruptReady' has a wrong offset!");

}

