﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheCannibal

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"
#include "GameplayTagUtilities_structs.hpp"
#include "DBDCompetence_classes.hpp"
#include "StatSystem_structs.hpp"
#include "TheHillbilly_classes.hpp"
#include "Engine_classes.hpp"
#include "DataTableUtilities_structs.hpp"
#include "DBDAttack_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class TheCannibal.BBQAndChili
// 0x0020 (0x0480 - 0x0460)
class UBBQAndChili final : public UPerk
{
public:
	float                                         _auraRevealDuration;                               // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _minDistanceToHookedPlayerByLevel[0x3];            // 0x0464(0x0004)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _survivorImposedEffectClass;                       // 0x0470(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_478[0x8];                                      // 0x0478(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetMinDistanceToKillerByLevel(int32 Level);

	float GetAuraRevealDuration() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BBQAndChili">();
	}
	static class UBBQAndChili* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBQAndChili>();
	}
};
static_assert(alignof(UBBQAndChili) == 0x000008, "Wrong alignment on UBBQAndChili");
static_assert(sizeof(UBBQAndChili) == 0x000480, "Wrong size on UBBQAndChili");
static_assert(offsetof(UBBQAndChili, _auraRevealDuration) == 0x000460, "Member 'UBBQAndChili::_auraRevealDuration' has a wrong offset!");
static_assert(offsetof(UBBQAndChili, _minDistanceToHookedPlayerByLevel) == 0x000464, "Member 'UBBQAndChili::_minDistanceToHookedPlayerByLevel' has a wrong offset!");
static_assert(offsetof(UBBQAndChili, _survivorImposedEffectClass) == 0x000470, "Member 'UBBQAndChili::_survivorImposedEffectClass' has a wrong offset!");

// Class TheCannibal.CannibalChainsawHitEventAddon
// 0x0000 (0x0310 - 0x0310)
class UCannibalChainsawHitEventAddon : public UOnEventBaseAddon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawHitEventAddon">();
	}
	static class UCannibalChainsawHitEventAddon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawHitEventAddon>();
	}
};
static_assert(alignof(UCannibalChainsawHitEventAddon) == 0x000008, "Wrong alignment on UCannibalChainsawHitEventAddon");
static_assert(sizeof(UCannibalChainsawHitEventAddon) == 0x000310, "Wrong size on UCannibalChainsawHitEventAddon");

// Class TheCannibal.CannibalAddonBegrimedChains
// 0x0000 (0x0310 - 0x0310)
class UCannibalAddonBegrimedChains final : public UCannibalChainsawHitEventAddon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalAddonBegrimedChains">();
	}
	static class UCannibalAddonBegrimedChains* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalAddonBegrimedChains>();
	}
};
static_assert(alignof(UCannibalAddonBegrimedChains) == 0x000008, "Wrong alignment on UCannibalAddonBegrimedChains");
static_assert(sizeof(UCannibalAddonBegrimedChains) == 0x000310, "Wrong size on UCannibalAddonBegrimedChains");

// Class TheCannibal.CannibalAnalyticsComponent
// 0x0020 (0x0118 - 0x00F8)
class UCannibalAnalyticsComponent final : public UChainsawAnalyticsBaseComponent
{
public:
	uint8                                         Pad_F8[0x20];                                      // 0x00F8(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalAnalyticsComponent">();
	}
	static class UCannibalAnalyticsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalAnalyticsComponent>();
	}
};
static_assert(alignof(UCannibalAnalyticsComponent) == 0x000008, "Wrong alignment on UCannibalAnalyticsComponent");
static_assert(sizeof(UCannibalAnalyticsComponent) == 0x000118, "Wrong size on UCannibalAnalyticsComponent");

