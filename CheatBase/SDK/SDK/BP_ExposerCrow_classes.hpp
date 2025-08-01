﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExposerCrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExposerCrow.BP_ExposerCrow_C
// 0x0058 (0x0328 - 0x02D0)
class ABP_ExposerCrow_C final : public ASurvivorExposerInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_VAT_Crow_Iddle;                                 // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Crow_Position;                                     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialHelper*                        MaterialHelper;                                    // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak_Audio_ExposerCrow;                              // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExposerCirclingComponent*              ExposerCircling;                                   // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_Fade_BB8CD443452045F03CD8739C3DA7A950;  // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_BB8CD443452045F03CD8739C3DA7A950; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Crow_Dissolve_Fade_48F0A1774BFA01C45285CAA28EE10ABC; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Crow_Dissolve__Direction_48F0A1774BFA01C45285CAA28EE10ABC; // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Crow_Dissolve;                                     // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldTakeoff;                                     // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Crow_Dissolve__FinishedFunc();
	void Crow_Dissolve__UpdateFunc();
	void ExecuteUbergraph_BP_ExposerCrow(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetIsInteriorBP(bool interior);
	void SetTunableValues();
	void StartExitSequence(bool withRandomDelay);
	void StartSpawnSequence(bool withRandomDelay);
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExposerCrow_C">();
	}
	static class ABP_ExposerCrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExposerCrow_C>();
	}
};
static_assert(alignof(ABP_ExposerCrow_C) == 0x000008, "Wrong alignment on ABP_ExposerCrow_C");
static_assert(sizeof(ABP_ExposerCrow_C) == 0x000328, "Wrong size on ABP_ExposerCrow_C");
static_assert(offsetof(ABP_ExposerCrow_C, UberGraphFrame) == 0x0002D0, "Member 'ABP_ExposerCrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, SM_VAT_Crow_Iddle) == 0x0002D8, "Member 'ABP_ExposerCrow_C::SM_VAT_Crow_Iddle' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, Crow_Position) == 0x0002E0, "Member 'ABP_ExposerCrow_C::Crow_Position' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, MaterialHelper) == 0x0002E8, "Member 'ABP_ExposerCrow_C::MaterialHelper' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, Ak_Audio_ExposerCrow) == 0x0002F0, "Member 'ABP_ExposerCrow_C::Ak_Audio_ExposerCrow' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, ExposerCircling) == 0x0002F8, "Member 'ABP_ExposerCrow_C::ExposerCircling' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, Timeline_1_Fade_BB8CD443452045F03CD8739C3DA7A950) == 0x000300, "Member 'ABP_ExposerCrow_C::Timeline_1_Fade_BB8CD443452045F03CD8739C3DA7A950' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, Timeline_1__Direction_BB8CD443452045F03CD8739C3DA7A950) == 0x000304, "Member 'ABP_ExposerCrow_C::Timeline_1__Direction_BB8CD443452045F03CD8739C3DA7A950' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, Timeline_1) == 0x000308, "Member 'ABP_ExposerCrow_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, Crow_Dissolve_Fade_48F0A1774BFA01C45285CAA28EE10ABC) == 0x000310, "Member 'ABP_ExposerCrow_C::Crow_Dissolve_Fade_48F0A1774BFA01C45285CAA28EE10ABC' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, Crow_Dissolve__Direction_48F0A1774BFA01C45285CAA28EE10ABC) == 0x000314, "Member 'ABP_ExposerCrow_C::Crow_Dissolve__Direction_48F0A1774BFA01C45285CAA28EE10ABC' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, Crow_Dissolve) == 0x000318, "Member 'ABP_ExposerCrow_C::Crow_Dissolve' has a wrong offset!");
static_assert(offsetof(ABP_ExposerCrow_C, ShouldTakeoff) == 0x000320, "Member 'ABP_ExposerCrow_C::ShouldTakeoff' has a wrong offset!");

}

