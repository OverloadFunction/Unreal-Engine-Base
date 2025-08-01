﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Menu_Slasher13

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Aset_Slasher_Menu_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C
// 0x4380 (0x4710 - 0x0390)
class UAB_Menu_Slasher13_C final : public UBaseMenuAnimInstance
{
public:
	uint8                                         Pad_388[0x8];                                      // 0x0388(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Tag;                        // 0x0398(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03A0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03A8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03B0(0x0020)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x03D0(0x00B8)()
	uint8                                         Pad_488[0x8];                                      // 0x0488(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_11;                     // 0x0490(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_10;                     // 0x09D0(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_9;                      // 0x0F10(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_8;                      // 0x1450(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_7;                      // 0x1990(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6;                      // 0x1ED0(0x0540)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_1;                        // 0x2410(0x0178)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone;                          // 0x2588(0x0178)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5;                      // 0x2700(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4;                      // 0x2C40(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;                      // 0x3180(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;                      // 0x36C0(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x3C00(0x0540)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x4140(0x0540)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4680(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x46A0(0x0020)()
	struct FAset_Slasher_Menu                     MenuAnimSet;                                       // 0x46C0(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_FX_HK_Menu_MakeSwordInvisible();
	void AnimNotify_FX_HK_MenuBack_MakeSwordVisible();
	void AnimNotify_FX_HK_MenuInt_MakeWeaponAppear();
	void AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear();
	void BlueprintLinkedAnimationLayersInitialized();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher13(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Menu_Slasher13_C">();
	}
	static class UAB_Menu_Slasher13_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Menu_Slasher13_C>();
	}
};
static_assert(alignof(UAB_Menu_Slasher13_C) == 0x000010, "Wrong alignment on UAB_Menu_Slasher13_C");
static_assert(sizeof(UAB_Menu_Slasher13_C) == 0x004710, "Wrong size on UAB_Menu_Slasher13_C");
static_assert(offsetof(UAB_Menu_Slasher13_C, UberGraphFrame) == 0x000390, "Member 'UAB_Menu_Slasher13_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimBlueprintExtension_Tag) == 0x000398, "Member 'UAB_Menu_Slasher13_C::AnimBlueprintExtension_Tag' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimBlueprintExtension_PropertyAccess) == 0x0003A0, "Member 'UAB_Menu_Slasher13_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimBlueprintExtension_Base) == 0x0003A8, "Member 'UAB_Menu_Slasher13_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_Root) == 0x0003B0, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_LinkedAnimGraph) == 0x0003D0, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_11) == 0x000490, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_11' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_10) == 0x0009D0, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_10' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_9) == 0x000F10, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_9' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_8) == 0x001450, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_8' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_7) == 0x001990, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_7' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_6) == 0x001ED0, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_6' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_SpringBone_1) == 0x002410, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_SpringBone_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_SpringBone) == 0x002588, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_SpringBone' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_5) == 0x002700, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_5' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_4) == 0x002C40, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_3) == 0x003180, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_2) == 0x0036C0, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics_1) == 0x003C00, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_AnimDynamics) == 0x004140, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_LocalToComponentSpace) == 0x004680, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, AnimGraphNode_ComponentToLocalSpace) == 0x0046A0, "Member 'UAB_Menu_Slasher13_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_Menu_Slasher13_C, MenuAnimSet) == 0x0046C0, "Member 'UAB_Menu_Slasher13_C::MenuAnimSet' has a wrong offset!");

}

