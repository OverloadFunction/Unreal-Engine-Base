﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS34

#include "Basic.hpp"

#include "GameplayTagUtilities_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "DeadByDaylight_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// Class TheS34.S34P01
// 0x0138 (0x0598 - 0x0460)
class US34P01 final : public UPerk
{
public:
	class UChargeStrategy*                        _chargeStrategyWhenActive;                         // 0x0460(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableInteractionDefinition*       _redirectedInteraction;                            // 0x0468(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSecondaryInteractionProperties        _startAccumulateSecondaryActionProperties;         // 0x0470(0x0038)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FSecondaryInteractionProperties        _useTokensSecondaryActionProperties;               // 0x04A8(0x0038)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4E0[0x3C];                                     // 0x04E0(0x003C)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          _isPerkActive;                                     // 0x051C(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_51D[0x3];                                      // 0x051D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTagStateBool                          _isAccumulatingTokens;                             // 0x0520(0x0048)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                         Pad_568[0x4];                                      // 0x0568(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _initialCountdownTime[0x3];                        // 0x056C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _accumulatedPercentMultiplier;                     // 0x0578(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_57C[0x1C];                                     // 0x057C(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Authority_OnAccumulateRedirectedCharge(const float ChargeAmount, const float maxCharge);
	void Authority_OnSkillCheckResponse(bool Success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange);
	void Cosmetic_OnFullCharge(class ADBDPlayer* OwningPlayer);
	void Cosmetic_OnStartChargingPerk(class ADBDPlayer* OwningPlayer);
	void Cosmetic_OnStopChargingPerk(class ADBDPlayer* OwningPlayer);
	void Cosmetic_OnUseCharge(class ADBDPlayer* OwningPlayer);
	void Multicast_OnUseTokens();
	void OnDamageStateChanged(EHealthState oldDamageState, EHealthState currentDamageState);
	void OnRep_IsAccumulatingTokens();
	void OnRep_IsPerkActive();
	void Server_AbilityTwoPressed(bool IsPressed);

	float GetInitialCountdownAtLevel() const;
	bool IsPerkActive() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S34P01">();
	}
	static class US34P01* GetDefaultObj()
	{
		return GetDefaultObjImpl<US34P01>();
	}
};
static_assert(alignof(US34P01) == 0x000008, "Wrong alignment on US34P01");
static_assert(sizeof(US34P01) == 0x000598, "Wrong size on US34P01");
static_assert(offsetof(US34P01, _chargeStrategyWhenActive) == 0x000460, "Member 'US34P01::_chargeStrategyWhenActive' has a wrong offset!");
static_assert(offsetof(US34P01, _redirectedInteraction) == 0x000468, "Member 'US34P01::_redirectedInteraction' has a wrong offset!");
static_assert(offsetof(US34P01, _startAccumulateSecondaryActionProperties) == 0x000470, "Member 'US34P01::_startAccumulateSecondaryActionProperties' has a wrong offset!");
static_assert(offsetof(US34P01, _useTokensSecondaryActionProperties) == 0x0004A8, "Member 'US34P01::_useTokensSecondaryActionProperties' has a wrong offset!");
static_assert(offsetof(US34P01, _isPerkActive) == 0x00051C, "Member 'US34P01::_isPerkActive' has a wrong offset!");
static_assert(offsetof(US34P01, _isAccumulatingTokens) == 0x000520, "Member 'US34P01::_isAccumulatingTokens' has a wrong offset!");
static_assert(offsetof(US34P01, _initialCountdownTime) == 0x00056C, "Member 'US34P01::_initialCountdownTime' has a wrong offset!");
static_assert(offsetof(US34P01, _accumulatedPercentMultiplier) == 0x000578, "Member 'US34P01::_accumulatedPercentMultiplier' has a wrong offset!");

// Class TheS34.S34P02
// 0x0008 (0x0468 - 0x0460)
class US34P02 final : public UPerk
{
public:
	TSubclassOf<class UStatusEffect>              _revealKillerStatusClass;                          // 0x0460(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S34P02">();
	}
	static class US34P02* GetDefaultObj()
	{
		return GetDefaultObjImpl<US34P02>();
	}
};
static_assert(alignof(US34P02) == 0x000008, "Wrong alignment on US34P02");
static_assert(sizeof(US34P02) == 0x000468, "Wrong size on US34P02");
static_assert(offsetof(US34P02, _revealKillerStatusClass) == 0x000460, "Member 'US34P02::_revealKillerStatusClass' has a wrong offset!");

// Class TheS34.S34P03
// 0x0088 (0x04E8 - 0x0460)
class US34P03 final : public UPerk
{
public:
	TMap<class ADBDPlayer*, class UStatusEffect*> _activeStatusEffects;                              // 0x0460(0x0050)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _repairSpeedModifierWithOtherSurvivorsClass;       // 0x04B0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _revealSurvivorsInChaseEffectClass;                // 0x04B8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _repairSpeedValues[0x3];                           // 0x04C0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _cooldownDuration[0x3];                            // 0x04CC(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4D8[0x10];                                     // 0x04D8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Authority_OnIntroComplete();
	void Authority_OnOwnerDamageStateChanged(EHealthState oldDamageState, EHealthState newDamageState);

	float GetCooldownDurationAtLevel() const;
	float GetRepairSpeedAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S34P03">();
	}
	static class US34P03* GetDefaultObj()
	{
		return GetDefaultObjImpl<US34P03>();
	}
};
static_assert(alignof(US34P03) == 0x000008, "Wrong alignment on US34P03");
static_assert(sizeof(US34P03) == 0x0004E8, "Wrong size on US34P03");
static_assert(offsetof(US34P03, _activeStatusEffects) == 0x000460, "Member 'US34P03::_activeStatusEffects' has a wrong offset!");
static_assert(offsetof(US34P03, _repairSpeedModifierWithOtherSurvivorsClass) == 0x0004B0, "Member 'US34P03::_repairSpeedModifierWithOtherSurvivorsClass' has a wrong offset!");
static_assert(offsetof(US34P03, _revealSurvivorsInChaseEffectClass) == 0x0004B8, "Member 'US34P03::_revealSurvivorsInChaseEffectClass' has a wrong offset!");
static_assert(offsetof(US34P03, _repairSpeedValues) == 0x0004C0, "Member 'US34P03::_repairSpeedValues' has a wrong offset!");
static_assert(offsetof(US34P03, _cooldownDuration) == 0x0004CC, "Member 'US34P03::_cooldownDuration' has a wrong offset!");

// Class TheS34.S34P03RepairEffect
// 0x0000 (0x0398 - 0x0398)
class US34P03RepairEffect final : public UStatusEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S34P03RepairEffect">();
	}
	static class US34P03RepairEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<US34P03RepairEffect>();
	}
};
static_assert(alignof(US34P03RepairEffect) == 0x000008, "Wrong alignment on US34P03RepairEffect");
static_assert(sizeof(US34P03RepairEffect) == 0x000398, "Wrong size on US34P03RepairEffect");

}

