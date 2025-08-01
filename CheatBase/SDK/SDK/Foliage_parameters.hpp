﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Foliage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// 0x0050 (0x0050 - 0x0000)
struct FoliageStatistics_FoliageOverlappingBoxCount final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UStaticMesh*                      StaticMesh;                                        // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                   Box;                                               // 0x0010(0x0038)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0048(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FoliageStatistics_FoliageOverlappingBoxCount) == 0x000008, "Wrong alignment on FoliageStatistics_FoliageOverlappingBoxCount");
static_assert(sizeof(FoliageStatistics_FoliageOverlappingBoxCount) == 0x000050, "Wrong size on FoliageStatistics_FoliageOverlappingBoxCount");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxCount, WorldContextObject) == 0x000000, "Member 'FoliageStatistics_FoliageOverlappingBoxCount::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxCount, StaticMesh) == 0x000008, "Member 'FoliageStatistics_FoliageOverlappingBoxCount::StaticMesh' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxCount, Box) == 0x000010, "Member 'FoliageStatistics_FoliageOverlappingBoxCount::Box' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxCount, ReturnValue) == 0x000048, "Member 'FoliageStatistics_FoliageOverlappingBoxCount::ReturnValue' has a wrong offset!");

// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
// 0x0058 (0x0058 - 0x0000)
struct FoliageStatistics_FoliageOverlappingBoxTransforms final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UStaticMesh*                      StaticMesh;                                        // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                   Box;                                               // 0x0010(0x0038)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     OutTransforms;                                     // 0x0048(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FoliageStatistics_FoliageOverlappingBoxTransforms) == 0x000008, "Wrong alignment on FoliageStatistics_FoliageOverlappingBoxTransforms");
static_assert(sizeof(FoliageStatistics_FoliageOverlappingBoxTransforms) == 0x000058, "Wrong size on FoliageStatistics_FoliageOverlappingBoxTransforms");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxTransforms, WorldContextObject) == 0x000000, "Member 'FoliageStatistics_FoliageOverlappingBoxTransforms::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxTransforms, StaticMesh) == 0x000008, "Member 'FoliageStatistics_FoliageOverlappingBoxTransforms::StaticMesh' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxTransforms, Box) == 0x000010, "Member 'FoliageStatistics_FoliageOverlappingBoxTransforms::Box' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxTransforms, OutTransforms) == 0x000048, "Member 'FoliageStatistics_FoliageOverlappingBoxTransforms::OutTransforms' has a wrong offset!");

// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// 0x0030 (0x0030 - 0x0000)
struct FoliageStatistics_FoliageOverlappingSphereCount final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UStaticMesh*                      StaticMesh;                                        // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CenterPosition;                                    // 0x0010(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FoliageStatistics_FoliageOverlappingSphereCount) == 0x000008, "Wrong alignment on FoliageStatistics_FoliageOverlappingSphereCount");
static_assert(sizeof(FoliageStatistics_FoliageOverlappingSphereCount) == 0x000030, "Wrong size on FoliageStatistics_FoliageOverlappingSphereCount");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, WorldContextObject) == 0x000000, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, StaticMesh) == 0x000008, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::StaticMesh' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, CenterPosition) == 0x000010, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::CenterPosition' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, Radius) == 0x000028, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::Radius' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, ReturnValue) == 0x00002C, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::ReturnValue' has a wrong offset!");

// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// 0x0110 (0x0110 - 0x0000)
struct InteractiveFoliageActor_CapsuleTouched final
{
public:
	class UPrimitiveComponent*                    OverlappedComp;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             OverlapInfo;                                       // 0x0020(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(InteractiveFoliageActor_CapsuleTouched) == 0x000008, "Wrong alignment on InteractiveFoliageActor_CapsuleTouched");
static_assert(sizeof(InteractiveFoliageActor_CapsuleTouched) == 0x000110, "Wrong size on InteractiveFoliageActor_CapsuleTouched");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, OverlappedComp) == 0x000000, "Member 'InteractiveFoliageActor_CapsuleTouched::OverlappedComp' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, Other) == 0x000008, "Member 'InteractiveFoliageActor_CapsuleTouched::Other' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, OtherComp) == 0x000010, "Member 'InteractiveFoliageActor_CapsuleTouched::OtherComp' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, OtherBodyIndex) == 0x000018, "Member 'InteractiveFoliageActor_CapsuleTouched::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, bFromSweep) == 0x00001C, "Member 'InteractiveFoliageActor_CapsuleTouched::bFromSweep' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, OverlapInfo) == 0x000020, "Member 'InteractiveFoliageActor_CapsuleTouched::OverlapInfo' has a wrong offset!");

// Function Foliage.ProceduralFoliageSpawner.Simulate
// 0x0004 (0x0004 - 0x0000)
struct ProceduralFoliageSpawner_Simulate final
{
public:
	int32                                         NumSteps;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ProceduralFoliageSpawner_Simulate) == 0x000004, "Wrong alignment on ProceduralFoliageSpawner_Simulate");
static_assert(sizeof(ProceduralFoliageSpawner_Simulate) == 0x000004, "Wrong size on ProceduralFoliageSpawner_Simulate");
static_assert(offsetof(ProceduralFoliageSpawner_Simulate, NumSteps) == 0x000000, "Member 'ProceduralFoliageSpawner_Simulate::NumSteps' has a wrong offset!");

}

