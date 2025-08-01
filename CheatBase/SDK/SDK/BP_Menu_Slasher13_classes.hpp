﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Menu_Slasher13

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "BP_Menu_BaseSlasher_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Menu_Slasher13.BP_Menu_Slasher13_C
// 0x00C0 (0x0A30 - 0x0970)
class ABP_Menu_Slasher13_C final : public ABP_Menu_BaseSlasher_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Menu_Slasher13_C;                // 0x0968(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Audio_KLR_13_C*                     BP_Audio_KLR_13;                                   // 0x0970(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RedStainComponent_C*                RedStainComponent;                                 // 0x0978(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF;   // 0x0980(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF; // 0x0984(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF; // 0x0988(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF; // 0x098C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98D[0x3];                                      // 0x098D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Show_Sword;                                        // 0x0990(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Timeline_2_Size_548F5340441650D05914669F2F45DC7E;  // 0x0998(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E; // 0x09B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_548F5340441650D05914669F2F45DC7E; // 0x09C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C9[0x7];                                      // 0x09C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x09D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x09D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x09F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0A08(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0A0C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0A10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0A14(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A15[0x3];                                      // 0x0A15(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Make_Sword_Disappear;                              // 0x0A18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          SwordShouldBeVisible;                              // 0x0A20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Menu_Slasher13(int32 EntryPoint);
	void GetShard(class USkeletalMeshComponent** Shard);
	void GetSword(class USkeletalMeshComponent** Sword);
	void K13_FX_MakeSwordAppear();
	void K13_FX_MakeSwordDisappear();
	void K13_FX_MakeSwordInvisible();
	void K13_FX_MakeSwordVisible();
	void K13_FX_ModifyFace(double SadFaceCurveValue, double MadFaceCurveValue);
	void Make_Sword_Disappear__FinishedFunc();
	void Make_Sword_Disappear__UpdateFunc();
	void OnAttack_StopTimeline();
	void OnCustomizationUpdated();
	void ReceiveBeginPlay();
	void Show_Sword__FinishedFunc();
	void Show_Sword__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Menu_Slasher13_C">();
	}
	static class ABP_Menu_Slasher13_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Menu_Slasher13_C>();
	}
};
static_assert(alignof(ABP_Menu_Slasher13_C) == 0x000010, "Wrong alignment on ABP_Menu_Slasher13_C");
static_assert(sizeof(ABP_Menu_Slasher13_C) == 0x000A30, "Wrong size on ABP_Menu_Slasher13_C");
static_assert(offsetof(ABP_Menu_Slasher13_C, UberGraphFrame_BP_Menu_Slasher13_C) == 0x000968, "Member 'ABP_Menu_Slasher13_C::UberGraphFrame_BP_Menu_Slasher13_C' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, BP_Audio_KLR_13) == 0x000970, "Member 'ABP_Menu_Slasher13_C::BP_Audio_KLR_13' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, RedStainComponent) == 0x000978, "Member 'ABP_Menu_Slasher13_C::RedStainComponent' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF) == 0x000980, "Member 'ABP_Menu_Slasher13_C::Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF) == 0x000984, "Member 'ABP_Menu_Slasher13_C::Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF) == 0x000988, "Member 'ABP_Menu_Slasher13_C::Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF) == 0x00098C, "Member 'ABP_Menu_Slasher13_C::Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Show_Sword) == 0x000990, "Member 'ABP_Menu_Slasher13_C::Show_Sword' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Timeline_2_Size_548F5340441650D05914669F2F45DC7E) == 0x000998, "Member 'ABP_Menu_Slasher13_C::Timeline_2_Size_548F5340441650D05914669F2F45DC7E' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E) == 0x0009B0, "Member 'ABP_Menu_Slasher13_C::Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Timeline_2__Direction_548F5340441650D05914669F2F45DC7E) == 0x0009C8, "Member 'ABP_Menu_Slasher13_C::Timeline_2__Direction_548F5340441650D05914669F2F45DC7E' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Timeline_2) == 0x0009D0, "Member 'ABP_Menu_Slasher13_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709) == 0x0009D8, "Member 'ABP_Menu_Slasher13_C::Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709) == 0x0009F0, "Member 'ABP_Menu_Slasher13_C::Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709) == 0x000A08, "Member 'ABP_Menu_Slasher13_C::Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709) == 0x000A0C, "Member 'ABP_Menu_Slasher13_C::Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709) == 0x000A10, "Member 'ABP_Menu_Slasher13_C::Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709) == 0x000A14, "Member 'ABP_Menu_Slasher13_C::Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, Make_Sword_Disappear) == 0x000A18, "Member 'ABP_Menu_Slasher13_C::Make_Sword_Disappear' has a wrong offset!");
static_assert(offsetof(ABP_Menu_Slasher13_C, SwordShouldBeVisible) == 0x000A20, "Member 'ABP_Menu_Slasher13_C::SwordShouldBeVisible' has a wrong offset!");

}

