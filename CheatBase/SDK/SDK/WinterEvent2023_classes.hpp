﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WinterEvent2023

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DataTableUtilities_structs.hpp"
#include "DBDCompetence_classes.hpp"
#include "SnowmanWinterEvent_classes.hpp"
#include "WinterEvent2023_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "DeadByDaylight_classes.hpp"
#include "Projectile_classes.hpp"
#include "GameplayUtilities_classes.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// Class WinterEvent2023.KillerRevealedBySnowballTimedEffect
// 0x0028 (0x03F0 - 0x03C8)
class UKillerRevealedBySnowballTimedEffect final : public UActivateOnEventTimedStatusEffect
{
public:
	struct FDBDTunableRowHandle                   _effectDuration;                                   // 0x03C8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KillerRevealedBySnowballTimedEffect">();
	}
	static class UKillerRevealedBySnowballTimedEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillerRevealedBySnowballTimedEffect>();
	}
};
static_assert(alignof(UKillerRevealedBySnowballTimedEffect) == 0x000008, "Wrong alignment on UKillerRevealedBySnowballTimedEffect");
static_assert(sizeof(UKillerRevealedBySnowballTimedEffect) == 0x0003F0, "Wrong size on UKillerRevealedBySnowballTimedEffect");
static_assert(offsetof(UKillerRevealedBySnowballTimedEffect, _effectDuration) == 0x0003C8, "Member 'UKillerRevealedBySnowballTimedEffect::_effectDuration' has a wrong offset!");

