﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApexDestruction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ApexDestruction_structs.hpp"


namespace SDK
{

// Class ApexDestruction.DestructibleActor
// 0x0018 (0x02B8 - 0x02A0)
class ADestructibleActor final : public AActor
{
public:
	class UDestructibleComponent*                 DestructibleComponent;                             // 0x02A0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMulticastInlineDelegate<void(const struct FVector& HitPoint, const struct FVector& HitDirection)> OnActorFracture; // 0x02A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestructibleActor">();
	}
	static class ADestructibleActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADestructibleActor>();
	}
};
static_assert(alignof(ADestructibleActor) == 0x000008, "Wrong alignment on ADestructibleActor");
static_assert(sizeof(ADestructibleActor) == 0x0002B8, "Wrong size on ADestructibleActor");
static_assert(offsetof(ADestructibleActor, DestructibleComponent) == 0x0002A0, "Member 'ADestructibleActor::DestructibleComponent' has a wrong offset!");
static_assert(offsetof(ADestructibleActor, OnActorFracture) == 0x0002A8, "Member 'ADestructibleActor::OnActorFracture' has a wrong offset!");

// Class ApexDestruction.DestructibleComponent
// 0x00A0 (0x0A30 - 0x0990)
class UDestructibleComponent final : public USkinnedMeshComponent
{
public:
	uint8                                         bFractureEffectOverride : 1;                       // 0x0990(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_991[0x7];                                      // 0x0991(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFractureEffect>                FractureEffects;                                   // 0x0998(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEnableHardSleeping;                               // 0x09A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9A9[0x3];                                      // 0x09A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LargeChunkThreshold;                               // 0x09AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FVector& HitPoint, const struct FVector& HitDirection)> OnComponentFracture; // 0x09B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C0[0x70];                                     // 0x09C0(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	class UDestructibleMesh* GetDestructibleMesh();
	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestructibleComponent">();
	}
	static class UDestructibleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDestructibleComponent>();
	}
};
static_assert(alignof(UDestructibleComponent) == 0x000010, "Wrong alignment on UDestructibleComponent");
static_assert(sizeof(UDestructibleComponent) == 0x000A30, "Wrong size on UDestructibleComponent");
static_assert(offsetof(UDestructibleComponent, FractureEffects) == 0x000998, "Member 'UDestructibleComponent::FractureEffects' has a wrong offset!");
static_assert(offsetof(UDestructibleComponent, bEnableHardSleeping) == 0x0009A8, "Member 'UDestructibleComponent::bEnableHardSleeping' has a wrong offset!");
static_assert(offsetof(UDestructibleComponent, LargeChunkThreshold) == 0x0009AC, "Member 'UDestructibleComponent::LargeChunkThreshold' has a wrong offset!");
static_assert(offsetof(UDestructibleComponent, OnComponentFracture) == 0x0009B0, "Member 'UDestructibleComponent::OnComponentFracture' has a wrong offset!");

// Class ApexDestruction.DestructibleFractureSettings
// 0x0088 (0x00B8 - 0x0030)
class UDestructibleFractureSettings final : public UObject
{
public:
	int32                                         CellSiteCount;                                     // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFractureMaterial                      FractureMaterialDesc;                              // 0x0038(0x0040)(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         RandomSeed;                                        // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        VoronoiSites;                                      // 0x0080(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         OriginalSubmeshCount;                              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0098(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FDestructibleChunkParameters>   ChunkParameters;                                   // 0x00A8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestructibleFractureSettings">();
	}
	static class UDestructibleFractureSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDestructibleFractureSettings>();
	}
};
static_assert(alignof(UDestructibleFractureSettings) == 0x000008, "Wrong alignment on UDestructibleFractureSettings");
static_assert(sizeof(UDestructibleFractureSettings) == 0x0000B8, "Wrong size on UDestructibleFractureSettings");
static_assert(offsetof(UDestructibleFractureSettings, CellSiteCount) == 0x000030, "Member 'UDestructibleFractureSettings::CellSiteCount' has a wrong offset!");
static_assert(offsetof(UDestructibleFractureSettings, FractureMaterialDesc) == 0x000038, "Member 'UDestructibleFractureSettings::FractureMaterialDesc' has a wrong offset!");
static_assert(offsetof(UDestructibleFractureSettings, RandomSeed) == 0x000078, "Member 'UDestructibleFractureSettings::RandomSeed' has a wrong offset!");
static_assert(offsetof(UDestructibleFractureSettings, VoronoiSites) == 0x000080, "Member 'UDestructibleFractureSettings::VoronoiSites' has a wrong offset!");
static_assert(offsetof(UDestructibleFractureSettings, OriginalSubmeshCount) == 0x000090, "Member 'UDestructibleFractureSettings::OriginalSubmeshCount' has a wrong offset!");
static_assert(offsetof(UDestructibleFractureSettings, Materials) == 0x000098, "Member 'UDestructibleFractureSettings::Materials' has a wrong offset!");
static_assert(offsetof(UDestructibleFractureSettings, ChunkParameters) == 0x0000A8, "Member 'UDestructibleFractureSettings::ChunkParameters' has a wrong offset!");

// Class ApexDestruction.DestructibleMesh
// 0x00B8 (0x0598 - 0x04E0)
class UDestructibleMesh final : public USkeletalMesh
{
public:
	struct FDestructibleParameters                DefaultDestructibleParameters;                     // 0x04E0(0x00A8)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FFractureEffect>                FractureEffects;                                   // 0x0588(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestructibleMesh">();
	}
	static class UDestructibleMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDestructibleMesh>();
	}
};
static_assert(alignof(UDestructibleMesh) == 0x000008, "Wrong alignment on UDestructibleMesh");
static_assert(sizeof(UDestructibleMesh) == 0x000598, "Wrong size on UDestructibleMesh");
static_assert(offsetof(UDestructibleMesh, DefaultDestructibleParameters) == 0x0004E0, "Member 'UDestructibleMesh::DefaultDestructibleParameters' has a wrong offset!");
static_assert(offsetof(UDestructibleMesh, FractureEffects) == 0x000588, "Member 'UDestructibleMesh::FractureEffects' has a wrong offset!");

}