// Class TheCannibal.CannibalChainsawAttack
// 0x00D0 (0x0620 - 0x0550)
class UCannibalChainsawAttack final : public UBaseChainsawAttack
{
public:
	uint8                                         Pad_548[0x10];                                     // 0x0548(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTagStateBool                          _isInTantrum;                                      // 0x0558(0x0048)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_5A0[0x24];                                     // 0x05A0(0x0024)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _immuneToSuccessiveChainsawHitsDuration;           // 0x05C4(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class ADBDPlayer*, float>                _lastChainsawHitTimes;                             // 0x05C8(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_618[0x8];                                      // 0x0618(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawAttack">();
	}
	static class UCannibalChainsawAttack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawAttack>();
	}
};
static_assert(alignof(UCannibalChainsawAttack) == 0x000010, "Wrong alignment on UCannibalChainsawAttack");
static_assert(sizeof(UCannibalChainsawAttack) == 0x000620, "Wrong size on UCannibalChainsawAttack");
static_assert(offsetof(UCannibalChainsawAttack, _isInTantrum) == 0x000558, "Member 'UCannibalChainsawAttack::_isInTantrum' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawAttack, _immuneToSuccessiveChainsawHitsDuration) == 0x0005C4, "Member 'UCannibalChainsawAttack::_immuneToSuccessiveChainsawHitsDuration' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawAttack, _lastChainsawHitTimes) == 0x0005C8, "Member 'UCannibalChainsawAttack::_lastChainsawHitTimes' has a wrong offset!");

// Class TheCannibal.CannibalChainsawAttackOpenSubstate
// 0x0018 (0x0180 - 0x0168)
class UCannibalChainsawAttackOpenSubstate final : public UBaseChainsawAttackOpenSubstate
{
public:
	uint8                                         Pad_168[0x18];                                     // 0x0168(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawAttackOpenSubstate">();
	}
	static class UCannibalChainsawAttackOpenSubstate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawAttackOpenSubstate>();
	}
};
static_assert(alignof(UCannibalChainsawAttackOpenSubstate) == 0x000008, "Wrong alignment on UCannibalChainsawAttackOpenSubstate");
static_assert(sizeof(UCannibalChainsawAttackOpenSubstate) == 0x000180, "Wrong size on UCannibalChainsawAttackOpenSubstate");

// Class TheCannibal.CannibalChainsawAttackHittingSubstate
// 0x0000 (0x01A0 - 0x01A0)
class UCannibalChainsawAttackHittingSubstate final : public UPounceAttackHittingSubstate
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawAttackHittingSubstate">();
	}
	static class UCannibalChainsawAttackHittingSubstate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawAttackHittingSubstate>();
	}
};
static_assert(alignof(UCannibalChainsawAttackHittingSubstate) == 0x000008, "Wrong alignment on UCannibalChainsawAttackHittingSubstate");
static_assert(sizeof(UCannibalChainsawAttackHittingSubstate) == 0x0001A0, "Wrong size on UCannibalChainsawAttackHittingSubstate");

// Class TheCannibal.CannibalChainsawAttackSuccessSubstate
// 0x0000 (0x0118 - 0x0118)
class UCannibalChainsawAttackSuccessSubstate final : public UBaseChainsawAttackSuccessSubstate
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawAttackSuccessSubstate">();
	}
	static class UCannibalChainsawAttackSuccessSubstate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawAttackSuccessSubstate>();
	}
};
static_assert(alignof(UCannibalChainsawAttackSuccessSubstate) == 0x000008, "Wrong alignment on UCannibalChainsawAttackSuccessSubstate");
static_assert(sizeof(UCannibalChainsawAttackSuccessSubstate) == 0x000118, "Wrong size on UCannibalChainsawAttackSuccessSubstate");

// Class TheCannibal.CannibalChainsawAttackMissSubstate
// 0x0018 (0x0138 - 0x0120)
class UCannibalChainsawAttackMissSubstate final : public UBaseChainsawAttackMissSubstate
{
public:
	uint8                                         Pad_120[0x18];                                     // 0x0120(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawAttackMissSubstate">();
	}
	static class UCannibalChainsawAttackMissSubstate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawAttackMissSubstate>();
	}
};
static_assert(alignof(UCannibalChainsawAttackMissSubstate) == 0x000008, "Wrong alignment on UCannibalChainsawAttackMissSubstate");
static_assert(sizeof(UCannibalChainsawAttackMissSubstate) == 0x000138, "Wrong size on UCannibalChainsawAttackMissSubstate");

