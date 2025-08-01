﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sentry

#include "Basic.hpp"


namespace SDK
{

// Enum Sentry.ESentryLevel
// NumValues: 0x0006
enum class ESentryLevel : uint8
{
	Debug                                    = 0,
	Info                                     = 1,
	Warning                                  = 2,
	Error                                    = 3,
	Fatal                                    = 4,
	ESentryLevel_MAX                         = 5,
};

// ScriptStruct Sentry.AutomaticBreadcrumbs
// 0x0005 (0x0005 - 0x0000)
struct FAutomaticBreadcrumbs final
{
public:
	bool                                          bOnMapLoadingStarted;                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnMapLoaded;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnGameStateClassChanged;                          // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnGameSessionIDChanged;                           // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnUserActivityStringChanged;                      // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAutomaticBreadcrumbs) == 0x000001, "Wrong alignment on FAutomaticBreadcrumbs");
static_assert(sizeof(FAutomaticBreadcrumbs) == 0x000005, "Wrong size on FAutomaticBreadcrumbs");
static_assert(offsetof(FAutomaticBreadcrumbs, bOnMapLoadingStarted) == 0x000000, "Member 'FAutomaticBreadcrumbs::bOnMapLoadingStarted' has a wrong offset!");
static_assert(offsetof(FAutomaticBreadcrumbs, bOnMapLoaded) == 0x000001, "Member 'FAutomaticBreadcrumbs::bOnMapLoaded' has a wrong offset!");
static_assert(offsetof(FAutomaticBreadcrumbs, bOnGameStateClassChanged) == 0x000002, "Member 'FAutomaticBreadcrumbs::bOnGameStateClassChanged' has a wrong offset!");
static_assert(offsetof(FAutomaticBreadcrumbs, bOnGameSessionIDChanged) == 0x000003, "Member 'FAutomaticBreadcrumbs::bOnGameSessionIDChanged' has a wrong offset!");
static_assert(offsetof(FAutomaticBreadcrumbs, bOnUserActivityStringChanged) == 0x000004, "Member 'FAutomaticBreadcrumbs::bOnUserActivityStringChanged' has a wrong offset!");

// ScriptStruct Sentry.TagsPromotion
// 0x0006 (0x0006 - 0x0000)
struct FTagsPromotion final
{
public:
	bool                                          bPromoteBuildConfiguration;                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPromoteTargetType;                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPromoteEngineMode;                                // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPromoteIsGame;                                    // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPromoteIsStandalone;                              // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPromoteIsUnattended;                              // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTagsPromotion) == 0x000001, "Wrong alignment on FTagsPromotion");
static_assert(sizeof(FTagsPromotion) == 0x000006, "Wrong size on FTagsPromotion");
static_assert(offsetof(FTagsPromotion, bPromoteBuildConfiguration) == 0x000000, "Member 'FTagsPromotion::bPromoteBuildConfiguration' has a wrong offset!");
static_assert(offsetof(FTagsPromotion, bPromoteTargetType) == 0x000001, "Member 'FTagsPromotion::bPromoteTargetType' has a wrong offset!");
static_assert(offsetof(FTagsPromotion, bPromoteEngineMode) == 0x000002, "Member 'FTagsPromotion::bPromoteEngineMode' has a wrong offset!");
static_assert(offsetof(FTagsPromotion, bPromoteIsGame) == 0x000003, "Member 'FTagsPromotion::bPromoteIsGame' has a wrong offset!");
static_assert(offsetof(FTagsPromotion, bPromoteIsStandalone) == 0x000004, "Member 'FTagsPromotion::bPromoteIsStandalone' has a wrong offset!");
static_assert(offsetof(FTagsPromotion, bPromoteIsUnattended) == 0x000005, "Member 'FTagsPromotion::bPromoteIsUnattended' has a wrong offset!");

// ScriptStruct Sentry.EnableBuildConfigurations
// 0x0005 (0x0005 - 0x0000)
struct FEnableBuildConfigurations final
{
public:
	bool                                          bEnableDebug;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDebugGame;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDevelopment;                                // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableTest;                                       // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableShipping;                                   // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEnableBuildConfigurations) == 0x000001, "Wrong alignment on FEnableBuildConfigurations");
static_assert(sizeof(FEnableBuildConfigurations) == 0x000005, "Wrong size on FEnableBuildConfigurations");
static_assert(offsetof(FEnableBuildConfigurations, bEnableDebug) == 0x000000, "Member 'FEnableBuildConfigurations::bEnableDebug' has a wrong offset!");
static_assert(offsetof(FEnableBuildConfigurations, bEnableDebugGame) == 0x000001, "Member 'FEnableBuildConfigurations::bEnableDebugGame' has a wrong offset!");
static_assert(offsetof(FEnableBuildConfigurations, bEnableDevelopment) == 0x000002, "Member 'FEnableBuildConfigurations::bEnableDevelopment' has a wrong offset!");
static_assert(offsetof(FEnableBuildConfigurations, bEnableTest) == 0x000003, "Member 'FEnableBuildConfigurations::bEnableTest' has a wrong offset!");
static_assert(offsetof(FEnableBuildConfigurations, bEnableShipping) == 0x000004, "Member 'FEnableBuildConfigurations::bEnableShipping' has a wrong offset!");

// ScriptStruct Sentry.EnableBuildTargets
// 0x0005 (0x0005 - 0x0000)
struct FEnableBuildTargets final
{
public:
	bool                                          bEnableClient;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableGame;                                       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableEditor;                                     // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableServer;                                     // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableProgram;                                    // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEnableBuildTargets) == 0x000001, "Wrong alignment on FEnableBuildTargets");
static_assert(sizeof(FEnableBuildTargets) == 0x000005, "Wrong size on FEnableBuildTargets");
static_assert(offsetof(FEnableBuildTargets, bEnableClient) == 0x000000, "Member 'FEnableBuildTargets::bEnableClient' has a wrong offset!");
static_assert(offsetof(FEnableBuildTargets, bEnableGame) == 0x000001, "Member 'FEnableBuildTargets::bEnableGame' has a wrong offset!");
static_assert(offsetof(FEnableBuildTargets, bEnableEditor) == 0x000002, "Member 'FEnableBuildTargets::bEnableEditor' has a wrong offset!");
static_assert(offsetof(FEnableBuildTargets, bEnableServer) == 0x000003, "Member 'FEnableBuildTargets::bEnableServer' has a wrong offset!");
static_assert(offsetof(FEnableBuildTargets, bEnableProgram) == 0x000004, "Member 'FEnableBuildTargets::bEnableProgram' has a wrong offset!");

// ScriptStruct Sentry.EnableBuildPlatforms
// 0x0005 (0x0005 - 0x0000)
struct FEnableBuildPlatforms final
{
public:
	bool                                          bEnableLinux;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableWindows;                                    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableIOS;                                        // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableAndroid;                                    // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableMac;                                        // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEnableBuildPlatforms) == 0x000001, "Wrong alignment on FEnableBuildPlatforms");
static_assert(sizeof(FEnableBuildPlatforms) == 0x000005, "Wrong size on FEnableBuildPlatforms");
static_assert(offsetof(FEnableBuildPlatforms, bEnableLinux) == 0x000000, "Member 'FEnableBuildPlatforms::bEnableLinux' has a wrong offset!");
static_assert(offsetof(FEnableBuildPlatforms, bEnableWindows) == 0x000001, "Member 'FEnableBuildPlatforms::bEnableWindows' has a wrong offset!");
static_assert(offsetof(FEnableBuildPlatforms, bEnableIOS) == 0x000002, "Member 'FEnableBuildPlatforms::bEnableIOS' has a wrong offset!");
static_assert(offsetof(FEnableBuildPlatforms, bEnableAndroid) == 0x000003, "Member 'FEnableBuildPlatforms::bEnableAndroid' has a wrong offset!");
static_assert(offsetof(FEnableBuildPlatforms, bEnableMac) == 0x000004, "Member 'FEnableBuildPlatforms::bEnableMac' has a wrong offset!");

}

