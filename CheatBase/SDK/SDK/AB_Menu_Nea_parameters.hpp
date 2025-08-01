﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Menu_Nea

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AB_Menu_Nea.AB_Menu_Nea_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_Menu_Nea_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_Menu_Nea_C_AnimGraph) == 0x000008, "Wrong alignment on AB_Menu_Nea_C_AnimGraph");
static_assert(sizeof(AB_Menu_Nea_C_AnimGraph) == 0x000010, "Wrong size on AB_Menu_Nea_C_AnimGraph");
static_assert(offsetof(AB_Menu_Nea_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AB_Menu_Nea_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function AB_Menu_Nea.AB_Menu_Nea_C.ExecuteUbergraph_AB_Menu_Nea
// 0x0028 (0x0028 - 0x0000)
struct AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_AB_Camper_SubGraph_Menu_C> K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea) == 0x000008, "Wrong alignment on AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea");
static_assert(sizeof(AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea) == 0x000028, "Wrong size on AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea");
static_assert(offsetof(AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea, EntryPoint) == 0x000000, "Member 'AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea, CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue) == 0x000008, "Member 'AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea::CallFunc_GetLinkedAnimGraphInstanceByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea, K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu) == 0x000010, "Member 'AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea::K2Node_DynamicCast_AsBPI_AB_Camper_Sub_Graph_Menu' has a wrong offset!");
static_assert(offsetof(AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AB_Menu_Nea_C_ExecuteUbergraph_AB_Menu_Nea::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AB_Menu_Nea.AB_Menu_Nea_C.Override_Dynamic
// 0x0001 (0x0001 - 0x0000)
struct AB_Menu_Nea_C_Override_Dynamic final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_Nea_C_Override_Dynamic) == 0x000001, "Wrong alignment on AB_Menu_Nea_C_Override_Dynamic");
static_assert(sizeof(AB_Menu_Nea_C_Override_Dynamic) == 0x000001, "Wrong size on AB_Menu_Nea_C_Override_Dynamic");
static_assert(offsetof(AB_Menu_Nea_C_Override_Dynamic, Return) == 0x000000, "Member 'AB_Menu_Nea_C_Override_Dynamic::Return' has a wrong offset!");

// Function AB_Menu_Nea.AB_Menu_Nea_C.Override_Nea_0
// 0x0001 (0x0001 - 0x0000)
struct AB_Menu_Nea_C_Override_Nea_0 final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Menu_Nea_C_Override_Nea_0) == 0x000001, "Wrong alignment on AB_Menu_Nea_C_Override_Nea_0");
static_assert(sizeof(AB_Menu_Nea_C_Override_Nea_0) == 0x000001, "Wrong size on AB_Menu_Nea_C_Override_Nea_0");
static_assert(offsetof(AB_Menu_Nea_C_Override_Nea_0, Return) == 0x000000, "Member 'AB_Menu_Nea_C_Override_Nea_0::Return' has a wrong offset!");

}

