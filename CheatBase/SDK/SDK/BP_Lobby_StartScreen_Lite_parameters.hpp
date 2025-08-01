﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lobby_StartScreen_Lite

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C.ExecuteUbergraph_BP_Lobby_StartScreen_Lite
// 0x0068 (0x0068 - 0x0000)
struct BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable; // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAssociatedAkEvent_ReturnValue;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_EventName;              // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_EmitterTime;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_ComponentBoundEvent_Location;               // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_Velocity;               // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite) == 0x000008, "Wrong alignment on BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite");
static_assert(sizeof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite) == 0x000068, "Wrong size on BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite, EntryPoint) == 0x000000, "Member 'BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite, Temp_delegate_Variable) == 0x000004, "Member 'BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite, CallFunc_PostAssociatedAkEvent_ReturnValue) == 0x000018, "Member 'BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite::CallFunc_PostAssociatedAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite, K2Node_ComponentBoundEvent_EventName) == 0x00001C, "Member 'BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite::K2Node_ComponentBoundEvent_EventName' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite, K2Node_ComponentBoundEvent_EmitterTime) == 0x000028, "Member 'BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite::K2Node_ComponentBoundEvent_EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite, K2Node_ComponentBoundEvent_Location) == 0x000030, "Member 'BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite::K2Node_ComponentBoundEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite, K2Node_ComponentBoundEvent_Velocity) == 0x000048, "Member 'BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite::K2Node_ComponentBoundEvent_Velocity' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000060, "Member 'BP_Lobby_StartScreen_Lite_C_ExecuteUbergraph_BP_Lobby_StartScreen_Lite::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C.BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
// 0x0040 (0x0040 - 0x0000)
struct BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterTime;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature");
static_assert(sizeof(BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature) == 0x000040, "Wrong size on BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature, EventName) == 0x000000, "Member 'BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature::EventName' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature, EmitterTime) == 0x00000C, "Member 'BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature::EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature, Location) == 0x000010, "Member 'BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature::Location' has a wrong offset!");
static_assert(offsetof(BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature, Velocity) == 0x000028, "Member 'BP_Lobby_StartScreen_Lite_C_BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature::Velocity' has a wrong offset!");

}

