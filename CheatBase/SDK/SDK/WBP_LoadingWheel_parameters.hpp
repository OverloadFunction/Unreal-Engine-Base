﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingWheel

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_LoadingWheel.WBP_LoadingWheel_C.ExecuteUbergraph_WBP_LoadingWheel
// 0x0010 (0x0010 - 0x0000)
struct WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel) == 0x000008, "Wrong alignment on WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel");
static_assert(sizeof(WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel) == 0x000010, "Wrong size on WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel");
static_assert(offsetof(WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel, EntryPoint) == 0x000000, "Member 'WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_LoadingWheel_C_ExecuteUbergraph_WBP_LoadingWheel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