// Class TheCannibal.CannibalChainsawAttackObstructSubstate
// 0x0078 (0x01A0 - 0x0128)
class UCannibalChainsawAttackObstructSubstate final : public UBaseChainsawAttackObstructSubstate
{
public:
	struct FTagStateBool                          _isInTantrum;                                      // 0x0128(0x0048)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_170[0x30];                                     // 0x0170(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawAttackObstructSubstate">();
	}
	static class UCannibalChainsawAttackObstructSubstate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawAttackObstructSubstate>();
	}
};
static_assert(alignof(UCannibalChainsawAttackObstructSubstate) == 0x000008, "Wrong alignment on UCannibalChainsawAttackObstructSubstate");
static_assert(sizeof(UCannibalChainsawAttackObstructSubstate) == 0x0001A0, "Wrong size on UCannibalChainsawAttackObstructSubstate");
static_assert(offsetof(UCannibalChainsawAttackObstructSubstate, _isInTantrum) == 0x000128, "Member 'UCannibalChainsawAttackObstructSubstate::_isInTantrum' has a wrong offset!");

// Class TheCannibal.CannibalChainsawPowerComponent
// 0x0608 (0x06C0 - 0x00B8)
class UCannibalChainsawPowerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UPowerChargeComponent*                  _chainsawPowerCharge;                              // 0x00C0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                  _chainsawPowerDischarge;                           // 0x00C8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                  _tantrumPowerCharge;                               // 0x00D0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_D8[0xC8];                                      // 0x00D8(0x00C8)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTagStateBool                          _isInTantrum;                                      // 0x01A0(0x0048)(Net, Transient, NativeAccessSpecifierPrivate)
	int32                                         _numPowerCharges;                                  // 0x01E8(0x0004)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         _numPowerChargesConsumed;                          // 0x01EC(0x0004)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F0[0x8];                                      // 0x01F0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTunableStat                           _chainsawDashDuration;                             // 0x01F8(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _chainsawPowerMaxCharge;                           // 0x0278(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _chainsawChargeRate;                               // 0x02F8(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _chainsawMaxNumberOfCharges;                       // 0x0378(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _chainsawCooldownIncreaseRate;                     // 0x03F8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _chainsawCooldownDuration;                         // 0x0420(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _chainsawMaxCooldownDuration;                      // 0x04A0(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _tantrumChargeRate;                                // 0x04C8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _tantrumDischargeRate;                             // 0x04F0(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _tantrumMaxCharge;                                 // 0x0518(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _tantrumDurationIncreaseRate;                      // 0x0598(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _tantrumDuration;                                  // 0x05C0(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _tantrumMaxDuration;                               // 0x0640(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

