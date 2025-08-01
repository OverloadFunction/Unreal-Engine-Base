﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SplinteredStates

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class SplinteredStates.SplinteredStatesSubsystem
// 0x04B8 (0x04F0 - 0x0038)
class USplinteredStatesSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_38[0x4B8];                                     // 0x0038(0x04B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SplinteredStatesSubsystem">();
	}
	static class USplinteredStatesSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USplinteredStatesSubsystem>();
	}
};
static_assert(alignof(USplinteredStatesSubsystem) == 0x000008, "Wrong alignment on USplinteredStatesSubsystem");
static_assert(sizeof(USplinteredStatesSubsystem) == 0x0004F0, "Wrong size on USplinteredStatesSubsystem");

}