// Class WinterEvent2023.MrMarch
// 0x01A8 (0x0730 - 0x0588)
class AMrMarch final : public ASnowmanBase
{
public:
	uint8                                         Pad_588[0x18];                                     // 0x0588(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UDBDSkeletalMeshComponentBudgeted*      _mrMarchSkeletalMesh;                              // 0x05A0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                   _outlineComponent;                                 // 0x05A8(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                      _mrMarchCollision;                                 // 0x05B0(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                       _jumpscareTriggerZone;                             // 0x05B8(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDNavModifierComponent*               _dbdNavModifierComponent;                          // 0x05C0(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _scareTriggerRadius;                               // 0x05C8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _destroyableDelay;                                 // 0x05F0(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _owningPlayerJumpScareImmuneDuration;              // 0x0618(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _shouldDespawnAfterJumpscare;                      // 0x0640(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                         _mrMarchJumpscareTimerRate;                        // 0x0668(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMrMarchState                                 _mrMarchState;                                     // 0x066C(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_66D[0x3];                                      // 0x066D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  _tagsPreventingJumpscare;                          // 0x0670(0x0020)(Edit, NativeAccessSpecifierPrivate)
	TArray<class ADBDPlayer*>                     _authority_playersInRange;                         // 0x0690(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_6A0[0x90];                                     // 0x06A0(0x0090)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Authority_OnJumpscareFinished();
	void Authority_OnJumpscareTriggerZoneEntered(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Authority_OnJumpscareTriggerZoneExited(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Cosmetic_OnDestroyed(bool isImmediate);
	void Cosmetic_OnSpawned();
	void DBD_MrMarchDestroy();
	void DBD_MrMarchSpawn();
	void Multicast_OnPlayerJumpscared(class ADBDPlayer* Player, const struct FVector& jumpscareLocation);
	void Multicast_StartMrMarchDestruction(bool destroyImmediate);
	void OnPlayerJumpscareTriggered(class ADBDPlayer* Player, const struct FVector& Location);
	void OnRep_MrMarchState(EMrMarchState previousState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MrMarch">();
	}
	static class AMrMarch* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMrMarch>();
	}
};
static_assert(alignof(AMrMarch) == 0x000008, "Wrong alignment on AMrMarch");
static_assert(sizeof(AMrMarch) == 0x000730, "Wrong size on AMrMarch");
static_assert(offsetof(AMrMarch, _mrMarchSkeletalMesh) == 0x0005A0, "Member 'AMrMarch::_mrMarchSkeletalMesh' has a wrong offset!");
static_assert(offsetof(AMrMarch, _outlineComponent) == 0x0005A8, "Member 'AMrMarch::_outlineComponent' has a wrong offset!");
static_assert(offsetof(AMrMarch, _mrMarchCollision) == 0x0005B0, "Member 'AMrMarch::_mrMarchCollision' has a wrong offset!");
static_assert(offsetof(AMrMarch, _jumpscareTriggerZone) == 0x0005B8, "Member 'AMrMarch::_jumpscareTriggerZone' has a wrong offset!");
static_assert(offsetof(AMrMarch, _dbdNavModifierComponent) == 0x0005C0, "Member 'AMrMarch::_dbdNavModifierComponent' has a wrong offset!");
static_assert(offsetof(AMrMarch, _scareTriggerRadius) == 0x0005C8, "Member 'AMrMarch::_scareTriggerRadius' has a wrong offset!");
static_assert(offsetof(AMrMarch, _destroyableDelay) == 0x0005F0, "Member 'AMrMarch::_destroyableDelay' has a wrong offset!");
static_assert(offsetof(AMrMarch, _owningPlayerJumpScareImmuneDuration) == 0x000618, "Member 'AMrMarch::_owningPlayerJumpScareImmuneDuration' has a wrong offset!");
static_assert(offsetof(AMrMarch, _shouldDespawnAfterJumpscare) == 0x000640, "Member 'AMrMarch::_shouldDespawnAfterJumpscare' has a wrong offset!");
static_assert(offsetof(AMrMarch, _mrMarchJumpscareTimerRate) == 0x000668, "Member 'AMrMarch::_mrMarchJumpscareTimerRate' has a wrong offset!");
static_assert(offsetof(AMrMarch, _mrMarchState) == 0x00066C, "Member 'AMrMarch::_mrMarchState' has a wrong offset!");
static_assert(offsetof(AMrMarch, _tagsPreventingJumpscare) == 0x000670, "Member 'AMrMarch::_tagsPreventingJumpscare' has a wrong offset!");
static_assert(offsetof(AMrMarch, _authority_playersInRange) == 0x000690, "Member 'AMrMarch::_authority_playersInRange' has a wrong offset!");

// Class WinterEvent2023.MrMarchAnimInstance
// 0x0010 (0x0360 - 0x0350)
class UMrMarchAnimInstance final : public UAnimInstance
{
public:
	bool                                          _isDestroyed;                                      // 0x0350(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isInJumpscare;                                    // 0x0351(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isBeingDestroyed;                                 // 0x0352(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isSpawned;                                        // 0x0353(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AMrMarch>                _mrMarch;                                          // 0x0354(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_35C[0x4];                                      // 0x035C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MrMarchAnimInstance">();
	}
	static class UMrMarchAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMrMarchAnimInstance>();
	}
};
static_assert(alignof(UMrMarchAnimInstance) == 0x000010, "Wrong alignment on UMrMarchAnimInstance");
static_assert(sizeof(UMrMarchAnimInstance) == 0x000360, "Wrong size on UMrMarchAnimInstance");
static_assert(offsetof(UMrMarchAnimInstance, _isDestroyed) == 0x000350, "Member 'UMrMarchAnimInstance::_isDestroyed' has a wrong offset!");
static_assert(offsetof(UMrMarchAnimInstance, _isInJumpscare) == 0x000351, "Member 'UMrMarchAnimInstance::_isInJumpscare' has a wrong offset!");
static_assert(offsetof(UMrMarchAnimInstance, _isBeingDestroyed) == 0x000352, "Member 'UMrMarchAnimInstance::_isBeingDestroyed' has a wrong offset!");
static_assert(offsetof(UMrMarchAnimInstance, _isSpawned) == 0x000353, "Member 'UMrMarchAnimInstance::_isSpawned' has a wrong offset!");
static_assert(offsetof(UMrMarchAnimInstance, _mrMarch) == 0x000354, "Member 'UMrMarchAnimInstance::_mrMarch' has a wrong offset!");

// Class WinterEvent2023.MrMarchOutlineUpdateStrategy
// 0x0010 (0x00F0 - 0x00E0)
class UMrMarchOutlineUpdateStrategy final : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                           _outlineColor;                                     // 0x00E0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MrMarchOutlineUpdateStrategy">();
	}
	static class UMrMarchOutlineUpdateStrategy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMrMarchOutlineUpdateStrategy>();
	}
};
static_assert(alignof(UMrMarchOutlineUpdateStrategy) == 0x000008, "Wrong alignment on UMrMarchOutlineUpdateStrategy");
static_assert(sizeof(UMrMarchOutlineUpdateStrategy) == 0x0000F0, "Wrong size on UMrMarchOutlineUpdateStrategy");
static_assert(offsetof(UMrMarchOutlineUpdateStrategy, _outlineColor) == 0x0000E0, "Member 'UMrMarchOutlineUpdateStrategy::_outlineColor' has a wrong offset!");

