﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheGunslinger

#include "Basic.hpp"


namespace SDK
{

// Enum TheGunslinger.EFireHarpoonRifleAimingInteractionSubState
// NumValues: 0x0005
enum class EFireHarpoonRifleAimingInteractionSubState : uint8
{
	None                                     = 0,
	Warmup                                   = 1,
	ReadyToShoot                             = 2,
	Cooldown                                 = 3,
	EFireHarpoonRifleAimingInteractionSubState_MAX = 4,
};

// Enum TheGunslinger.EFireHarpoonRifleInteractionState
// NumValues: 0x0008
enum class EFireHarpoonRifleInteractionState : uint8
{
	None                                     = 0,
	Aiming                                   = 1,
	FirePhase                                = 2,
	MissPhase                                = 3,
	SuccessPhase                             = 4,
	EndResult                                = 5,
	CanceledAiming                           = 6,
	EFireHarpoonRifleInteractionState_MAX    = 7,
};

// Enum TheGunslinger.ESkillCheckType
// NumValues: 0x0005
enum class ESkillCheckType : uint8
{
	NONE                                     = 0,
	GOOD_SKILL_CHECK                         = 1,
	GREAT_SKILL_CHECK                        = 2,
	BOTH                                     = 3,
	ESkillCheckType_MAX                      = 4,
};

// Enum TheGunslinger.EHarpoonPositionState
// NumValues: 0x0007
enum class EHarpoonPositionState : uint8
{
	None                                     = 0,
	LoadedInRifle                            = 1,
	FollowingProjectile                      = 2,
	ReelBackToRifle                          = 3,
	AttachedToPlayer                         = 4,
	Animated                                 = 5,
	EHarpoonPositionState_MAX                = 6,
};

}