public:
	void Authority_OnChainsawPowerChargeFull();
	void Local_OnTantrumPowerChargeFull();
	void Multicast_OnTantrumPowerChargeFull();
	void OnLevelReadyToPlay();
	void OnRep_NumPowerCharges(int32 previousNumPowerCharges);
	void Server_OnTantrumPowerChargeFull();

	int32 GetNumberOfChainsawPowerCharges() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawPowerComponent">();
	}
	static class UCannibalChainsawPowerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawPowerComponent>();
	}
};
static_assert(alignof(UCannibalChainsawPowerComponent) == 0x000008, "Wrong alignment on UCannibalChainsawPowerComponent");
static_assert(sizeof(UCannibalChainsawPowerComponent) == 0x0006C0, "Wrong size on UCannibalChainsawPowerComponent");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawPowerCharge) == 0x0000C0, "Member 'UCannibalChainsawPowerComponent::_chainsawPowerCharge' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawPowerDischarge) == 0x0000C8, "Member 'UCannibalChainsawPowerComponent::_chainsawPowerDischarge' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _tantrumPowerCharge) == 0x0000D0, "Member 'UCannibalChainsawPowerComponent::_tantrumPowerCharge' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _isInTantrum) == 0x0001A0, "Member 'UCannibalChainsawPowerComponent::_isInTantrum' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _numPowerCharges) == 0x0001E8, "Member 'UCannibalChainsawPowerComponent::_numPowerCharges' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _numPowerChargesConsumed) == 0x0001EC, "Member 'UCannibalChainsawPowerComponent::_numPowerChargesConsumed' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawDashDuration) == 0x0001F8, "Member 'UCannibalChainsawPowerComponent::_chainsawDashDuration' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawPowerMaxCharge) == 0x000278, "Member 'UCannibalChainsawPowerComponent::_chainsawPowerMaxCharge' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawChargeRate) == 0x0002F8, "Member 'UCannibalChainsawPowerComponent::_chainsawChargeRate' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawMaxNumberOfCharges) == 0x000378, "Member 'UCannibalChainsawPowerComponent::_chainsawMaxNumberOfCharges' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawCooldownIncreaseRate) == 0x0003F8, "Member 'UCannibalChainsawPowerComponent::_chainsawCooldownIncreaseRate' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawCooldownDuration) == 0x000420, "Member 'UCannibalChainsawPowerComponent::_chainsawCooldownDuration' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _chainsawMaxCooldownDuration) == 0x0004A0, "Member 'UCannibalChainsawPowerComponent::_chainsawMaxCooldownDuration' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _tantrumChargeRate) == 0x0004C8, "Member 'UCannibalChainsawPowerComponent::_tantrumChargeRate' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _tantrumDischargeRate) == 0x0004F0, "Member 'UCannibalChainsawPowerComponent::_tantrumDischargeRate' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _tantrumMaxCharge) == 0x000518, "Member 'UCannibalChainsawPowerComponent::_tantrumMaxCharge' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _tantrumDurationIncreaseRate) == 0x000598, "Member 'UCannibalChainsawPowerComponent::_tantrumDurationIncreaseRate' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _tantrumDuration) == 0x0005C0, "Member 'UCannibalChainsawPowerComponent::_tantrumDuration' has a wrong offset!");
static_assert(offsetof(UCannibalChainsawPowerComponent, _tantrumMaxDuration) == 0x000640, "Member 'UCannibalChainsawPowerComponent::_tantrumMaxDuration' has a wrong offset!");

// Class TheCannibal.CannibalChainsawRevInteraction
// 0x00B0 (0x09F0 - 0x0940)
class UCannibalChainsawRevInteraction final : public UChainsawRevInteraction
{
public:
	uint8                                         Pad_940[0xB0];                                     // 0x0940(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalChainsawRevInteraction">();
	}
	static class UCannibalChainsawRevInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalChainsawRevInteraction>();
	}
};
static_assert(alignof(UCannibalChainsawRevInteraction) == 0x000010, "Wrong alignment on UCannibalChainsawRevInteraction");
static_assert(sizeof(UCannibalChainsawRevInteraction) == 0x0009F0, "Wrong size on UCannibalChainsawRevInteraction");

// Class TheCannibal.CannibalPowerPresentationItemProgressComponent
// 0x0008 (0x00C8 - 0x00C0)
class UCannibalPowerPresentationItemProgressComponent final : public UPresentationItemProgressComponent
{
public:
	class UCannibalChainsawPowerComponent*        _cannibalPowerChainsawComponent;                   // 0x00C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void SetCannibalChainsawPowerComponent(class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CannibalPowerPresentationItemProgressComponent">();
	}
	static class UCannibalPowerPresentationItemProgressComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCannibalPowerPresentationItemProgressComponent>();
	}
};
static_assert(alignof(UCannibalPowerPresentationItemProgressComponent) == 0x000008, "Wrong alignment on UCannibalPowerPresentationItemProgressComponent");
static_assert(sizeof(UCannibalPowerPresentationItemProgressComponent) == 0x0000C8, "Wrong size on UCannibalPowerPresentationItemProgressComponent");
static_assert(offsetof(UCannibalPowerPresentationItemProgressComponent, _cannibalPowerChainsawComponent) == 0x0000C0, "Member 'UCannibalPowerPresentationItemProgressComponent::_cannibalPowerChainsawComponent' has a wrong offset!");

