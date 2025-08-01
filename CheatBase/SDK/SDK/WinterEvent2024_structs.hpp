﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WinterEvent2024

#include "Basic.hpp"

#include "DataTableUtilities_structs.hpp"


namespace SDK
{

// Enum WinterEvent2024.EAlertMode
// NumValues: 0x0004
enum class EAlertMode : uint8
{
	None                                     = 0,
	Stop                                     = 1,
	Scared                                   = 2,
	EAlertMode_MAX                           = 3,
};

// ScriptStruct WinterEvent2024.AlertModeConfig
// 0x0050 (0x0050 - 0x0000)
struct FAlertModeConfig final
{
public:
	struct FDBDTunableRowHandle                   PercentChance;                                     // 0x0000(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                   CooldownDuration;                                  // 0x0028(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAlertModeConfig) == 0x000008, "Wrong alignment on FAlertModeConfig");
static_assert(sizeof(FAlertModeConfig) == 0x000050, "Wrong size on FAlertModeConfig");
static_assert(offsetof(FAlertModeConfig, PercentChance) == 0x000000, "Member 'FAlertModeConfig::PercentChance' has a wrong offset!");
static_assert(offsetof(FAlertModeConfig, CooldownDuration) == 0x000028, "Member 'FAlertModeConfig::CooldownDuration' has a wrong offset!");

}

