﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS14

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"
#include "DeadByDaylight_classes.hpp"
#include "DataTableUtilities_structs.hpp"


namespace SDK
{

// Class TheS14.Autodidact
// 0x0020 (0x0480 - 0x0460)
class UAutodidact final : public UPerk
{
public:
	int32                                         _maxTokenCountPerLevel[0x3];                       // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _progressionBonusPerToken;                         // 0x046C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _initialSkillCheckProgressionPenalty;              // 0x0470(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_474[0xC];                                      // 0x0474(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Autodidact">();
	}
	static class UAutodidact* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutodidact>();
	}
};
static_assert(alignof(UAutodidact) == 0x000008, "Wrong alignment on UAutodidact");
static_assert(sizeof(UAutodidact) == 0x000480, "Wrong size on UAutodidact");
static_assert(offsetof(UAutodidact, _maxTokenCountPerLevel) == 0x000460, "Member 'UAutodidact::_maxTokenCountPerLevel' has a wrong offset!");
static_assert(offsetof(UAutodidact, _progressionBonusPerToken) == 0x00046C, "Member 'UAutodidact::_progressionBonusPerToken' has a wrong offset!");
static_assert(offsetof(UAutodidact, _initialSkillCheckProgressionPenalty) == 0x000470, "Member 'UAutodidact::_initialSkillCheckProgressionPenalty' has a wrong offset!");

// Class TheS14.Deliverance
// 0x0028 (0x0488 - 0x0460)
class UDeliverance final : public UPerk
{
public:
	float                                         _brokenEffectDurationPerLevel[0x3];                // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _selfUnhookAlwaysSucceedEffectClass;               // 0x0470(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _brokenEffectClass;                                // 0x0478(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _selfUnhookAlwaysSucceedEffect;                    // 0x0480(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	float GetBrokenEffectDurationAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Deliverance">();
	}
	static class UDeliverance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeliverance>();
	}
};
static_assert(alignof(UDeliverance) == 0x000008, "Wrong alignment on UDeliverance");
static_assert(sizeof(UDeliverance) == 0x000488, "Wrong size on UDeliverance");
static_assert(offsetof(UDeliverance, _brokenEffectDurationPerLevel) == 0x000460, "Member 'UDeliverance::_brokenEffectDurationPerLevel' has a wrong offset!");
static_assert(offsetof(UDeliverance, _selfUnhookAlwaysSucceedEffectClass) == 0x000470, "Member 'UDeliverance::_selfUnhookAlwaysSucceedEffectClass' has a wrong offset!");
static_assert(offsetof(UDeliverance, _brokenEffectClass) == 0x000478, "Member 'UDeliverance::_brokenEffectClass' has a wrong offset!");
static_assert(offsetof(UDeliverance, _selfUnhookAlwaysSucceedEffect) == 0x000480, "Member 'UDeliverance::_selfUnhookAlwaysSucceedEffect' has a wrong offset!");

// Class TheS14.Diversion
// 0x0080 (0x04E0 - 0x0460)
class UDiversion final : public UPerk
{
public:
	uint8                                         Pad_460[0x60];                                     // 0x0460(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _diversionActivationTimePerLevel[0x3];             // 0x04C0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _throwPebbleDistance;                              // 0x04CC(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UThrowRockInteraction>      _throwPebbleInteraction;                           // 0x04D0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionAttacherComponent*          _interactionAttacherComponent;                     // 0x04D8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void Authority_OnOwningSurvivorDamageStateChanged(EHealthState oldDamageState, EHealthState currentDamageState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Diversion">();
	}
	static class UDiversion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiversion>();
	}
};
static_assert(alignof(UDiversion) == 0x000008, "Wrong alignment on UDiversion");
static_assert(sizeof(UDiversion) == 0x0004E0, "Wrong size on UDiversion");
static_assert(offsetof(UDiversion, _diversionActivationTimePerLevel) == 0x0004C0, "Member 'UDiversion::_diversionActivationTimePerLevel' has a wrong offset!");
static_assert(offsetof(UDiversion, _throwPebbleDistance) == 0x0004CC, "Member 'UDiversion::_throwPebbleDistance' has a wrong offset!");
static_assert(offsetof(UDiversion, _throwPebbleInteraction) == 0x0004D0, "Member 'UDiversion::_throwPebbleInteraction' has a wrong offset!");
static_assert(offsetof(UDiversion, _interactionAttacherComponent) == 0x0004D8, "Member 'UDiversion::_interactionAttacherComponent' has a wrong offset!");

// Class TheS14.ThrowRockInteraction
// 0x0080 (0x07F0 - 0x0770)
class UThrowRockInteraction final : public UInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                   _loudNoiseAudioRange;                              // 0x0768(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                         _scratchMarksApplicationDelay;                     // 0x0790(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         _scratchMarksCountToSpawn;                         // 0x0794(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_798[0x4];                                      // 0x0798(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _diversionHeightOffset;                            // 0x079C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_7A0[0x50];                                     // 0x07A0(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ThrowRockInteraction">();
	}
	static class UThrowRockInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThrowRockInteraction>();
	}
};
static_assert(alignof(UThrowRockInteraction) == 0x000010, "Wrong alignment on UThrowRockInteraction");
static_assert(sizeof(UThrowRockInteraction) == 0x0007F0, "Wrong size on UThrowRockInteraction");
static_assert(offsetof(UThrowRockInteraction, _loudNoiseAudioRange) == 0x000768, "Member 'UThrowRockInteraction::_loudNoiseAudioRange' has a wrong offset!");
static_assert(offsetof(UThrowRockInteraction, _scratchMarksApplicationDelay) == 0x000790, "Member 'UThrowRockInteraction::_scratchMarksApplicationDelay' has a wrong offset!");
static_assert(offsetof(UThrowRockInteraction, _scratchMarksCountToSpawn) == 0x000794, "Member 'UThrowRockInteraction::_scratchMarksCountToSpawn' has a wrong offset!");
static_assert(offsetof(UThrowRockInteraction, _diversionHeightOffset) == 0x00079C, "Member 'UThrowRockInteraction::_diversionHeightOffset' has a wrong offset!");

}