// Class WinterEvent2023.SnowballLauncherController
// 0x00A0 (0x0340 - 0x02A0)
class ASnowballLauncherController final : public AActor
{
public:
	uint8                                         Pad_2A0[0x60];                                     // 0x02A0(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	class USnowballProvider*                      _snowballProvider;                                 // 0x0300(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USnowballProjectileLauncher*            _snowballLauncher;                                 // 0x0308(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _snowballCarryLimit;                               // 0x0310(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_338[0x8];                                      // 0x0338(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SnowballLauncherController">();
	}
	static class ASnowballLauncherController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASnowballLauncherController>();
	}
};
static_assert(alignof(ASnowballLauncherController) == 0x000008, "Wrong alignment on ASnowballLauncherController");
static_assert(sizeof(ASnowballLauncherController) == 0x000340, "Wrong size on ASnowballLauncherController");
static_assert(offsetof(ASnowballLauncherController, _snowballProvider) == 0x000300, "Member 'ASnowballLauncherController::_snowballProvider' has a wrong offset!");
static_assert(offsetof(ASnowballLauncherController, _snowballLauncher) == 0x000308, "Member 'ASnowballLauncherController::_snowballLauncher' has a wrong offset!");
static_assert(offsetof(ASnowballLauncherController, _snowballCarryLimit) == 0x000310, "Member 'ASnowballLauncherController::_snowballCarryLimit' has a wrong offset!");

// Class WinterEvent2023.SnowballPlayerComponent
// 0x01F0 (0x02A8 - 0x00B8)
class USnowballPlayerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_B8[0x60];                                      // 0x00B8(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimerObject*                           _cooldownTimer;                                    // 0x0118(0x0008)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_120[0x8];                                      // 0x0120(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ASnowballLauncherController> _snowballLauncherControllerClass;                 // 0x0128(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UThrowSnowballInteraction>  _snowballThrowingInteractionClassSurvivor;         // 0x0130(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UThrowSnowballInteraction>  _snowballThrowingInteractionClassKiller;           // 0x0138(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _cooldownDuration;                                 // 0x0140(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _snowballLaunchDelayDurationSurvivorFemale;        // 0x0168(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _snowballLaunchDelayDurationSurvivorMale;          // 0x0190(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _snowballLaunchDelayDurationKiller;                // 0x01B8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  _hideVignetteVFXTags;                              // 0x01E0(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  _hidePlayerVFXTags;                                // 0x0200(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class ASnowballLauncherController*            _snowballLauncherController;                       // 0x0220(0x0008)(Net, ZeroConstructor, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UThrowSnowballInteraction*              _snowballThrowInteraction;                         // 0x0228(0x0008)(ExportObject, Net, ZeroConstructor, InstancedReference, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_230[0x78];                                     // 0x0230(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Cosmetic_OnCamperPickedUp(class ADBDPlayer* pickedUpPlayer);
	void Cosmetic_OnCamperPickUpEndOrDropped(class ADBDPlayer* pickedUpPlayer);
	void Cosmetic_OnLocallyObservedChanged(bool IsLocallyObserved, class ADBDPlayer* OwningPlayer);
	void Cosmetic_OnPlayerDiedOrBeingKilled(class ADBDPlayer* deadPlayer);
	void Cosmetic_OnPlayerHidden(class ADBDPlayer* OwningPlayer);
	void Cosmetic_OnPlayerUnhidden(class ADBDPlayer* OwningPlayer);
	void Cosmetic_OnPlayerVFXTagAddedOrRemoved(class ADBDPlayer* Player, bool added);
	void Cosmetic_OnSnowballCollected();
	void Cosmetic_OnSnowballsDepleted(class ADBDPlayer* OwningPlayer);
	void Cosmetic_OnSnowballThrown();
	void Cosmetic_OnSnowballThrowStart(class ADBDPlayer* OwningPlayer);
	void Cosmetic_OnThrownSnowballHitCollision(class ADBDPlayer* OwningPlayer, const struct FImpactInfo& ImpactInfo);
	void Cosmetic_OnThrownSnowballHitPlayer(class ADBDPlayer* OwningPlayer, class ADBDPlayer* hitPlayer);
	void Cosmetic_OnVFXVignetteTagAddedOrRemoved(class ADBDPlayer* Player, bool added);
	void OnCamperDamageStateChanged(EHealthState oldDamageState, EHealthState newDamageState);
	void OnIntroComplete();
	void OnOwningCamperGuidedStateChanged();
	void OnRep_CooldownTimer();
	void OnRep_SnowballLauncherController();
	void OnRep_SnowballThrowInteraction();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SnowballPlayerComponent">();
	}
	static class USnowballPlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USnowballPlayerComponent>();
	}
};
static_assert(alignof(USnowballPlayerComponent) == 0x000008, "Wrong alignment on USnowballPlayerComponent");
static_assert(sizeof(USnowballPlayerComponent) == 0x0002A8, "Wrong size on USnowballPlayerComponent");
static_assert(offsetof(USnowballPlayerComponent, _cooldownTimer) == 0x000118, "Member 'USnowballPlayerComponent::_cooldownTimer' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _snowballLauncherControllerClass) == 0x000128, "Member 'USnowballPlayerComponent::_snowballLauncherControllerClass' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _snowballThrowingInteractionClassSurvivor) == 0x000130, "Member 'USnowballPlayerComponent::_snowballThrowingInteractionClassSurvivor' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _snowballThrowingInteractionClassKiller) == 0x000138, "Member 'USnowballPlayerComponent::_snowballThrowingInteractionClassKiller' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _cooldownDuration) == 0x000140, "Member 'USnowballPlayerComponent::_cooldownDuration' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _snowballLaunchDelayDurationSurvivorFemale) == 0x000168, "Member 'USnowballPlayerComponent::_snowballLaunchDelayDurationSurvivorFemale' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _snowballLaunchDelayDurationSurvivorMale) == 0x000190, "Member 'USnowballPlayerComponent::_snowballLaunchDelayDurationSurvivorMale' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _snowballLaunchDelayDurationKiller) == 0x0001B8, "Member 'USnowballPlayerComponent::_snowballLaunchDelayDurationKiller' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _hideVignetteVFXTags) == 0x0001E0, "Member 'USnowballPlayerComponent::_hideVignetteVFXTags' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _hidePlayerVFXTags) == 0x000200, "Member 'USnowballPlayerComponent::_hidePlayerVFXTags' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _snowballLauncherController) == 0x000220, "Member 'USnowballPlayerComponent::_snowballLauncherController' has a wrong offset!");
static_assert(offsetof(USnowballPlayerComponent, _snowballThrowInteraction) == 0x000228, "Member 'USnowballPlayerComponent::_snowballThrowInteraction' has a wrong offset!");

