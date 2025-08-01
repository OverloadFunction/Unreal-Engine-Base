﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Landscape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeComponentScreenSizeToUseSubSections final
{
public:
	float                                         InComponentScreenSizeToUseSubSections;             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeComponentScreenSizeToUseSubSections");
static_assert(sizeof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections) == 0x000004, "Wrong size on LandscapeProxy_ChangeComponentScreenSizeToUseSubSections");
static_assert(offsetof(LandscapeProxy_ChangeComponentScreenSizeToUseSubSections, InComponentScreenSizeToUseSubSections) == 0x000000, "Member 'LandscapeProxy_ChangeComponentScreenSizeToUseSubSections::InComponentScreenSizeToUseSubSections' has a wrong offset!");

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeLODDistanceFactor final
{
public:
	float                                         InLODDistanceFactor;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_ChangeLODDistanceFactor) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeLODDistanceFactor");
static_assert(sizeof(LandscapeProxy_ChangeLODDistanceFactor) == 0x000004, "Wrong size on LandscapeProxy_ChangeLODDistanceFactor");
static_assert(offsetof(LandscapeProxy_ChangeLODDistanceFactor, InLODDistanceFactor) == 0x000000, "Member 'LandscapeProxy_ChangeLODDistanceFactor::InLODDistanceFactor' has a wrong offset!");

// Function Landscape.LandscapeProxy.EditorApplySpline
// 0x0040 (0x0040 - 0x0000)
struct LandscapeProxy_EditorApplySpline final
{
public:
	class USplineComponent*                       InSplineComponent;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartWidth;                                        // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndWidth;                                          // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartSideFalloff;                                  // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndSideFalloff;                                    // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartRoll;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndRoll;                                           // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSubdivisions;                                   // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRaiseHeights;                                     // 0x0024(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLowerHeights;                                     // 0x0025(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULandscapeLayerInfoObject*              PaintLayer;                                        // 0x0028(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   EditLayerName;                                     // 0x0030(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LandscapeProxy_EditorApplySpline) == 0x000008, "Wrong alignment on LandscapeProxy_EditorApplySpline");
static_assert(sizeof(LandscapeProxy_EditorApplySpline) == 0x000040, "Wrong size on LandscapeProxy_EditorApplySpline");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, InSplineComponent) == 0x000000, "Member 'LandscapeProxy_EditorApplySpline::InSplineComponent' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartWidth) == 0x000008, "Member 'LandscapeProxy_EditorApplySpline::StartWidth' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndWidth) == 0x00000C, "Member 'LandscapeProxy_EditorApplySpline::EndWidth' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartSideFalloff) == 0x000010, "Member 'LandscapeProxy_EditorApplySpline::StartSideFalloff' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndSideFalloff) == 0x000014, "Member 'LandscapeProxy_EditorApplySpline::EndSideFalloff' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartRoll) == 0x000018, "Member 'LandscapeProxy_EditorApplySpline::StartRoll' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndRoll) == 0x00001C, "Member 'LandscapeProxy_EditorApplySpline::EndRoll' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, NumSubdivisions) == 0x000020, "Member 'LandscapeProxy_EditorApplySpline::NumSubdivisions' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, bRaiseHeights) == 0x000024, "Member 'LandscapeProxy_EditorApplySpline::bRaiseHeights' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, bLowerHeights) == 0x000025, "Member 'LandscapeProxy_EditorApplySpline::bLowerHeights' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, PaintLayer) == 0x000028, "Member 'LandscapeProxy_EditorApplySpline::PaintLayer' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EditLayerName) == 0x000030, "Member 'LandscapeProxy_EditorApplySpline::EditLayerName' has a wrong offset!");

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// 0x0008 (0x0008 - 0x0000)
struct LandscapeProxy_EditorSetLandscapeMaterial final
{
public:
	class UMaterialInterface*                     NewLandscapeMaterial;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_EditorSetLandscapeMaterial) == 0x000008, "Wrong alignment on LandscapeProxy_EditorSetLandscapeMaterial");
static_assert(sizeof(LandscapeProxy_EditorSetLandscapeMaterial) == 0x000008, "Wrong size on LandscapeProxy_EditorSetLandscapeMaterial");
static_assert(offsetof(LandscapeProxy_EditorSetLandscapeMaterial, NewLandscapeMaterial) == 0x000000, "Member 'LandscapeProxy_EditorSetLandscapeMaterial::NewLandscapeMaterial' has a wrong offset!");

// Function Landscape.LandscapeProxy.GetLandscapeActor
// 0x0008 (0x0008 - 0x0000)
struct LandscapeProxy_GetLandscapeActor final
{
public:
	class ALandscape*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_GetLandscapeActor) == 0x000008, "Wrong alignment on LandscapeProxy_GetLandscapeActor");
