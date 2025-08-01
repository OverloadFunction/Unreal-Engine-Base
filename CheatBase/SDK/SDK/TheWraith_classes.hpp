﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheWraith

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"
#include "Engine_classes.hpp"
#include "DBDInteraction_classes.hpp"
#include "StatSystem_structs.hpp"
#include "DBDAnimation_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// Class TheWraith.Addon_Wraith_TheSerpentSoot
// 0x0000 (0x0300 - 0x0300)
class UAddon_Wraith_TheSerpentSoot final : public UItemAddon
{
public:
	void OnInteractionComplete(class ADBDPlayer* Player, bool hasInteractionStarted);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Addon_Wraith_TheSerpentSoot">();
	}
	static class UAddon_Wraith_TheSerpentSoot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAddon_Wraith_TheSerpentSoot>();
	}
};
static_assert(alignof(UAddon_Wraith_TheSerpentSoot) == 0x000008, "Wrong alignment on UAddon_Wraith_TheSerpentSoot");
static_assert(sizeof(UAddon_Wraith_TheSerpentSoot) == 0x000300, "Wrong size on UAddon_Wraith_TheSerpentSoot");

// Class TheWraith.BaseCloakInteraction
// 0x0050 (0x0970 - 0x0920)
class UBaseCloakInteraction : public UBasicChargeableInteraction
{
public:
	uint8                                         Pad_920[0x50];                                     // 0x0920(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseCloakInteraction">();
	}
	static class UBaseCloakInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseCloakInteraction>();
	}
};
static_assert(alignof(UBaseCloakInteraction) == 0x000010, "Wrong alignment on UBaseCloakInteraction");
static_assert(sizeof(UBaseCloakInteraction) == 0x000970, "Wrong size on UBaseCloakInteraction");

// Class TheWraith.CloakComponent
// 0x00D8 (0x0190 - 0x00B8)
class UCloakComponent final : public UActorComponent
{
public:
	bool                                          _isCloaked;                                        // 0x00B8(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBasicChargeableInteraction*            _cloakInteraction;                                 // 0x00C0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBasicChargeableInteraction*            _uncloakInteraction;                               // 0x00C8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                            _postUncloakSpeedCurve;                            // 0x00D0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _postUncloakSpeedCurveDuration;                    // 0x00D8(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_158[0x38];                                     // 0x0158(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_IsCloaked();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CloakComponent">();
	}
	static class UCloakComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCloakComponent>();
	}
};
static_assert(alignof(UCloakComponent) == 0x000008, "Wrong alignment on UCloakComponent");
static_assert(sizeof(UCloakComponent) == 0x000190, "Wrong size on UCloakComponent");
static_assert(offsetof(UCloakComponent, _isCloaked) == 0x0000B8, "Member 'UCloakComponent::_isCloaked' has a wrong offset!");
static_assert(offsetof(UCloakComponent, _cloakInteraction) == 0x0000C0, "Member 'UCloakComponent::_cloakInteraction' has a wrong offset!");
static_assert(offsetof(UCloakComponent, _uncloakInteraction) == 0x0000C8, "Member 'UCloakComponent::_uncloakInteraction' has a wrong offset!");
static_assert(offsetof(UCloakComponent, _postUncloakSpeedCurve) == 0x0000D0, "Member 'UCloakComponent::_postUncloakSpeedCurve' has a wrong offset!");
static_assert(offsetof(UCloakComponent, _postUncloakSpeedCurveDuration) == 0x0000D8, "Member 'UCloakComponent::_postUncloakSpeedCurveDuration' has a wrong offset!");

// Class TheWraith.CloakInteraction
// 0x0000 (0x0970 - 0x0970)
class UCloakInteraction final : public UBaseCloakInteraction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CloakInteraction">();
	}
	static class UCloakInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCloakInteraction>();
	}
};
static_assert(alignof(UCloakInteraction) == 0x000010, "Wrong alignment on UCloakInteraction");
static_assert(sizeof(UCloakInteraction) == 0x000970, "Wrong size on UCloakInteraction");

