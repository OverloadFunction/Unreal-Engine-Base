﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheCannibal

#include "Basic.hpp"

#include "TheHillbilly_structs.hpp"


namespace SDK
{

// ScriptStruct TheCannibal.ChainsawHitWithPowerCharge
// 0x0004 (0x0008 - 0x0004)
struct FChainsawHitWithPowerCharge final : public FChainsawEvent
{
public:
	int32                                         NumPowerCharges;                                   // 0x0004(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChainsawHitWithPowerCharge) == 0x000004, "Wrong alignment on FChainsawHitWithPowerCharge");
static_assert(sizeof(FChainsawHitWithPowerCharge) == 0x000008, "Wrong size on FChainsawHitWithPowerCharge");
static_assert(offsetof(FChainsawHitWithPowerCharge, NumPowerCharges) == 0x000004, "Member 'FChainsawHitWithPowerCharge::NumPowerCharges' has a wrong offset!");

// ScriptStruct TheCannibal.CannibalAnalytics
// 0x0020 (0x00F8 - 0x00D8)
struct FCannibalAnalytics final : public FChainsawAnalytics
{
public:
	TArray<struct FChainsawHitWithPowerCharge>    HitWithPowerChargeEvents;                          // 0x00D8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FChainsawEvent>                 RevToTantrumEvents;                                // 0x00E8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCannibalAnalytics) == 0x000008, "Wrong alignment on FCannibalAnalytics");
static_assert(sizeof(FCannibalAnalytics) == 0x0000F8, "Wrong size on FCannibalAnalytics");
static_assert(offsetof(FCannibalAnalytics, HitWithPowerChargeEvents) == 0x0000D8, "Member 'FCannibalAnalytics::HitWithPowerChargeEvents' has a wrong offset!");
static_assert(offsetof(FCannibalAnalytics, RevToTantrumEvents) == 0x0000E8, "Member 'FCannibalAnalytics::RevToTantrumEvents' has a wrong offset!");

}