static_assert(sizeof(LandscapeProxy_GetLandscapeActor) == 0x000008, "Wrong size on LandscapeProxy_GetLandscapeActor");
static_assert(offsetof(LandscapeProxy_GetLandscapeActor, ReturnValue) == 0x000000, "Member 'LandscapeProxy_GetLandscapeActor::ReturnValue' has a wrong offset!");

// Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
// 0x0010 (0x0010 - 0x0000)
struct LandscapeProxy_LandscapeExportHeightmapToRenderTarget final
{
public:
	class UTextureRenderTarget2D*                 InRenderTarget;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InExportHeightIntoRGChannel;                       // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InExportLandscapeProxies;                          // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget) == 0x000008, "Wrong alignment on LandscapeProxy_LandscapeExportHeightmapToRenderTarget");
static_assert(sizeof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget) == 0x000010, "Wrong size on LandscapeProxy_LandscapeExportHeightmapToRenderTarget");
static_assert(offsetof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget, InRenderTarget) == 0x000000, "Member 'LandscapeProxy_LandscapeExportHeightmapToRenderTarget::InRenderTarget' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget, InExportHeightIntoRGChannel) == 0x000008, "Member 'LandscapeProxy_LandscapeExportHeightmapToRenderTarget::InExportHeightIntoRGChannel' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget, InExportLandscapeProxies) == 0x000009, "Member 'LandscapeProxy_LandscapeExportHeightmapToRenderTarget::InExportLandscapeProxies' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_LandscapeExportHeightmapToRenderTarget, ReturnValue) == 0x00000A, "Member 'LandscapeProxy_LandscapeExportHeightmapToRenderTarget::ReturnValue' has a wrong offset!");

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// 0x0010 (0x0010 - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialScalarParameterValue final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue) == 0x000004, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialScalarParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue) == 0x000010, "Wrong size on LandscapeProxy_SetLandscapeMaterialScalarParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialScalarParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialScalarParameterValue, Value) == 0x00000C, "Member 'LandscapeProxy_SetLandscapeMaterialScalarParameterValue::Value' has a wrong offset!");

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// 0x0018 (0x0018 - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialTextureParameterValue final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Value;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue) == 0x000008, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialTextureParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue) == 0x000018, "Wrong size on LandscapeProxy_SetLandscapeMaterialTextureParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialTextureParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialTextureParameterValue, Value) == 0x000010, "Member 'LandscapeProxy_SetLandscapeMaterialTextureParameterValue::Value' has a wrong offset!");

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// 0x001C (0x001C - 0x0000)
struct LandscapeProxy_SetLandscapeMaterialVectorParameterValue final
{
public:
	class FName                                   ParameterName;                                     // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Value;                                             // 0x000C(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue) == 0x000004, "Wrong alignment on LandscapeProxy_SetLandscapeMaterialVectorParameterValue");
static_assert(sizeof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue) == 0x00001C, "Wrong size on LandscapeProxy_SetLandscapeMaterialVectorParameterValue");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue, ParameterName) == 0x000000, "Member 'LandscapeProxy_SetLandscapeMaterialVectorParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_SetLandscapeMaterialVectorParameterValue, Value) == 0x00000C, "Member 'LandscapeProxy_SetLandscapeMaterialVectorParameterValue::Value' has a wrong offset!");

// Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
// 0x0001 (0x0001 - 0x0000)
struct LandscapeProxy_SetVirtualTextureRenderPassType final
{
public:
	ERuntimeVirtualTextureMainPassType            InType;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_SetVirtualTextureRenderPassType) == 0x000001, "Wrong alignment on LandscapeProxy_SetVirtualTextureRenderPassType");
static_assert(sizeof(LandscapeProxy_SetVirtualTextureRenderPassType) == 0x000001, "Wrong size on LandscapeProxy_SetVirtualTextureRenderPassType");
static_assert(offsetof(LandscapeProxy_SetVirtualTextureRenderPassType, InType) == 0x000000, "Member 'LandscapeProxy_SetVirtualTextureRenderPassType::InType' has a wrong offset!");