// Class TheWraith.Predator
// 0x0018 (0x0478 - 0x0460)
class UPredator final : public UPerk
{
public:
	float                                         _auraRevealDuration;                               // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _killerAuraRevealCooldown[0x3];                    // 0x0464(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _timedAuraRevealStatusEffectClass;                 // 0x0470(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Predator">();
	}
	static class UPredator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPredator>();
	}
};
static_assert(alignof(UPredator) == 0x000008, "Wrong alignment on UPredator");
static_assert(sizeof(UPredator) == 0x000478, "Wrong size on UPredator");
static_assert(offsetof(UPredator, _auraRevealDuration) == 0x000460, "Member 'UPredator::_auraRevealDuration' has a wrong offset!");
static_assert(offsetof(UPredator, _killerAuraRevealCooldown) == 0x000464, "Member 'UPredator::_killerAuraRevealCooldown' has a wrong offset!");
static_assert(offsetof(UPredator, _timedAuraRevealStatusEffectClass) == 0x000470, "Member 'UPredator::_timedAuraRevealStatusEffectClass' has a wrong offset!");

// Class TheWraith.UncloakInteraction
// 0x0000 (0x0970 - 0x0970)
class UUncloakInteraction final : public UBaseCloakInteraction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UncloakInteraction">();
	}
	static class UUncloakInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUncloakInteraction>();
	}
};
static_assert(alignof(UUncloakInteraction) == 0x000010, "Wrong alignment on UUncloakInteraction");
static_assert(sizeof(UUncloakInteraction) == 0x000970, "Wrong size on UUncloakInteraction");

// Class TheWraith.WraithAnimInstance
// 0x00A0 (0x07C0 - 0x0720)
class UWraithAnimInstance final : public UKillerAnimInstance
{
public:
	bool                                          _isRingingBell;                                    // 0x0720(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isCloaking;                                       // 0x0721(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isUncloaking;                                     // 0x0722(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_723[0x5];                                      // 0x0723(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerspectiveDependentAnimSequenceSelector _cloakingInSelector;                            // 0x0728(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector _cloakingSelector;                              // 0x0740(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector _cloakingOutSelector;                           // 0x0758(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector _uncloakingInSelector;                          // 0x0770(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector _uncloakingSelector;                            // 0x0788(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector _uncloakingOutSelector;                         // 0x07A0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                         _cloakingPlayRate;                                 // 0x07B8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_7BC[0x4];                                      // 0x07BC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WraithAnimInstance">();
	}
	static class UWraithAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWraithAnimInstance>();
	}
};
static_assert(alignof(UWraithAnimInstance) == 0x000010, "Wrong alignment on UWraithAnimInstance");
static_assert(sizeof(UWraithAnimInstance) == 0x0007C0, "Wrong size on UWraithAnimInstance");
static_assert(offsetof(UWraithAnimInstance, _isRingingBell) == 0x000720, "Member 'UWraithAnimInstance::_isRingingBell' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _isCloaking) == 0x000721, "Member 'UWraithAnimInstance::_isCloaking' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _isUncloaking) == 0x000722, "Member 'UWraithAnimInstance::_isUncloaking' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _cloakingInSelector) == 0x000728, "Member 'UWraithAnimInstance::_cloakingInSelector' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _cloakingSelector) == 0x000740, "Member 'UWraithAnimInstance::_cloakingSelector' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _cloakingOutSelector) == 0x000758, "Member 'UWraithAnimInstance::_cloakingOutSelector' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _uncloakingInSelector) == 0x000770, "Member 'UWraithAnimInstance::_uncloakingInSelector' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _uncloakingSelector) == 0x000788, "Member 'UWraithAnimInstance::_uncloakingSelector' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _uncloakingOutSelector) == 0x0007A0, "Member 'UWraithAnimInstance::_uncloakingOutSelector' has a wrong offset!");
static_assert(offsetof(UWraithAnimInstance, _cloakingPlayRate) == 0x0007B8, "Member 'UWraithAnimInstance::_cloakingPlayRate' has a wrong offset!");

// Class TheWraith.WraithPower
// 0x0018 (0x0570 - 0x0558)
class AWraithPower final : public ACollectable
{
public:
	uint8                                         Pad_558[0x18];                                     // 0x0558(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ForceUncloak();

	bool IsCloaking() const;
	bool IsUncloaking() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WraithPower">();
	}
	static class AWraithPower* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWraithPower>();
	}
};
static_assert(alignof(AWraithPower) == 0x000008, "Wrong alignment on AWraithPower");
static_assert(sizeof(AWraithPower) == 0x000570, "Wrong size on AWraithPower");

}