// Class TheCannibal.CarburetorTuningGuideAddon
// 0x0018 (0x0328 - 0x0310)
class UCarburetorTuningGuideAddon final : public UOnEventBaseAddon
{
public:
	uint8                                         Pad_310[0x18];                                     // 0x0310(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CarburetorTuningGuideAddon">();
	}
	static class UCarburetorTuningGuideAddon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCarburetorTuningGuideAddon>();
	}
};
static_assert(alignof(UCarburetorTuningGuideAddon) == 0x000008, "Wrong alignment on UCarburetorTuningGuideAddon");
static_assert(sizeof(UCarburetorTuningGuideAddon) == 0x000328, "Wrong size on UCarburetorTuningGuideAddon");

// Class TheCannibal.FranklinsDemise
// 0x0068 (0x04C8 - 0x0460)
class UFranklinsDemise final : public UPerk
{
public:
	float                                         _timeBeforeItemIsConsumed[0x3];                    // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _dropItemLocationSphereTestRadius;                 // 0x046C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _dropItemLocationSphereTestBuffer;                 // 0x0470(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _dropItemLocationZOffset;                          // 0x0474(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class ASurvivor*, struct FVector>        _survivorsPreTravelLocations;                      // 0x0478(0x0050)(Transient, NativeAccessSpecifierPrivate)

public:
	void BP_OnPlayerHitCosmetic(class ASurvivor* hitPlayer, class ACollectable* itemToDrop);
	void Multicast_DroppedEvent(class ASurvivor* hitPlayer, class ACollectable* itemToDrop);

	float GetTimeBeforeItemIsConsumedAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FranklinsDemise">();
	}
	static class UFranklinsDemise* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFranklinsDemise>();
	}
};
static_assert(alignof(UFranklinsDemise) == 0x000008, "Wrong alignment on UFranklinsDemise");
static_assert(sizeof(UFranklinsDemise) == 0x0004C8, "Wrong size on UFranklinsDemise");
static_assert(offsetof(UFranklinsDemise, _timeBeforeItemIsConsumed) == 0x000460, "Member 'UFranklinsDemise::_timeBeforeItemIsConsumed' has a wrong offset!");
static_assert(offsetof(UFranklinsDemise, _dropItemLocationSphereTestRadius) == 0x00046C, "Member 'UFranklinsDemise::_dropItemLocationSphereTestRadius' has a wrong offset!");
static_assert(offsetof(UFranklinsDemise, _dropItemLocationSphereTestBuffer) == 0x000470, "Member 'UFranklinsDemise::_dropItemLocationSphereTestBuffer' has a wrong offset!");
static_assert(offsetof(UFranklinsDemise, _dropItemLocationZOffset) == 0x000474, "Member 'UFranklinsDemise::_dropItemLocationZOffset' has a wrong offset!");
static_assert(offsetof(UFranklinsDemise, _survivorsPreTravelLocations) == 0x000478, "Member 'UFranklinsDemise::_survivorsPreTravelLocations' has a wrong offset!");

// Class TheCannibal.IridescentLeatherAddon
// 0x0018 (0x0328 - 0x0310)
class UIridescentLeatherAddon final : public UCannibalChainsawHitEventAddon
{
public:
	uint8                                         Pad_310[0x18];                                     // 0x0310(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IridescentLeatherAddon">();
	}
	static class UIridescentLeatherAddon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIridescentLeatherAddon>();
	}
};
static_assert(alignof(UIridescentLeatherAddon) == 0x000008, "Wrong alignment on UIridescentLeatherAddon");
static_assert(sizeof(UIridescentLeatherAddon) == 0x000328, "Wrong size on UIridescentLeatherAddon");

