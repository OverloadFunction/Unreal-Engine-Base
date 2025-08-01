﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS44

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// Class TheS44.MomentOfGloryIconStrategy
// 0x0000 (0x0038 - 0x0038)
class UMomentOfGloryIconStrategy final : public UBasePerkIconStrategy
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MomentOfGloryIconStrategy">();
	}
	static class UMomentOfGloryIconStrategy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMomentOfGloryIconStrategy>();
	}
};
static_assert(alignof(UMomentOfGloryIconStrategy) == 0x000008, "Wrong alignment on UMomentOfGloryIconStrategy");
static_assert(sizeof(UMomentOfGloryIconStrategy) == 0x000038, "Wrong size on UMomentOfGloryIconStrategy");

// Class TheS44.S44P01
// 0x0028 (0x0488 - 0x0460)
class US44P01 final : public UPerk
{
public:
	float                                         _killerRevealDuration[0x3];                        // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _timedRevealEffect;                                // 0x0470(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_478[0x10];                                     // 0x0478(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S44P01">();
	}
	static class US44P01* GetDefaultObj()
	{
		return GetDefaultObjImpl<US44P01>();
	}
};
static_assert(alignof(US44P01) == 0x000008, "Wrong alignment on US44P01");
static_assert(sizeof(US44P01) == 0x000488, "Wrong size on US44P01");
static_assert(offsetof(US44P01, _killerRevealDuration) == 0x000460, "Member 'US44P01::_killerRevealDuration' has a wrong offset!");
static_assert(offsetof(US44P01, _timedRevealEffect) == 0x000470, "Member 'US44P01::_timedRevealEffect' has a wrong offset!");

// Class TheS44.S44P02
// 0x0010 (0x0470 - 0x0460)
class US44P02 final : public UPerk
{
public:
	float                                         _cooldownDuration[0x3];                            // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _upgradedItemChargeIncreasePercentage;             // 0x046C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S44P02">();
	}
	static class US44P02* GetDefaultObj()
	{
		return GetDefaultObjImpl<US44P02>();
	}
};
static_assert(alignof(US44P02) == 0x000008, "Wrong alignment on US44P02");
static_assert(sizeof(US44P02) == 0x000470, "Wrong size on US44P02");
static_assert(offsetof(US44P02, _cooldownDuration) == 0x000460, "Member 'US44P02::_cooldownDuration' has a wrong offset!");
static_assert(offsetof(US44P02, _upgradedItemChargeIncreasePercentage) == 0x00046C, "Member 'US44P02::_upgradedItemChargeIncreasePercentage' has a wrong offset!");

// Class TheS44.S44P03
// 0x0068 (0x04C8 - 0x0460)
class US44P03 final : public UPerk
{
public:
	int32                                         _openOrRummageChestCountPerLevel[0x3];             // 0x0460(0x0004)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _durationOfHeal[0x3];                              // 0x046C(0x0004)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _brokenStatusEffectClass;                          // 0x0478(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _brokenStatusEffect;                               // 0x0480(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_488[0x40];                                     // 0x0488(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnSurvivorDamageStateChanged(EHealthState previousDamageState, EHealthState newDamageState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S44P03">();
	}
	static class US44P03* GetDefaultObj()
	{
		return GetDefaultObjImpl<US44P03>();
	}
};
static_assert(alignof(US44P03) == 0x000008, "Wrong alignment on US44P03");
static_assert(sizeof(US44P03) == 0x0004C8, "Wrong size on US44P03");
static_assert(offsetof(US44P03, _openOrRummageChestCountPerLevel) == 0x000460, "Member 'US44P03::_openOrRummageChestCountPerLevel' has a wrong offset!");
static_assert(offsetof(US44P03, _durationOfHeal) == 0x00046C, "Member 'US44P03::_durationOfHeal' has a wrong offset!");
static_assert(offsetof(US44P03, _brokenStatusEffectClass) == 0x000478, "Member 'US44P03::_brokenStatusEffectClass' has a wrong offset!");
static_assert(offsetof(US44P03, _brokenStatusEffect) == 0x000480, "Member 'US44P03::_brokenStatusEffect' has a wrong offset!");

}