// Class WinterEvent2023.SnowballProjectileLauncher
// 0x0120 (0x02C8 - 0x01A8)
class USnowballProjectileLauncher final : public UBaseProjectileLauncher
{
public:
	struct FDBDTunableRowHandle                   _launchSpeed;                                      // 0x01A8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FRotator                               _angleOffset;                                      // 0x01D0(0x0018)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class UCurveFloat*                            _snowballPitchCurve;                               // 0x01E8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _snowballLaunchPitchMin;                           // 0x01F0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDBDTunableRowHandle                   _aimAngleOffsetPitchSurvivorFemale;                // 0x01F8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _aimAngleOffsetPitchSurvivorMale;                  // 0x0220(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _aimAngleOffsetPitchKiller;                        // 0x0248(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector                                _survivorLaunchPositionOffset;                     // 0x0270(0x0018)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                _killerLaunchPositionOffset;                       // 0x0288(0x0018)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _snowballLaunchPitchMax;                           // 0x02A0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   _characterBoneNameCamper;                          // 0x02A4(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   _characterBoneNameSlasher;                         // 0x02B0(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2BC[0xC];                                      // 0x02BC(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SnowballProjectileLauncher">();
	}
	static class USnowballProjectileLauncher* GetDefaultObj()
	{
		return GetDefaultObjImpl<USnowballProjectileLauncher>();
	}
};
static_assert(alignof(USnowballProjectileLauncher) == 0x000008, "Wrong alignment on USnowballProjectileLauncher");
static_assert(sizeof(USnowballProjectileLauncher) == 0x0002C8, "Wrong size on USnowballProjectileLauncher");
static_assert(offsetof(USnowballProjectileLauncher, _launchSpeed) == 0x0001A8, "Member 'USnowballProjectileLauncher::_launchSpeed' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _angleOffset) == 0x0001D0, "Member 'USnowballProjectileLauncher::_angleOffset' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _snowballPitchCurve) == 0x0001E8, "Member 'USnowballProjectileLauncher::_snowballPitchCurve' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _snowballLaunchPitchMin) == 0x0001F0, "Member 'USnowballProjectileLauncher::_snowballLaunchPitchMin' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _aimAngleOffsetPitchSurvivorFemale) == 0x0001F8, "Member 'USnowballProjectileLauncher::_aimAngleOffsetPitchSurvivorFemale' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _aimAngleOffsetPitchSurvivorMale) == 0x000220, "Member 'USnowballProjectileLauncher::_aimAngleOffsetPitchSurvivorMale' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _aimAngleOffsetPitchKiller) == 0x000248, "Member 'USnowballProjectileLauncher::_aimAngleOffsetPitchKiller' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _survivorLaunchPositionOffset) == 0x000270, "Member 'USnowballProjectileLauncher::_survivorLaunchPositionOffset' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _killerLaunchPositionOffset) == 0x000288, "Member 'USnowballProjectileLauncher::_killerLaunchPositionOffset' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _snowballLaunchPitchMax) == 0x0002A0, "Member 'USnowballProjectileLauncher::_snowballLaunchPitchMax' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _characterBoneNameCamper) == 0x0002A4, "Member 'USnowballProjectileLauncher::_characterBoneNameCamper' has a wrong offset!");
static_assert(offsetof(USnowballProjectileLauncher, _characterBoneNameSlasher) == 0x0002B0, "Member 'USnowballProjectileLauncher::_characterBoneNameSlasher' has a wrong offset!");

