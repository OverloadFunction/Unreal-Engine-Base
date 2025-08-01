﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Menu_S31

#include "Basic.hpp"


namespace SDK::Params
{

// Function AB_Menu_S31.AB_Menu_S31_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AB_Menu_S31_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_S31_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AB_Menu_S31_C_BlueprintUpdateAnimation");
static_assert(sizeof(AB_Menu_S31_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AB_Menu_S31_C_BlueprintUpdateAnimation");
static_assert(offsetof(AB_Menu_S31_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AB_Menu_S31_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AB_Menu_S31.AB_Menu_S31_C.ExecuteUbergraph_AB_Menu_S31
// 0x0040 (0x0040 - 0x0000)
struct AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_AB_Camper_SubGraph_Menu_C> K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_AB_Camper_SubGraph_Menu_C> K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu_1; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31) == 0x000008, "Wrong alignment on AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31");
static_assert(sizeof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31) == 0x000040, "Wrong size on AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31");
static_assert(offsetof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31, EntryPoint) == 0x000000, "Member 'AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31, CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue) == 0x000008, "Member 'AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31::CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31, K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu) == 0x000010, "Member 'AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31::K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu' has a wrong offset!");
static_assert(offsetof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31, K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu_1) == 0x000028, "Member 'AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31::K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu_1' has a wrong offset!");
static_assert(offsetof(AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'AB_Menu_S31_C_ExecuteUbergraph_AB_Menu_S31::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

