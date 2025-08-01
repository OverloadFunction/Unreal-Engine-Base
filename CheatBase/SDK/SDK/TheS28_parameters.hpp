﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS28

#include "Basic.hpp"


namespace SDK::Params
{

// Function TheS28.S28P01.Authority_OnS28P01InteractionStart
// 0x0008 (0x0008 - 0x0000)
struct S28P01_Authority_OnS28P01InteractionStart final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S28P01_Authority_OnS28P01InteractionStart) == 0x000008, "Wrong alignment on S28P01_Authority_OnS28P01InteractionStart");
static_assert(sizeof(S28P01_Authority_OnS28P01InteractionStart) == 0x000008, "Wrong size on S28P01_Authority_OnS28P01InteractionStart");
static_assert(offsetof(S28P01_Authority_OnS28P01InteractionStart, Player) == 0x000000, "Member 'S28P01_Authority_OnS28P01InteractionStart::Player' has a wrong offset!");

// Function TheS28.S28P01.OnInteractionChargeChanged
// 0x0010 (0x0010 - 0x0000)
struct S28P01_OnInteractionChargeChanged final
{
public:
	class UChargeableComponent*                   ChargeableComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalPercentComplete;                              // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S28P01_OnInteractionChargeChanged) == 0x000008, "Wrong alignment on S28P01_OnInteractionChargeChanged");
static_assert(sizeof(S28P01_OnInteractionChargeChanged) == 0x000010, "Wrong size on S28P01_OnInteractionChargeChanged");
static_assert(offsetof(S28P01_OnInteractionChargeChanged, ChargeableComponent) == 0x000000, "Member 'S28P01_OnInteractionChargeChanged::ChargeableComponent' has a wrong offset!");
static_assert(offsetof(S28P01_OnInteractionChargeChanged, TotalPercentComplete) == 0x000008, "Member 'S28P01_OnInteractionChargeChanged::TotalPercentComplete' has a wrong offset!");

// Function TheS28.S28P01.GetAuraRevealDuration
// 0x0004 (0x0004 - 0x0000)
struct S28P01_GetAuraRevealDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S28P01_GetAuraRevealDuration) == 0x000004, "Wrong alignment on S28P01_GetAuraRevealDuration");
static_assert(sizeof(S28P01_GetAuraRevealDuration) == 0x000004, "Wrong size on S28P01_GetAuraRevealDuration");
static_assert(offsetof(S28P01_GetAuraRevealDuration, ReturnValue) == 0x000000, "Member 'S28P01_GetAuraRevealDuration::ReturnValue' has a wrong offset!");

// Function TheS28.S28P01.GetAuraRevealRange
// 0x0004 (0x0004 - 0x0000)
struct S28P01_GetAuraRevealRange final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S28P01_GetAuraRevealRange) == 0x000004, "Wrong alignment on S28P01_GetAuraRevealRange");
static_assert(sizeof(S28P01_GetAuraRevealRange) == 0x000004, "Wrong size on S28P01_GetAuraRevealRange");
static_assert(offsetof(S28P01_GetAuraRevealRange, ReturnValue) == 0x000000, "Member 'S28P01_GetAuraRevealRange::ReturnValue' has a wrong offset!");

// Function TheS28.S28P02.GetHealingSpeedGainPercentageAtLevel
// 0x0004 (0x0004 - 0x0000)
struct S28P02_GetHealingSpeedGainPercentageAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S28P02_GetHealingSpeedGainPercentageAtLevel) == 0x000004, "Wrong alignment on S28P02_GetHealingSpeedGainPercentageAtLevel");
static_assert(sizeof(S28P02_GetHealingSpeedGainPercentageAtLevel) == 0x000004, "Wrong size on S28P02_GetHealingSpeedGainPercentageAtLevel");
static_assert(offsetof(S28P02_GetHealingSpeedGainPercentageAtLevel, ReturnValue) == 0x000000, "Member 'S28P02_GetHealingSpeedGainPercentageAtLevel::ReturnValue' has a wrong offset!");

// Function TheS28.S28P03.GetLingerDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct S28P03_GetLingerDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S28P03_GetLingerDurationAtLevel) == 0x000004, "Wrong alignment on S28P03_GetLingerDurationAtLevel");
static_assert(sizeof(S28P03_GetLingerDurationAtLevel) == 0x000004, "Wrong size on S28P03_GetLingerDurationAtLevel");
static_assert(offsetof(S28P03_GetLingerDurationAtLevel, ReturnValue) == 0x000000, "Member 'S28P03_GetLingerDurationAtLevel::ReturnValue' has a wrong offset!");

}

