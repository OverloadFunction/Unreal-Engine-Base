﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS21

#include "Basic.hpp"


namespace SDK::Params
{

// Function TheS21.ForThePeople.Multicast_OnHealAbilityUsed
// 0x0018 (0x0018 - 0x0000)
struct ForThePeople_Multicast_OnHealAbilityUsed final
{
public:
	class ASurvivor*                              healer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASurvivor*                              healTarget;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         amountHealed;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ForThePeople_Multicast_OnHealAbilityUsed) == 0x000008, "Wrong alignment on ForThePeople_Multicast_OnHealAbilityUsed");
static_assert(sizeof(ForThePeople_Multicast_OnHealAbilityUsed) == 0x000018, "Wrong size on ForThePeople_Multicast_OnHealAbilityUsed");
static_assert(offsetof(ForThePeople_Multicast_OnHealAbilityUsed, healer) == 0x000000, "Member 'ForThePeople_Multicast_OnHealAbilityUsed::healer' has a wrong offset!");
static_assert(offsetof(ForThePeople_Multicast_OnHealAbilityUsed, healTarget) == 0x000008, "Member 'ForThePeople_Multicast_OnHealAbilityUsed::healTarget' has a wrong offset!");
static_assert(offsetof(ForThePeople_Multicast_OnHealAbilityUsed, amountHealed) == 0x000010, "Member 'ForThePeople_Multicast_OnHealAbilityUsed::amountHealed' has a wrong offset!");

// Function TheS21.ForThePeople.OnHealingAbilityUsed
// 0x0010 (0x0010 - 0x0000)
struct ForThePeople_OnHealingAbilityUsed final
{
public:
	class ASurvivor*                              healingSurvivor;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASurvivor*                              healedSurvivor;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ForThePeople_OnHealingAbilityUsed) == 0x000008, "Wrong alignment on ForThePeople_OnHealingAbilityUsed");
static_assert(sizeof(ForThePeople_OnHealingAbilityUsed) == 0x000010, "Wrong size on ForThePeople_OnHealingAbilityUsed");
static_assert(offsetof(ForThePeople_OnHealingAbilityUsed, healingSurvivor) == 0x000000, "Member 'ForThePeople_OnHealingAbilityUsed::healingSurvivor' has a wrong offset!");
static_assert(offsetof(ForThePeople_OnHealingAbilityUsed, healedSurvivor) == 0x000008, "Member 'ForThePeople_OnHealingAbilityUsed::healedSurvivor' has a wrong offset!");

// Function TheS21.ForThePeople.GetBrokenEffectDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct ForThePeople_GetBrokenEffectDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ForThePeople_GetBrokenEffectDurationAtLevel) == 0x000004, "Wrong alignment on ForThePeople_GetBrokenEffectDurationAtLevel");
static_assert(sizeof(ForThePeople_GetBrokenEffectDurationAtLevel) == 0x000004, "Wrong size on ForThePeople_GetBrokenEffectDurationAtLevel");
static_assert(offsetof(ForThePeople_GetBrokenEffectDurationAtLevel, ReturnValue) == 0x000000, "Member 'ForThePeople_GetBrokenEffectDurationAtLevel::ReturnValue' has a wrong offset!");

// Function TheS21.OffTheRecord.GetActivationDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct OffTheRecord_GetActivationDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OffTheRecord_GetActivationDurationAtLevel) == 0x000004, "Wrong alignment on OffTheRecord_GetActivationDurationAtLevel");
static_assert(sizeof(OffTheRecord_GetActivationDurationAtLevel) == 0x000004, "Wrong size on OffTheRecord_GetActivationDurationAtLevel");
static_assert(offsetof(OffTheRecord_GetActivationDurationAtLevel, ReturnValue) == 0x000000, "Member 'OffTheRecord_GetActivationDurationAtLevel::ReturnValue' has a wrong offset!");

// Function TheS21.RedHerring.OnRep_MarkedGenerator
// 0x0008 (0x0008 - 0x0000)
struct RedHerring_OnRep_MarkedGenerator final
{
public:
	class AGenerator*                             oldMarkedGenerator;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RedHerring_OnRep_MarkedGenerator) == 0x000008, "Wrong alignment on RedHerring_OnRep_MarkedGenerator");
static_assert(sizeof(RedHerring_OnRep_MarkedGenerator) == 0x000008, "Wrong size on RedHerring_OnRep_MarkedGenerator");
static_assert(offsetof(RedHerring_OnRep_MarkedGenerator, oldMarkedGenerator) == 0x000000, "Member 'RedHerring_OnRep_MarkedGenerator::oldMarkedGenerator' has a wrong offset!");

}

