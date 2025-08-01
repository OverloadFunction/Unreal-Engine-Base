﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThePig

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct ThePig.RBTSurvivorPair
// 0x0010 (0x0010 - 0x0000)
struct FRBTSurvivorPair final
{
public:
	class AReverseBearTrap*                       ReverseBearTrap;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASurvivor*                              Survivor;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRBTSurvivorPair) == 0x000008, "Wrong alignment on FRBTSurvivorPair");
static_assert(sizeof(FRBTSurvivorPair) == 0x000010, "Wrong size on FRBTSurvivorPair");
static_assert(offsetof(FRBTSurvivorPair, ReverseBearTrap) == 0x000000, "Member 'FRBTSurvivorPair::ReverseBearTrap' has a wrong offset!");
static_assert(offsetof(FRBTSurvivorPair, Survivor) == 0x000008, "Member 'FRBTSurvivorPair::Survivor' has a wrong offset!");

}