// Class WinterEvent2023.SnowballProvider
// 0x0008 (0x0120 - 0x0118)
class USnowballProvider final : public UAuthoritativeActorPoolComponent
{
public:
	uint8                                         Pad_118[0x8];                                      // 0x0118(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SnowballProvider">();
	}
	static class USnowballProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<USnowballProvider>();
	}
};
static_assert(alignof(USnowballProvider) == 0x000008, "Wrong alignment on USnowballProvider");
static_assert(sizeof(USnowballProvider) == 0x000120, "Wrong size on USnowballProvider");

// Class WinterEvent2023.Snowpile
// 0x0088 (0x0430 - 0x03A8)
class ASnowpile final : public AInteractable
{
public:
	class UStaticMeshComponent*                   _snowpileStaticMesh;                               // 0x03A8(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                    _snowpileInteractionZone;                          // 0x03B0(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractor*                            _snowpileInteractor;                               // 0x03B8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USnowpileInteraction*                   _snowpileInteractionSurvivor;                      // 0x03C0(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USnowpileInteraction*                   _snowpileInteractionKiller;                        // 0x03C8(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                   _snowpileInteractionChargeableSurvivor;            // 0x03D0(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                   _snowpileInteractionChargeableKiller;              // 0x03D8(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _snowpileInteractionSecondsToChargeSurvivor;       // 0x03E0(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _snowpileInteractionSecondsToChargeKiller;         // 0x0408(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

public:
	void Cosmetic_OnInteractionCancelled(class ADBDPlayer* interactingPlayer);
	void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
	void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Snowpile">();
	}
	static class ASnowpile* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASnowpile>();
	}
};
static_assert(alignof(ASnowpile) == 0x000008, "Wrong alignment on ASnowpile");
static_assert(sizeof(ASnowpile) == 0x000430, "Wrong size on ASnowpile");
static_assert(offsetof(ASnowpile, _snowpileStaticMesh) == 0x0003A8, "Member 'ASnowpile::_snowpileStaticMesh' has a wrong offset!");
static_assert(offsetof(ASnowpile, _snowpileInteractionZone) == 0x0003B0, "Member 'ASnowpile::_snowpileInteractionZone' has a wrong offset!");
static_assert(offsetof(ASnowpile, _snowpileInteractor) == 0x0003B8, "Member 'ASnowpile::_snowpileInteractor' has a wrong offset!");
static_assert(offsetof(ASnowpile, _snowpileInteractionSurvivor) == 0x0003C0, "Member 'ASnowpile::_snowpileInteractionSurvivor' has a wrong offset!");
static_assert(offsetof(ASnowpile, _snowpileInteractionKiller) == 0x0003C8, "Member 'ASnowpile::_snowpileInteractionKiller' has a wrong offset!");
static_assert(offsetof(ASnowpile, _snowpileInteractionChargeableSurvivor) == 0x0003D0, "Member 'ASnowpile::_snowpileInteractionChargeableSurvivor' has a wrong offset!");
static_assert(offsetof(ASnowpile, _snowpileInteractionChargeableKiller) == 0x0003D8, "Member 'ASnowpile::_snowpileInteractionChargeableKiller' has a wrong offset!");
static_assert(offsetof(ASnowpile, _snowpileInteractionSecondsToChargeSurvivor) == 0x0003E0, "Member 'ASnowpile::_snowpileInteractionSecondsToChargeSurvivor' has a wrong offset!");
static_assert(offsetof(ASnowpile, _snowpileInteractionSecondsToChargeKiller) == 0x000408, "Member 'ASnowpile::_snowpileInteractionSecondsToChargeKiller' has a wrong offset!");

