﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GraphicsExtensions

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GraphicsExtensions_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX
// 0x0004 (0x0004 - 0x0000)
struct GMAdaptiveShadowMapControllerComponent_GetTileCountX final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GMAdaptiveShadowMapControllerComponent_GetTileCountX) == 0x000004, "Wrong alignment on GMAdaptiveShadowMapControllerComponent_GetTileCountX");
static_assert(sizeof(GMAdaptiveShadowMapControllerComponent_GetTileCountX) == 0x000004, "Wrong size on GMAdaptiveShadowMapControllerComponent_GetTileCountX");
static_assert(offsetof(GMAdaptiveShadowMapControllerComponent_GetTileCountX, ReturnValue) == 0x000000, "Member 'GMAdaptiveShadowMapControllerComponent_GetTileCountX::ReturnValue' has a wrong offset!");

// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY
// 0x0004 (0x0004 - 0x0000)
struct GMAdaptiveShadowMapControllerComponent_GetTileCountY final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GMAdaptiveShadowMapControllerComponent_GetTileCountY) == 0x000004, "Wrong alignment on GMAdaptiveShadowMapControllerComponent_GetTileCountY");
static_assert(sizeof(GMAdaptiveShadowMapControllerComponent_GetTileCountY) == 0x000004, "Wrong size on GMAdaptiveShadowMapControllerComponent_GetTileCountY");
static_assert(offsetof(GMAdaptiveShadowMapControllerComponent_GetTileCountY, ReturnValue) == 0x000000, "Member 'GMAdaptiveShadowMapControllerComponent_GetTileCountY::ReturnValue' has a wrong offset!");

// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize
// 0x0004 (0x0004 - 0x0000)
struct GMAdaptiveShadowMapControllerComponent_GetTileSize final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GMAdaptiveShadowMapControllerComponent_GetTileSize) == 0x000004, "Wrong alignment on GMAdaptiveShadowMapControllerComponent_GetTileSize");
static_assert(sizeof(GMAdaptiveShadowMapControllerComponent_GetTileSize) == 0x000004, "Wrong size on GMAdaptiveShadowMapControllerComponent_GetTileSize");
static_assert(offsetof(GMAdaptiveShadowMapControllerComponent_GetTileSize, ReturnValue) == 0x000000, "Member 'GMAdaptiveShadowMapControllerComponent_GetTileSize::ReturnValue' has a wrong offset!");

// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles
// 0x0001 (0x0001 - 0x0000)
struct GMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles) == 0x000001, "Wrong alignment on GMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles");
static_assert(sizeof(GMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles) == 0x000001, "Wrong size on GMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles");
static_assert(offsetof(GMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles, ReturnValue) == 0x000000, "Member 'GMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles::ReturnValue' has a wrong offset!");

// Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds
// 0x0020 (0x0020 - 0x0000)
struct GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds final
{
public:
	struct FVector                                BoundingSphereCenter;                              // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BoundingSphereRadius;                              // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds) == 0x000008, "Wrong alignment on GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds");
static_assert(sizeof(GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds) == 0x000020, "Wrong size on GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds");
static_assert(offsetof(GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds, BoundingSphereCenter) == 0x000000, "Member 'GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds::BoundingSphereCenter' has a wrong offset!");
static_assert(offsetof(GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds, BoundingSphereRadius) == 0x000018, "Member 'GMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds::BoundingSphereRadius' has a wrong offset!");

// Function GraphicsExtensions.GMAmbianceManager.AddAmbiance
// 0x0028 (0x0028 - 0x0000)
struct GMAmbianceManager_AddAmbiance final
{
public:
	class UAmbianceManagerDataAsset*              assetToLoad;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          overrideTransition;                                // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            Curve;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Tag;                                               // 0x0018(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GMAmbianceManager_AddAmbiance) == 0x000008, "Wrong alignment on GMAmbianceManager_AddAmbiance");
static_assert(sizeof(GMAmbianceManager_AddAmbiance) == 0x000028, "Wrong size on GMAmbianceManager_AddAmbiance");
static_assert(offsetof(GMAmbianceManager_AddAmbiance, assetToLoad) == 0x000000, "Member 'GMAmbianceManager_AddAmbiance::assetToLoad' has a wrong offset!");
static_assert(offsetof(GMAmbianceManager_AddAmbiance, overrideTransition) == 0x000008, "Member 'GMAmbianceManager_AddAmbiance::overrideTransition' has a wrong offset!");
static_assert(offsetof(GMAmbianceManager_AddAmbiance, Duration) == 0x00000C, "Member 'GMAmbianceManager_AddAmbiance::Duration' has a wrong offset!");
static_assert(offsetof(GMAmbianceManager_AddAmbiance, Curve) == 0x000010, "Member 'GMAmbianceManager_AddAmbiance::Curve' has a wrong offset!");
static_assert(offsetof(GMAmbianceManager_AddAmbiance, Tag) == 0x000018, "Member 'GMAmbianceManager_AddAmbiance::Tag' has a wrong offset!");

// Function GraphicsExtensions.GMAmbianceManager.ApplyAmbiance
// 0x0970 (0x0970 - 0x0000)
struct GMAmbianceManager_ApplyAmbiance final
{
public:
	struct FAmbianceManagerParams                 newAmbiance;                                       // 0x0000(0x0970)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GMAmbianceManager_ApplyAmbiance) == 0x000010, "Wrong alignment on GMAmbianceManager_ApplyAmbiance");
static_assert(sizeof(GMAmbianceManager_ApplyAmbiance) == 0x000970, "Wrong size on GMAmbianceManager_ApplyAmbiance");
static_assert(offsetof(GMAmbianceManager_ApplyAmbiance, newAmbiance) == 0x000000, "Member 'GMAmbianceManager_ApplyAmbiance::newAmbiance' has a wrong offset!");

// Function GraphicsExtensions.GMAmbianceManager.InitializeManager
// 0x0008 (0x0008 - 0x0000)
struct GMAmbianceManager_InitializeManager final
{
public:
	class UDataTable*                             inPriorityTable;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GMAmbianceManager_InitializeManager) == 0x000008, "Wrong alignment on GMAmbianceManager_InitializeManager");
static_assert(sizeof(GMAmbianceManager_InitializeManager) == 0x000008, "Wrong size on GMAmbianceManager_InitializeManager");
static_assert(offsetof(GMAmbianceManager_InitializeManager, inPriorityTable) == 0x000000, "Member 'GMAmbianceManager_InitializeManager::inPriorityTable' has a wrong offset!");

// Function GraphicsExtensions.GMAmbianceManager.RemoveAmbiance
// 0x0018 (0x0018 - 0x0000)
struct GMAmbianceManager_RemoveAmbiance final
{
public:
	const class UAmbianceManagerDataAsset*        assetToLoad;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          overrideTransition;                                // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            Curve;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GMAmbianceManager_RemoveAmbiance) == 0x000008, "Wrong alignment on GMAmbianceManager_RemoveAmbiance");
static_assert(sizeof(GMAmbianceManager_RemoveAmbiance) == 0x000018, "Wrong size on GMAmbianceManager_RemoveAmbiance");
static_assert(offsetof(GMAmbianceManager_RemoveAmbiance, assetToLoad) == 0x000000, "Member 'GMAmbianceManager_RemoveAmbiance::assetToLoad' has a wrong offset!");
static_assert(offsetof(GMAmbianceManager_RemoveAmbiance, overrideTransition) == 0x000008, "Member 'GMAmbianceManager_RemoveAmbiance::overrideTransition' has a wrong offset!");
static_assert(offsetof(GMAmbianceManager_RemoveAmbiance, Duration) == 0x00000C, "Member 'GMAmbianceManager_RemoveAmbiance::Duration' has a wrong offset!");
static_assert(offsetof(GMAmbianceManager_RemoveAmbiance, Curve) == 0x000010, "Member 'GMAmbianceManager_RemoveAmbiance::Curve' has a wrong offset!");

// Function GraphicsExtensions.GMAmbianceManager.IsManagerInitialized
// 0x0001 (0x0001 - 0x0000)
struct GMAmbianceManager_IsManagerInitialized final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GMAmbianceManager_IsManagerInitialized) == 0x000001, "Wrong alignment on GMAmbianceManager_IsManagerInitialized");
static_assert(sizeof(GMAmbianceManager_IsManagerInitialized) == 0x000001, "Wrong size on GMAmbianceManager_IsManagerInitialized");
static_assert(offsetof(GMAmbianceManager_IsManagerInitialized, ReturnValue) == 0x000000, "Member 'GMAmbianceManager_IsManagerInitialized::ReturnValue' has a wrong offset!");

}

