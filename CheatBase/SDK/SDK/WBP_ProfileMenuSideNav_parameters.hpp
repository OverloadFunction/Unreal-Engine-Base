﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ProfileMenuSideNav

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ProfileMenuSideNav.WBP_ProfileMenuSideNav_C.ExecuteUbergraph_WBP_ProfileMenuSideNav
// 0x0018 (0x0018 - 0x0000)
struct WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ProfileMenuTab_C*                  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav) == 0x000008, "Wrong alignment on WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav");
static_assert(sizeof(WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav) == 0x000018, "Wrong size on WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav");
static_assert(offsetof(WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav, EntryPoint) == 0x000000, "Member 'WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'WBP_ProfileMenuSideNav_C_ExecuteUbergraph_WBP_ProfileMenuSideNav::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_ProfileMenuSideNav.WBP_ProfileMenuSideNav_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ProfileMenuSideNav_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ProfileMenuSideNav_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ProfileMenuSideNav_C_PreConstruct");
static_assert(sizeof(WBP_ProfileMenuSideNav_C_PreConstruct) == 0x000001, "Wrong size on WBP_ProfileMenuSideNav_C_PreConstruct");
static_assert(offsetof(WBP_ProfileMenuSideNav_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ProfileMenuSideNav_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

