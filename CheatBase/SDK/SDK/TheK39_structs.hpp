﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheK39

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum TheK39.EK39PowerupModeStatus
// NumValues: 0x0004
enum class EK39PowerupModeStatus : uint8
{
	Disabled                                 = 0,
	Enabled                                  = 1,
	Withdrawal                               = 2,
	EK39PowerupModeStatus_MAX                = 3,
};

// Enum TheK39.EK39TentacleSwingResult
// NumValues: 0x0006
enum class EK39TentacleSwingResult : uint8
{
	NoResult                                 = 0,
	NoSurface                                = 1,
	InvalidSurface                           = 2,
	Swing                                    = 3,
	GrabSurvivor                             = 4,
	EK39TentacleSwingResult_MAX              = 5,
};

// ScriptStruct TheK39.K39TentacleSkin
// 0x0070 (0x0070 - 0x0000)
struct FK39TentacleSkin final
{
public:
	TSoftObjectPtr<class USkeletalMesh>           Skeletal;                                          // 0x0000(0x0038)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   Animation;                                         // 0x0038(0x0038)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FK39TentacleSkin) == 0x000008, "Wrong alignment on FK39TentacleSkin");
static_assert(sizeof(FK39TentacleSkin) == 0x000070, "Wrong size on FK39TentacleSkin");
static_assert(offsetof(FK39TentacleSkin, Skeletal) == 0x000000, "Member 'FK39TentacleSkin::Skeletal' has a wrong offset!");
static_assert(offsetof(FK39TentacleSkin, Animation) == 0x000038, "Member 'FK39TentacleSkin::Animation' has a wrong offset!");

// ScriptStruct TheK39.K39TentacleCosmeticSettings
// 0x0028 (0x0028 - 0x0000)
struct FK39TentacleCosmeticSettings final
{
public:
	float                                         Progress;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TentacleLocation;                                  // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseBottomTentacles;                                // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FK39TentacleCosmeticSettings) == 0x000008, "Wrong alignment on FK39TentacleCosmeticSettings");
static_assert(sizeof(FK39TentacleCosmeticSettings) == 0x000028, "Wrong size on FK39TentacleCosmeticSettings");
static_assert(offsetof(FK39TentacleCosmeticSettings, Progress) == 0x000000, "Member 'FK39TentacleCosmeticSettings::Progress' has a wrong offset!");
static_assert(offsetof(FK39TentacleCosmeticSettings, TentacleLocation) == 0x000008, "Member 'FK39TentacleCosmeticSettings::TentacleLocation' has a wrong offset!");
static_assert(offsetof(FK39TentacleCosmeticSettings, UseBottomTentacles) == 0x000020, "Member 'FK39TentacleCosmeticSettings::UseBottomTentacles' has a wrong offset!");

// ScriptStruct TheK39.TentacleSwingCooldownSettings
// 0x0010 (0x0010 - 0x0000)
struct FTentacleSwingCooldownSettings final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            SpeedCurve;                                        // 0x0008(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTentacleSwingCooldownSettings) == 0x000008, "Wrong alignment on FTentacleSwingCooldownSettings");
static_assert(sizeof(FTentacleSwingCooldownSettings) == 0x000010, "Wrong size on FTentacleSwingCooldownSettings");
static_assert(offsetof(FTentacleSwingCooldownSettings, Duration) == 0x000000, "Member 'FTentacleSwingCooldownSettings::Duration' has a wrong offset!");
static_assert(offsetof(FTentacleSwingCooldownSettings, SpeedCurve) == 0x000008, "Member 'FTentacleSwingCooldownSettings::SpeedCurve' has a wrong offset!");

// ScriptStruct TheK39.K39TentacleTargetIndicatorSettings
// 0x0038 (0x0038 - 0x0000)
struct FK39TentacleTargetIndicatorSettings final
{
public:
	struct FVector                                targetLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          IsVisible;                                         // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInValidLocationForTentacle;                      // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsTargetingSurvivor;                               // 0x0032(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsNonDamagingSwing;                                // 0x0033(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FK39TentacleTargetIndicatorSettings) == 0x000008, "Wrong alignment on FK39TentacleTargetIndicatorSettings");
static_assert(sizeof(FK39TentacleTargetIndicatorSettings) == 0x000038, "Wrong size on FK39TentacleTargetIndicatorSettings");
static_assert(offsetof(FK39TentacleTargetIndicatorSettings, targetLocation) == 0x000000, "Member 'FK39TentacleTargetIndicatorSettings::targetLocation' has a wrong offset!");
static_assert(offsetof(FK39TentacleTargetIndicatorSettings, Rotation) == 0x000018, "Member 'FK39TentacleTargetIndicatorSettings::Rotation' has a wrong offset!");
static_assert(offsetof(FK39TentacleTargetIndicatorSettings, IsVisible) == 0x000030, "Member 'FK39TentacleTargetIndicatorSettings::IsVisible' has a wrong offset!");
static_assert(offsetof(FK39TentacleTargetIndicatorSettings, IsInValidLocationForTentacle) == 0x000031, "Member 'FK39TentacleTargetIndicatorSettings::IsInValidLocationForTentacle' has a wrong offset!");
static_assert(offsetof(FK39TentacleTargetIndicatorSettings, IsTargetingSurvivor) == 0x000032, "Member 'FK39TentacleTargetIndicatorSettings::IsTargetingSurvivor' has a wrong offset!");
static_assert(offsetof(FK39TentacleTargetIndicatorSettings, IsNonDamagingSwing) == 0x000033, "Member 'FK39TentacleTargetIndicatorSettings::IsNonDamagingSwing' has a wrong offset!");

// ScriptStruct TheK39.K39TentacleSwingInputData
// 0x0048 (0x0048 - 0x0000)
struct FK39TentacleSwingInputData final
{
public:
	struct FVector                                KillerLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                IndicatorLocation;                                 // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CameraDirection;                                   // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FK39TentacleSwingInputData) == 0x000008, "Wrong alignment on FK39TentacleSwingInputData");
static_assert(sizeof(FK39TentacleSwingInputData) == 0x000048, "Wrong size on FK39TentacleSwingInputData");
static_assert(offsetof(FK39TentacleSwingInputData, KillerLocation) == 0x000000, "Member 'FK39TentacleSwingInputData::KillerLocation' has a wrong offset!");
static_assert(offsetof(FK39TentacleSwingInputData, IndicatorLocation) == 0x000018, "Member 'FK39TentacleSwingInputData::IndicatorLocation' has a wrong offset!");
static_assert(offsetof(FK39TentacleSwingInputData, CameraDirection) == 0x000030, "Member 'FK39TentacleSwingInputData::CameraDirection' has a wrong offset!");

// ScriptStruct TheK39.K39TentacleSwingData
// 0x0070 (0x0070 - 0x0000)
struct FK39TentacleSwingData final
{
public:
	struct FVector                                CollisionPoint;                                    // 0x0000(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Destination;                                       // 0x0018(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               SpawnForwardRotation;                              // 0x0030(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                SurfaceNormal;                                     // 0x0048(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASurvivor*                              TargetSurvivor;                                    // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                      TargetPhysicalMaterial;                            // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FK39TentacleSwingData) == 0x000008, "Wrong alignment on FK39TentacleSwingData");
static_assert(sizeof(FK39TentacleSwingData) == 0x000070, "Wrong size on FK39TentacleSwingData");
static_assert(offsetof(FK39TentacleSwingData, CollisionPoint) == 0x000000, "Member 'FK39TentacleSwingData::CollisionPoint' has a wrong offset!");
static_assert(offsetof(FK39TentacleSwingData, Destination) == 0x000018, "Member 'FK39TentacleSwingData::Destination' has a wrong offset!");
static_assert(offsetof(FK39TentacleSwingData, SpawnForwardRotation) == 0x000030, "Member 'FK39TentacleSwingData::SpawnForwardRotation' has a wrong offset!");
static_assert(offsetof(FK39TentacleSwingData, SurfaceNormal) == 0x000048, "Member 'FK39TentacleSwingData::SurfaceNormal' has a wrong offset!");
static_assert(offsetof(FK39TentacleSwingData, TargetSurvivor) == 0x000060, "Member 'FK39TentacleSwingData::TargetSurvivor' has a wrong offset!");
static_assert(offsetof(FK39TentacleSwingData, TargetPhysicalMaterial) == 0x000068, "Member 'FK39TentacleSwingData::TargetPhysicalMaterial' has a wrong offset!");

}

