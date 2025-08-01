﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoreMemory

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct CoreMemory.CoreMemoryFragmentSpawnData
// 0x0018 (0x0018 - 0x0000)
struct FCoreMemoryFragmentSpawnData final
{
public:
	TSubclassOf<class ACoreMemoryFragment>        FragmentClass;                                     // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TriggerZoneRadiusDistance;                         // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpawnDistanceFromPlayer;                           // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpawnDistanceFromOtherFragments;                   // 0x0010(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HeightDistance;                                    // 0x0014(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCoreMemoryFragmentSpawnData) == 0x000008, "Wrong alignment on FCoreMemoryFragmentSpawnData");
static_assert(sizeof(FCoreMemoryFragmentSpawnData) == 0x000018, "Wrong size on FCoreMemoryFragmentSpawnData");
static_assert(offsetof(FCoreMemoryFragmentSpawnData, FragmentClass) == 0x000000, "Member 'FCoreMemoryFragmentSpawnData::FragmentClass' has a wrong offset!");
static_assert(offsetof(FCoreMemoryFragmentSpawnData, TriggerZoneRadiusDistance) == 0x000008, "Member 'FCoreMemoryFragmentSpawnData::TriggerZoneRadiusDistance' has a wrong offset!");
static_assert(offsetof(FCoreMemoryFragmentSpawnData, SpawnDistanceFromPlayer) == 0x00000C, "Member 'FCoreMemoryFragmentSpawnData::SpawnDistanceFromPlayer' has a wrong offset!");
static_assert(offsetof(FCoreMemoryFragmentSpawnData, SpawnDistanceFromOtherFragments) == 0x000010, "Member 'FCoreMemoryFragmentSpawnData::SpawnDistanceFromOtherFragments' has a wrong offset!");
static_assert(offsetof(FCoreMemoryFragmentSpawnData, HeightDistance) == 0x000014, "Member 'FCoreMemoryFragmentSpawnData::HeightDistance' has a wrong offset!");

// ScriptStruct CoreMemory.CoreMemoryStatusEffectDetails
// 0x0030 (0x0030 - 0x0000)
struct FCoreMemoryStatusEffectDetails final
{
public:
	TSubclassOf<class UStatusEffect>              _statusEffect;                                     // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 _effectDurationParamKey;                           // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 _customEffectParamKey;                             // 0x0018(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _effectDuration;                                   // 0x0028(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _customEffectParam;                                // 0x002C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FCoreMemoryStatusEffectDetails) == 0x000008, "Wrong alignment on FCoreMemoryStatusEffectDetails");
static_assert(sizeof(FCoreMemoryStatusEffectDetails) == 0x000030, "Wrong size on FCoreMemoryStatusEffectDetails");
static_assert(offsetof(FCoreMemoryStatusEffectDetails, _statusEffect) == 0x000000, "Member 'FCoreMemoryStatusEffectDetails::_statusEffect' has a wrong offset!");
static_assert(offsetof(FCoreMemoryStatusEffectDetails, _effectDurationParamKey) == 0x000008, "Member 'FCoreMemoryStatusEffectDetails::_effectDurationParamKey' has a wrong offset!");
static_assert(offsetof(FCoreMemoryStatusEffectDetails, _customEffectParamKey) == 0x000018, "Member 'FCoreMemoryStatusEffectDetails::_customEffectParamKey' has a wrong offset!");
static_assert(offsetof(FCoreMemoryStatusEffectDetails, _effectDuration) == 0x000028, "Member 'FCoreMemoryStatusEffectDetails::_effectDuration' has a wrong offset!");
static_assert(offsetof(FCoreMemoryStatusEffectDetails, _customEffectParam) == 0x00002C, "Member 'FCoreMemoryStatusEffectDetails::_customEffectParam' has a wrong offset!");

}

