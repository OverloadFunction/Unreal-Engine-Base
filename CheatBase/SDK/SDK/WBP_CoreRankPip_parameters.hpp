﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreRankPip

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_CoreRankPip.WBP_CoreRankPip_C.ExecuteUbergraph_WBP_CoreRankPip
// 0x0018 (0x0018 - 0x0000)
struct WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsActivePip;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip) == 0x000008, "Wrong alignment on WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip");
static_assert(sizeof(WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip) == 0x000018, "Wrong size on WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip");
static_assert(offsetof(WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip, EntryPoint) == 0x000000, "Member 'WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip, K2Node_CustomEvent_IsVisible) == 0x000004, "Member 'WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip, K2Node_CustomEvent_IsActivePip) == 0x000005, "Member 'WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip::K2Node_CustomEvent_IsActivePip' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip, K2Node_Event_IsDesignTime) == 0x000006, "Member 'WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000010, "Member 'WBP_CoreRankPip_C_ExecuteUbergraph_WBP_CoreRankPip::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

// Function WBP_CoreRankPip.WBP_CoreRankPip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreRankPip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreRankPip_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CoreRankPip_C_PreConstruct");
static_assert(sizeof(WBP_CoreRankPip_C_PreConstruct) == 0x000001, "Wrong size on WBP_CoreRankPip_C_PreConstruct");
static_assert(offsetof(WBP_CoreRankPip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CoreRankPip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CoreRankPip.WBP_CoreRankPip_C.SetState
// 0x0002 (0x0002 - 0x0000)
struct WBP_CoreRankPip_C_SetState final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActivePip;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreRankPip_C_SetState) == 0x000001, "Wrong alignment on WBP_CoreRankPip_C_SetState");
static_assert(sizeof(WBP_CoreRankPip_C_SetState) == 0x000002, "Wrong size on WBP_CoreRankPip_C_SetState");
static_assert(offsetof(WBP_CoreRankPip_C_SetState, IsVisible_0) == 0x000000, "Member 'WBP_CoreRankPip_C_SetState::IsVisible_0' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_SetState, IsActivePip) == 0x000001, "Member 'WBP_CoreRankPip_C_SetState::IsActivePip' has a wrong offset!");

// Function WBP_CoreRankPip.WBP_CoreRankPip_C.UpdatePipVisual
// 0x0020 (0x0020 - 0x0000)
struct WBP_CoreRankPip_C_UpdatePipVisual final
{
public:
	int32                                         PipSeed_0;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CoreRankPip_C_UpdatePipVisual) == 0x000008, "Wrong alignment on WBP_CoreRankPip_C_UpdatePipVisual");
static_assert(sizeof(WBP_CoreRankPip_C_UpdatePipVisual) == 0x000020, "Wrong size on WBP_CoreRankPip_C_UpdatePipVisual");
static_assert(offsetof(WBP_CoreRankPip_C_UpdatePipVisual, PipSeed_0) == 0x000000, "Member 'WBP_CoreRankPip_C_UpdatePipVisual::PipSeed_0' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_UpdatePipVisual, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_CoreRankPip_C_UpdatePipVisual::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_UpdatePipVisual, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'WBP_CoreRankPip_C_UpdatePipVisual::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_UpdatePipVisual, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000010, "Member 'WBP_CoreRankPip_C_UpdatePipVisual::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_UpdatePipVisual, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000018, "Member 'WBP_CoreRankPip_C_UpdatePipVisual::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CoreRankPip_C_UpdatePipVisual, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00001C, "Member 'WBP_CoreRankPip_C_UpdatePipVisual::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

}