// Function Landscape.Landscape.RenderHeightmap
// 0x0090 (0x0090 - 0x0000)
struct Landscape_RenderHeightmap final
{
public:
	struct FTransform                             InWorldTransform;                                  // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox2D                                 InExtents;                                         // 0x0060(0x0028)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                 OutRenderTarget;                                   // 0x0088(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Landscape_RenderHeightmap) == 0x000010, "Wrong alignment on Landscape_RenderHeightmap");
static_assert(sizeof(Landscape_RenderHeightmap) == 0x000090, "Wrong size on Landscape_RenderHeightmap");
static_assert(offsetof(Landscape_RenderHeightmap, InWorldTransform) == 0x000000, "Member 'Landscape_RenderHeightmap::InWorldTransform' has a wrong offset!");
static_assert(offsetof(Landscape_RenderHeightmap, InExtents) == 0x000060, "Member 'Landscape_RenderHeightmap::InExtents' has a wrong offset!");
static_assert(offsetof(Landscape_RenderHeightmap, OutRenderTarget) == 0x000088, "Member 'Landscape_RenderHeightmap::OutRenderTarget' has a wrong offset!");

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
// 0x0028 (0x0028 - 0x0000)
struct LandscapeComponent_EditorGetPaintLayerWeightAtLocation final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeLayerInfoObject*              PaintLayer;                                        // 0x0018(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation) == 0x000008, "Wrong alignment on LandscapeComponent_EditorGetPaintLayerWeightAtLocation");
static_assert(sizeof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation) == 0x000028, "Wrong size on LandscapeComponent_EditorGetPaintLayerWeightAtLocation");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation, InLocation) == 0x000000, "Member 'LandscapeComponent_EditorGetPaintLayerWeightAtLocation::InLocation' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation, PaintLayer) == 0x000018, "Member 'LandscapeComponent_EditorGetPaintLayerWeightAtLocation::PaintLayer' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightAtLocation, ReturnValue) == 0x000020, "Member 'LandscapeComponent_EditorGetPaintLayerWeightAtLocation::ReturnValue' has a wrong offset!");

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
// 0x0028 (0x0028 - 0x0000)
struct LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InPaintLayerName;                                  // 0x0018(0x000C)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation) == 0x000008, "Wrong alignment on LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation");
static_assert(sizeof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation) == 0x000028, "Wrong size on LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation, InLocation) == 0x000000, "Member 'LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation::InLocation' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation, InPaintLayerName) == 0x000018, "Member 'LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation::InPaintLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation, ReturnValue) == 0x000024, "Member 'LandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation::ReturnValue' has a wrong offset!");

// Function Landscape.LandscapeComponent.SetForcedLOD
// 0x0004 (0x0004 - 0x0000)
struct LandscapeComponent_SetForcedLOD final
{
public:
	int32                                         InForcedLOD;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeComponent_SetForcedLOD) == 0x000004, "Wrong alignment on LandscapeComponent_SetForcedLOD");
static_assert(sizeof(LandscapeComponent_SetForcedLOD) == 0x000004, "Wrong size on LandscapeComponent_SetForcedLOD");
static_assert(offsetof(LandscapeComponent_SetForcedLOD, InForcedLOD) == 0x000000, "Member 'LandscapeComponent_SetForcedLOD::InForcedLOD' has a wrong offset!");

// Function Landscape.LandscapeComponent.SetLODBias
// 0x0004 (0x0004 - 0x0000)
struct LandscapeComponent_SetLODBias final
{
public:
	int32                                         InLODBias;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeComponent_SetLODBias) == 0x000004, "Wrong alignment on LandscapeComponent_SetLODBias");
static_assert(sizeof(LandscapeComponent_SetLODBias) == 0x000004, "Wrong size on LandscapeComponent_SetLODBias");
static_assert(offsetof(LandscapeComponent_SetLODBias, InLODBias) == 0x000000, "Member 'LandscapeComponent_SetLODBias::InLODBias' has a wrong offset!");

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// 0x0010 (0x0010 - 0x0000)
struct LandscapeComponent_GetMaterialInstanceDynamic final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeComponent_GetMaterialInstanceDynamic) == 0x000008, "Wrong alignment on LandscapeComponent_GetMaterialInstanceDynamic");
static_assert(sizeof(LandscapeComponent_GetMaterialInstanceDynamic) == 0x000010, "Wrong size on LandscapeComponent_GetMaterialInstanceDynamic");
static_assert(offsetof(LandscapeComponent_GetMaterialInstanceDynamic, InIndex) == 0x000000, "Member 'LandscapeComponent_GetMaterialInstanceDynamic::InIndex' has a wrong offset!");
static_assert(offsetof(LandscapeComponent_GetMaterialInstanceDynamic, ReturnValue) == 0x000008, "Member 'LandscapeComponent_GetMaterialInstanceDynamic::ReturnValue' has a wrong offset!");

// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
// 0x0008 (0x0008 - 0x0000)
struct LandscapeHeightfieldCollisionComponent_GetRenderComponent final
{
public:
	class ULandscapeComponent*                    ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeHeightfieldCollisionComponent_GetRenderComponent) == 0x000008, "Wrong alignment on LandscapeHeightfieldCollisionComponent_GetRenderComponent");
