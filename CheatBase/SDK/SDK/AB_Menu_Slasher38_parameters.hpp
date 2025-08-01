﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Menu_Slasher38

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_MenuAnimationState_structs.hpp"
#include "DeadByDaylight_structs.hpp"


namespace SDK::Params
{

// Function AB_Menu_Slasher38.AB_Menu_Slasher38_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_Menu_Slasher38_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_Menu_Slasher38_C_AnimGraph) == 0x000008, "Wrong alignment on AB_Menu_Slasher38_C_AnimGraph");
static_assert(sizeof(AB_Menu_Slasher38_C_AnimGraph) == 0x000010, "Wrong size on AB_Menu_Slasher38_C_AnimGraph");
static_assert(offsetof(AB_Menu_Slasher38_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AB_Menu_Slasher38_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function AB_Menu_Slasher38.AB_Menu_Slasher38_C.ExecuteUbergraph_AB_Menu_Slasher38
// 0x0078 (0x0078 - 0x0000)
struct AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_MenuAnimationState                       K2Node_CustomEvent_Ending_State;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(Enum_MenuAnimationState Ending_State)> K2Node_CreateDelegate_OutputDelegate;      // 0x0008(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(Enum_MenuAnimationState State)> K2Node_CreateDelegate_OutputDelegate_1;           // 0x001C(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_AB_Slasher_SubGraph_Menu_C> K2Node_DynamicCast_AsBPI_AB_Slasher_Sub_Graph_Menu; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameFlowStep                                 CallFunc_GetCurrentMenu_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Menu_Slasher38_C*                   K2Node_DynamicCast_AsBP_Menu_Slasher_38;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_MenuAnimationState                       K2Node_CustomEvent_State;                          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38) == 0x000008, "Wrong alignment on AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38");
static_assert(sizeof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38) == 0x000078, "Wrong size on AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, EntryPoint) == 0x000000, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_CustomEvent_Ending_State) == 0x000004, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_CustomEvent_Ending_State' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000006, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue) == 0x000030, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_DynamicCast_AsBPI_AB_Slasher_Sub_Graph_Menu) == 0x000038, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_DynamicCast_AsBPI_AB_Slasher_Sub_Graph_Menu' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x00004C, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, CallFunc_GetCurrentMenu_ReturnValue) == 0x000050, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::CallFunc_GetCurrentMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000051, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, CallFunc_BooleanOR_ReturnValue) == 0x000052, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000058, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_DynamicCast_AsBP_Menu_Slasher_38) == 0x000060, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_DynamicCast_AsBP_Menu_Slasher_38' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_CustomEvent_State) == 0x000069, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_CustomEvent_State' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, K2Node_SwitchEnum_CmpSuccess_1) == 0x00006A, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'AB_Menu_Slasher38_C_ExecuteUbergraph_AB_Menu_Slasher38::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function AB_Menu_Slasher38.AB_Menu_Slasher38_C.OnMenuAnimStateChange
// 0x0001 (0x0001 - 0x0000)
struct AB_Menu_Slasher38_C_OnMenuAnimStateChange final
{
public:
	Enum_MenuAnimationState                       State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_Slasher38_C_OnMenuAnimStateChange) == 0x000001, "Wrong alignment on AB_Menu_Slasher38_C_OnMenuAnimStateChange");
static_assert(sizeof(AB_Menu_Slasher38_C_OnMenuAnimStateChange) == 0x000001, "Wrong size on AB_Menu_Slasher38_C_OnMenuAnimStateChange");
static_assert(offsetof(AB_Menu_Slasher38_C_OnMenuAnimStateChange, State) == 0x000000, "Member 'AB_Menu_Slasher38_C_OnMenuAnimStateChange::State' has a wrong offset!");

// Function AB_Menu_Slasher38.AB_Menu_Slasher38_C.OnMenuAnimStateEnded
// 0x0001 (0x0001 - 0x0000)
struct AB_Menu_Slasher38_C_OnMenuAnimStateEnded final
{
public:
	Enum_MenuAnimationState                       Ending_State;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_Slasher38_C_OnMenuAnimStateEnded) == 0x000001, "Wrong alignment on AB_Menu_Slasher38_C_OnMenuAnimStateEnded");
static_assert(sizeof(AB_Menu_Slasher38_C_OnMenuAnimStateEnded) == 0x000001, "Wrong size on AB_Menu_Slasher38_C_OnMenuAnimStateEnded");
static_assert(offsetof(AB_Menu_Slasher38_C_OnMenuAnimStateEnded, Ending_State) == 0x000000, "Member 'AB_Menu_Slasher38_C_OnMenuAnimStateEnded::Ending_State' has a wrong offset!");

}

