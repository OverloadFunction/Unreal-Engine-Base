﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ExperimentalFeatures

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ExperimentalFeatures.ExperimentalFeaturesManager
// 0x0108 (0x0140 - 0x0038)
class UExperimentalFeaturesManager final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_38[0x108];                                     // 0x0038(0x0108)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ExperimentalFeaturesManager">();
	}
	static class UExperimentalFeaturesManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExperimentalFeaturesManager>();
	}
};
static_assert(alignof(UExperimentalFeaturesManager) == 0x000008, "Wrong alignment on UExperimentalFeaturesManager");
static_assert(sizeof(UExperimentalFeaturesManager) == 0x000140, "Wrong size on UExperimentalFeaturesManager");

}