static_assert(sizeof(LandscapeHeightfieldCollisionComponent_GetRenderComponent) == 0x000008, "Wrong size on LandscapeHeightfieldCollisionComponent_GetRenderComponent");
static_assert(offsetof(LandscapeHeightfieldCollisionComponent_GetRenderComponent, ReturnValue) == 0x000000, "Member 'LandscapeHeightfieldCollisionComponent_GetRenderComponent::ReturnValue' has a wrong offset!");

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
// 0x0010 (0x0010 - 0x0000)
struct LandscapeSplinesComponent_GetSplineMeshComponents final
{
public:
	TArray<class USplineMeshComponent*>           ReturnValue;                                       // 0x0000(0x0010)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeSplinesComponent_GetSplineMeshComponents) == 0x000008, "Wrong alignment on LandscapeSplinesComponent_GetSplineMeshComponents");
static_assert(sizeof(LandscapeSplinesComponent_GetSplineMeshComponents) == 0x000010, "Wrong size on LandscapeSplinesComponent_GetSplineMeshComponents");
static_assert(offsetof(LandscapeSplinesComponent_GetSplineMeshComponents, ReturnValue) == 0x000000, "Member 'LandscapeSplinesComponent_GetSplineMeshComponents::ReturnValue' has a wrong offset!");

// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
// 0x0010 (0x0010 - 0x0000)
struct LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies final
{
public:
	TArray<class UObject*>                        OutStreamableAssets;                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies) == 0x000008, "Wrong alignment on LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies");
static_assert(sizeof(LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies) == 0x000010, "Wrong size on LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies");
static_assert(offsetof(LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies, OutStreamableAssets) == 0x000000, "Member 'LandscapeBlueprintBrushBase_GetBlueprintRenderDependencies::OutStreamableAssets' has a wrong offset!");

// Function Landscape.LandscapeBlueprintBrushBase.Initialize
// 0x0070 (0x0070 - 0x0000)
struct LandscapeBlueprintBrushBase_Initialize final
{
public:
	struct FTransform                             InLandscapeTransform;                              // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                              InLandscapeSize;                                   // 0x0060(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                              InLandscapeRenderTargetSize;                       // 0x0068(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeBlueprintBrushBase_Initialize) == 0x000010, "Wrong alignment on LandscapeBlueprintBrushBase_Initialize");
static_assert(sizeof(LandscapeBlueprintBrushBase_Initialize) == 0x000070, "Wrong size on LandscapeBlueprintBrushBase_Initialize");
static_assert(offsetof(LandscapeBlueprintBrushBase_Initialize, InLandscapeTransform) == 0x000000, "Member 'LandscapeBlueprintBrushBase_Initialize::InLandscapeTransform' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Initialize, InLandscapeSize) == 0x000060, "Member 'LandscapeBlueprintBrushBase_Initialize::InLandscapeSize' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Initialize, InLandscapeRenderTargetSize) == 0x000068, "Member 'LandscapeBlueprintBrushBase_Initialize::InLandscapeRenderTargetSize' has a wrong offset!");

// Function Landscape.LandscapeBlueprintBrushBase.Render
// 0x0028 (0x0028 - 0x0000)
struct LandscapeBlueprintBrushBase_Render final
{
public:
	bool                                          InIsHeightmap;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 InCombinedResult;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InWeightmapLayerName;                              // 0x0010(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeBlueprintBrushBase_Render) == 0x000008, "Wrong alignment on LandscapeBlueprintBrushBase_Render");
static_assert(sizeof(LandscapeBlueprintBrushBase_Render) == 0x000028, "Wrong size on LandscapeBlueprintBrushBase_Render");
static_assert(offsetof(LandscapeBlueprintBrushBase_Render, InIsHeightmap) == 0x000000, "Member 'LandscapeBlueprintBrushBase_Render::InIsHeightmap' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Render, InCombinedResult) == 0x000008, "Member 'LandscapeBlueprintBrushBase_Render::InCombinedResult' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Render, InWeightmapLayerName) == 0x000010, "Member 'LandscapeBlueprintBrushBase_Render::InWeightmapLayerName' has a wrong offset!");
static_assert(offsetof(LandscapeBlueprintBrushBase_Render, ReturnValue) == 0x000020, "Member 'LandscapeBlueprintBrushBase_Render::ReturnValue' has a wrong offset!");

// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
// 0x0001 (0x0001 - 0x0000)
struct LandscapeBlueprintBrushBase_RequestLandscapeUpdate final
{
public:
	bool                                          bInUserTriggered;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeBlueprintBrushBase_RequestLandscapeUpdate) == 0x000001, "Wrong alignment on LandscapeBlueprintBrushBase_RequestLandscapeUpdate");
static_assert(sizeof(LandscapeBlueprintBrushBase_RequestLandscapeUpdate) == 0x000001, "Wrong size on LandscapeBlueprintBrushBase_RequestLandscapeUpdate");
static_assert(offsetof(LandscapeBlueprintBrushBase_RequestLandscapeUpdate, bInUserTriggered) == 0x000000, "Member 'LandscapeBlueprintBrushBase_RequestLandscapeUpdate::bInUserTriggered' has a wrong offset!");

}