// Class TheCannibal.Knockout
// 0x00E0 (0x0540 - 0x0460)
class UKnockout final : public UPerk
{
public:
	TSubclassOf<class UStatusEffect>              _hinderedEffect;                                   // 0x0460(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _hinderedPercentage[0x3];                          // 0x0468(0x0004)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _hinderedDuration[0x3];                            // 0x0474(0x0004)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _triggerDistanceThreshold[0x3];                    // 0x0480(0x0004)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _triggerTimeThreshold[0x3];                        // 0x048C(0x0004)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_498[0xA8];                                     // 0x0498(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Knockout">();
	}
	static class UKnockout* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKnockout>();
	}
};
static_assert(alignof(UKnockout) == 0x000008, "Wrong alignment on UKnockout");
static_assert(sizeof(UKnockout) == 0x000540, "Wrong size on UKnockout");
static_assert(offsetof(UKnockout, _hinderedEffect) == 0x000460, "Member 'UKnockout::_hinderedEffect' has a wrong offset!");
static_assert(offsetof(UKnockout, _hinderedPercentage) == 0x000468, "Member 'UKnockout::_hinderedPercentage' has a wrong offset!");
static_assert(offsetof(UKnockout, _hinderedDuration) == 0x000474, "Member 'UKnockout::_hinderedDuration' has a wrong offset!");
static_assert(offsetof(UKnockout, _triggerDistanceThreshold) == 0x000480, "Member 'UKnockout::_triggerDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UKnockout, _triggerTimeThreshold) == 0x00048C, "Member 'UKnockout::_triggerTimeThreshold' has a wrong offset!");

// Class TheCannibal.KnockOutSlowAndBlindEffect
// 0x0008 (0x03A0 - 0x0398)
class UKnockOutSlowAndBlindEffect final : public UStatusEffect
{
public:
	uint8                                         Pad_398[0x8];                                      // 0x0398(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnLocallyObservedChanged(class ADBDPlayer* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KnockOutSlowAndBlindEffect">();
	}
	static class UKnockOutSlowAndBlindEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKnockOutSlowAndBlindEffect>();
	}
};
static_assert(alignof(UKnockOutSlowAndBlindEffect) == 0x000008, "Wrong alignment on UKnockOutSlowAndBlindEffect");
static_assert(sizeof(UKnockOutSlowAndBlindEffect) == 0x0003A0, "Wrong size on UKnockOutSlowAndBlindEffect");

// Class TheCannibal.ShopLubricantAddon
// 0x0010 (0x0320 - 0x0310)
class UShopLubricantAddon final : public UOnEventBaseAddon
{
public:
	float                                         _auraBlockingDuration;                             // 0x0310(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _auraVisibleDistance;                              // 0x0314(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UStatusEffect>              _hiddenFromOtherSurvivorsWhileDyingEffectClass;    // 0x0318(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ShopLubricantAddon">();
	}
	static class UShopLubricantAddon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopLubricantAddon>();
	}
};
static_assert(alignof(UShopLubricantAddon) == 0x000008, "Wrong alignment on UShopLubricantAddon");
static_assert(sizeof(UShopLubricantAddon) == 0x000320, "Wrong size on UShopLubricantAddon");
static_assert(offsetof(UShopLubricantAddon, _auraBlockingDuration) == 0x000310, "Member 'UShopLubricantAddon::_auraBlockingDuration' has a wrong offset!");
static_assert(offsetof(UShopLubricantAddon, _auraVisibleDistance) == 0x000314, "Member 'UShopLubricantAddon::_auraVisibleDistance' has a wrong offset!");
static_assert(offsetof(UShopLubricantAddon, _hiddenFromOtherSurvivorsWhileDyingEffectClass) == 0x000318, "Member 'UShopLubricantAddon::_hiddenFromOtherSurvivorsWhileDyingEffectClass' has a wrong offset!");

}

