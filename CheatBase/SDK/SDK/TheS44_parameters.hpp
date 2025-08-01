﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS44

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"


namespace SDK::Params
{

// Function TheS44.S44P03.OnSurvivorDamageStateChanged
// 0x0002 (0x0002 - 0x0000)
struct S44P03_OnSurvivorDamageStateChanged final
{
public:
	EHealthState                                  previousDamageState;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHealthState                                  newDamageState;                                    // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S44P03_OnSurvivorDamageStateChanged) == 0x000001, "Wrong alignment on S44P03_OnSurvivorDamageStateChanged");
static_assert(sizeof(S44P03_OnSurvivorDamageStateChanged) == 0x000002, "Wrong size on S44P03_OnSurvivorDamageStateChanged");
static_assert(offsetof(S44P03_OnSurvivorDamageStateChanged, previousDamageState) == 0x000000, "Member 'S44P03_OnSurvivorDamageStateChanged::previousDamageState' has a wrong offset!");
static_assert(offsetof(S44P03_OnSurvivorDamageStateChanged, newDamageState) == 0x000001, "Member 'S44P03_OnSurvivorDamageStateChanged::newDamageState' has a wrong offset!");

}