// Class WinterEvent2023.SnowpileInteraction
// 0x0000 (0x08C0 - 0x08C0)
class USnowpileInteraction final : public UChargeableInteractionDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SnowpileInteraction">();
	}
	static class USnowpileInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<USnowpileInteraction>();
	}
};
static_assert(alignof(USnowpileInteraction) == 0x000010, "Wrong alignment on USnowpileInteraction");
static_assert(sizeof(USnowpileInteraction) == 0x0008C0, "Wrong size on USnowpileInteraction");

// Class WinterEvent2023.ThrowSnowballInteraction
// 0x0030 (0x07A0 - 0x0770)
class UThrowSnowballInteraction final : public UInteractionDefinition
{
public:
	TArray<struct FGameplayTag>                   _preventativeStateTags;                            // 0x0768(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_778[0x28];                                     // 0x0778(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ThrowSnowballInteraction">();
	}
	static class UThrowSnowballInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThrowSnowballInteraction>();
	}
};
static_assert(alignof(UThrowSnowballInteraction) == 0x000010, "Wrong alignment on UThrowSnowballInteraction");
static_assert(sizeof(UThrowSnowballInteraction) == 0x0007A0, "Wrong size on UThrowSnowballInteraction");
static_assert(offsetof(UThrowSnowballInteraction, _preventativeStateTags) == 0x000768, "Member 'UThrowSnowballInteraction::_preventativeStateTags' has a wrong offset!");

// Class WinterEvent2023.ThrowStandingSurvivorSubAnimInstance
// 0x0010 (0x05F0 - 0x05E0)
class UThrowStandingSurvivorSubAnimInstance final : public UBaseSurvivorAnimInstance
{
public:
	bool                                          _isIdle;                                           // 0x05E0(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isThrowing;                                       // 0x05E1(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isInjured;                                        // 0x05E2(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isCrouching;                                      // 0x05E3(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _pitch;                                            // 0x05E4(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _yaw;                                              // 0x05E8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5EC[0x4];                                      // 0x05EC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ThrowStandingSurvivorSubAnimInstance">();
	}
	static class UThrowStandingSurvivorSubAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThrowStandingSurvivorSubAnimInstance>();
	}
};
static_assert(alignof(UThrowStandingSurvivorSubAnimInstance) == 0x000010, "Wrong alignment on UThrowStandingSurvivorSubAnimInstance");
static_assert(sizeof(UThrowStandingSurvivorSubAnimInstance) == 0x0005F0, "Wrong size on UThrowStandingSurvivorSubAnimInstance");
static_assert(offsetof(UThrowStandingSurvivorSubAnimInstance, _isIdle) == 0x0005E0, "Member 'UThrowStandingSurvivorSubAnimInstance::_isIdle' has a wrong offset!");
static_assert(offsetof(UThrowStandingSurvivorSubAnimInstance, _isThrowing) == 0x0005E1, "Member 'UThrowStandingSurvivorSubAnimInstance::_isThrowing' has a wrong offset!");
static_assert(offsetof(UThrowStandingSurvivorSubAnimInstance, _isInjured) == 0x0005E2, "Member 'UThrowStandingSurvivorSubAnimInstance::_isInjured' has a wrong offset!");
static_assert(offsetof(UThrowStandingSurvivorSubAnimInstance, _isCrouching) == 0x0005E3, "Member 'UThrowStandingSurvivorSubAnimInstance::_isCrouching' has a wrong offset!");
static_assert(offsetof(UThrowStandingSurvivorSubAnimInstance, _pitch) == 0x0005E4, "Member 'UThrowStandingSurvivorSubAnimInstance::_pitch' has a wrong offset!");
static_assert(offsetof(UThrowStandingSurvivorSubAnimInstance, _yaw) == 0x0005E8, "Member 'UThrowStandingSurvivorSubAnimInstance::_yaw' has a wrong offset!");

}

