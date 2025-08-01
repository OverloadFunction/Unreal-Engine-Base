﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheBlight

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "TheBlight_structs.hpp"
#include "DeadByDaylight_structs.hpp"


namespace SDK::Params
{

// Function TheBlight.BlightPower.OnPowerStateChanged
// 0x0002 (0x0002 - 0x0000)
struct BlightPower_OnPowerStateChanged final
{
public:
	EWallGrabState                                previousState;                                     // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWallGrabState                                newState;                                          // 0x0001(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPower_OnPowerStateChanged) == 0x000001, "Wrong alignment on BlightPower_OnPowerStateChanged");
static_assert(sizeof(BlightPower_OnPowerStateChanged) == 0x000002, "Wrong size on BlightPower_OnPowerStateChanged");
static_assert(offsetof(BlightPower_OnPowerStateChanged, previousState) == 0x000000, "Member 'BlightPower_OnPowerStateChanged::previousState' has a wrong offset!");
static_assert(offsetof(BlightPower_OnPowerStateChanged, newState) == 0x000001, "Member 'BlightPower_OnPowerStateChanged::newState' has a wrong offset!");

// Function TheBlight.BlightPowerState.GetStateDuration
// 0x0004 (0x0004 - 0x0000)
struct BlightPowerState_GetStateDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerState_GetStateDuration) == 0x000004, "Wrong alignment on BlightPowerState_GetStateDuration");
static_assert(sizeof(BlightPowerState_GetStateDuration) == 0x000004, "Wrong size on BlightPowerState_GetStateDuration");
static_assert(offsetof(BlightPowerState_GetStateDuration, ReturnValue) == 0x000000, "Member 'BlightPowerState_GetStateDuration::ReturnValue' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState
// 0x0001 (0x0001 - 0x0000)
struct BlightPowerStateComponent_Multicast_SetWallGrabState final
{
public:
	EWallGrabState                                newState;                                          // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_Multicast_SetWallGrabState) == 0x000001, "Wrong alignment on BlightPowerStateComponent_Multicast_SetWallGrabState");
static_assert(sizeof(BlightPowerStateComponent_Multicast_SetWallGrabState) == 0x000001, "Wrong size on BlightPowerStateComponent_Multicast_SetWallGrabState");
static_assert(offsetof(BlightPowerStateComponent_Multicast_SetWallGrabState, newState) == 0x000000, "Member 'BlightPowerStateComponent_Multicast_SetWallGrabState::newState' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState
// 0x0001 (0x0001 - 0x0000)
struct BlightPowerStateComponent_Server_SetWallGrabState final
{
public:
	EWallGrabState                                newState;                                          // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_Server_SetWallGrabState) == 0x000001, "Wrong alignment on BlightPowerStateComponent_Server_SetWallGrabState");
static_assert(sizeof(BlightPowerStateComponent_Server_SetWallGrabState) == 0x000001, "Wrong size on BlightPowerStateComponent_Server_SetWallGrabState");
static_assert(offsetof(BlightPowerStateComponent_Server_SetWallGrabState, newState) == 0x000000, "Member 'BlightPowerStateComponent_Server_SetWallGrabState::newState' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.CanDash
// 0x0001 (0x0001 - 0x0000)
struct BlightPowerStateComponent_CanDash final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_CanDash) == 0x000001, "Wrong alignment on BlightPowerStateComponent_CanDash");
static_assert(sizeof(BlightPowerStateComponent_CanDash) == 0x000001, "Wrong size on BlightPowerStateComponent_CanDash");
static_assert(offsetof(BlightPowerStateComponent_CanDash, ReturnValue) == 0x000000, "Member 'BlightPowerStateComponent_CanDash::ReturnValue' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState
// 0x0008 (0x0008 - 0x0000)
struct BlightPowerStateComponent_GetCurrentPowerState final
{
public:
	class UBlightPowerState*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_GetCurrentPowerState) == 0x000008, "Wrong alignment on BlightPowerStateComponent_GetCurrentPowerState");
static_assert(sizeof(BlightPowerStateComponent_GetCurrentPowerState) == 0x000008, "Wrong size on BlightPowerStateComponent_GetCurrentPowerState");
static_assert(offsetof(BlightPowerStateComponent_GetCurrentPowerState, ReturnValue) == 0x000000, "Member 'BlightPowerStateComponent_GetCurrentPowerState::ReturnValue' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees
// 0x0004 (0x0004 - 0x0000)
struct BlightPowerStateComponent_GetLookAngleDegrees final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_GetLookAngleDegrees) == 0x000004, "Wrong alignment on BlightPowerStateComponent_GetLookAngleDegrees");
static_assert(sizeof(BlightPowerStateComponent_GetLookAngleDegrees) == 0x000004, "Wrong size on BlightPowerStateComponent_GetLookAngleDegrees");
static_assert(offsetof(BlightPowerStateComponent_GetLookAngleDegrees, ReturnValue) == 0x000000, "Member 'BlightPowerStateComponent_GetLookAngleDegrees::ReturnValue' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.GetPowerState
// 0x0001 (0x0001 - 0x0000)
struct BlightPowerStateComponent_GetPowerState final
{
public:
	EWallGrabState                                ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_GetPowerState) == 0x000001, "Wrong alignment on BlightPowerStateComponent_GetPowerState");
static_assert(sizeof(BlightPowerStateComponent_GetPowerState) == 0x000001, "Wrong size on BlightPowerStateComponent_GetPowerState");
static_assert(offsetof(BlightPowerStateComponent_GetPowerState, ReturnValue) == 0x000000, "Member 'BlightPowerStateComponent_GetPowerState::ReturnValue' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum
// 0x0010 (0x0010 - 0x0000)
struct BlightPowerStateComponent_GetPowerStateByEnum final
{
public:
	EWallGrabState                                stateEnum;                                         // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlightPowerState*                      ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_GetPowerStateByEnum) == 0x000008, "Wrong alignment on BlightPowerStateComponent_GetPowerStateByEnum");
static_assert(sizeof(BlightPowerStateComponent_GetPowerStateByEnum) == 0x000010, "Wrong size on BlightPowerStateComponent_GetPowerStateByEnum");
static_assert(offsetof(BlightPowerStateComponent_GetPowerStateByEnum, stateEnum) == 0x000000, "Member 'BlightPowerStateComponent_GetPowerStateByEnum::stateEnum' has a wrong offset!");
static_assert(offsetof(BlightPowerStateComponent_GetPowerStateByEnum, ReturnValue) == 0x000008, "Member 'BlightPowerStateComponent_GetPowerStateByEnum::ReturnValue' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed
// 0x0004 (0x0004 - 0x0000)
struct BlightPowerStateComponent_GetStateTimeElapsed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_GetStateTimeElapsed) == 0x000004, "Wrong alignment on BlightPowerStateComponent_GetStateTimeElapsed");
static_assert(sizeof(BlightPowerStateComponent_GetStateTimeElapsed) == 0x000004, "Wrong size on BlightPowerStateComponent_GetStateTimeElapsed");
static_assert(offsetof(BlightPowerStateComponent_GetStateTimeElapsed, ReturnValue) == 0x000000, "Member 'BlightPowerStateComponent_GetStateTimeElapsed::ReturnValue' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.GetStateTimer
// 0x0008 (0x0008 - 0x0000)
struct BlightPowerStateComponent_GetStateTimer final
{
public:
	class UTimerObject*                           ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_GetStateTimer) == 0x000008, "Wrong alignment on BlightPowerStateComponent_GetStateTimer");
static_assert(sizeof(BlightPowerStateComponent_GetStateTimer) == 0x000008, "Wrong size on BlightPowerStateComponent_GetStateTimer");
static_assert(offsetof(BlightPowerStateComponent_GetStateTimer, ReturnValue) == 0x000000, "Member 'BlightPowerStateComponent_GetStateTimer::ReturnValue' has a wrong offset!");

// Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining
// 0x0004 (0x0004 - 0x0000)
struct BlightPowerStateComponent_GetStateTimeRemaining final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlightPowerStateComponent_GetStateTimeRemaining) == 0x000004, "Wrong alignment on BlightPowerStateComponent_GetStateTimeRemaining");
static_assert(sizeof(BlightPowerStateComponent_GetStateTimeRemaining) == 0x000004, "Wrong size on BlightPowerStateComponent_GetStateTimeRemaining");
static_assert(offsetof(BlightPowerStateComponent_GetStateTimeRemaining, ReturnValue) == 0x000000, "Member 'BlightPowerStateComponent_GetStateTimeRemaining::ReturnValue' has a wrong offset!");

// Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor
// 0x0008 (0x0008 - 0x0000)
struct DragonsGrip_Multicast_OnRevealSurvivor final
{
public:
	class ADBDPlayer*                             Survivor;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DragonsGrip_Multicast_OnRevealSurvivor) == 0x000008, "Wrong alignment on DragonsGrip_Multicast_OnRevealSurvivor");
static_assert(sizeof(DragonsGrip_Multicast_OnRevealSurvivor) == 0x000008, "Wrong size on DragonsGrip_Multicast_OnRevealSurvivor");
static_assert(offsetof(DragonsGrip_Multicast_OnRevealSurvivor, Survivor) == 0x000000, "Member 'DragonsGrip_Multicast_OnRevealSurvivor::Survivor' has a wrong offset!");

// Function TheBlight.DragonsGrip.OnRevealSurvivor
// 0x0008 (0x0008 - 0x0000)
struct DragonsGrip_OnRevealSurvivor final
{
public:
	class ADBDPlayer*                             Instigator;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DragonsGrip_OnRevealSurvivor) == 0x000008, "Wrong alignment on DragonsGrip_OnRevealSurvivor");
static_assert(sizeof(DragonsGrip_OnRevealSurvivor) == 0x000008, "Wrong size on DragonsGrip_OnRevealSurvivor");
static_assert(offsetof(DragonsGrip_OnRevealSurvivor, Instigator) == 0x000000, "Member 'DragonsGrip_OnRevealSurvivor::Instigator' has a wrong offset!");

// Function TheBlight.DragonsGrip.GetActivationDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct DragonsGrip_GetActivationDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DragonsGrip_GetActivationDurationAtLevel) == 0x000004, "Wrong alignment on DragonsGrip_GetActivationDurationAtLevel");
static_assert(sizeof(DragonsGrip_GetActivationDurationAtLevel) == 0x000004, "Wrong size on DragonsGrip_GetActivationDurationAtLevel");
static_assert(offsetof(DragonsGrip_GetActivationDurationAtLevel, ReturnValue) == 0x000000, "Member 'DragonsGrip_GetActivationDurationAtLevel::ReturnValue' has a wrong offset!");

// Function TheBlight.DragonsGrip.GetCooldownDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct DragonsGrip_GetCooldownDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DragonsGrip_GetCooldownDurationAtLevel) == 0x000004, "Wrong alignment on DragonsGrip_GetCooldownDurationAtLevel");
static_assert(sizeof(DragonsGrip_GetCooldownDurationAtLevel) == 0x000004, "Wrong size on DragonsGrip_GetCooldownDurationAtLevel");
static_assert(offsetof(DragonsGrip_GetCooldownDurationAtLevel, ReturnValue) == 0x000000, "Member 'DragonsGrip_GetCooldownDurationAtLevel::ReturnValue' has a wrong offset!");

// Function TheBlight.DragonsGrip.GetExposedEffectDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct DragonsGrip_GetExposedEffectDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DragonsGrip_GetExposedEffectDurationAtLevel) == 0x000004, "Wrong alignment on DragonsGrip_GetExposedEffectDurationAtLevel");
static_assert(sizeof(DragonsGrip_GetExposedEffectDurationAtLevel) == 0x000004, "Wrong size on DragonsGrip_GetExposedEffectDurationAtLevel");
static_assert(offsetof(DragonsGrip_GetExposedEffectDurationAtLevel, ReturnValue) == 0x000000, "Member 'DragonsGrip_GetExposedEffectDurationAtLevel::ReturnValue' has a wrong offset!");

// Function TheBlight.HexBloodFavor.GetPalletInRangeAtLevel
// 0x0004 (0x0004 - 0x0000)
struct HexBloodFavor_GetPalletInRangeAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HexBloodFavor_GetPalletInRangeAtLevel) == 0x000004, "Wrong alignment on HexBloodFavor_GetPalletInRangeAtLevel");
static_assert(sizeof(HexBloodFavor_GetPalletInRangeAtLevel) == 0x000004, "Wrong size on HexBloodFavor_GetPalletInRangeAtLevel");
static_assert(offsetof(HexBloodFavor_GetPalletInRangeAtLevel, ReturnValue) == 0x000000, "Member 'HexBloodFavor_GetPalletInRangeAtLevel::ReturnValue' has a wrong offset!");

// Function TheBlight.HexBloodFavor.GetPalletPulldownBlockTimeAtLevel
// 0x0004 (0x0004 - 0x0000)
struct HexBloodFavor_GetPalletPulldownBlockTimeAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HexBloodFavor_GetPalletPulldownBlockTimeAtLevel) == 0x000004, "Wrong alignment on HexBloodFavor_GetPalletPulldownBlockTimeAtLevel");
static_assert(sizeof(HexBloodFavor_GetPalletPulldownBlockTimeAtLevel) == 0x000004, "Wrong size on HexBloodFavor_GetPalletPulldownBlockTimeAtLevel");
static_assert(offsetof(HexBloodFavor_GetPalletPulldownBlockTimeAtLevel, ReturnValue) == 0x000000, "Member 'HexBloodFavor_GetPalletPulldownBlockTimeAtLevel::ReturnValue' has a wrong offset!");

// Function TheBlight.HexUndying.Authority_OnSurvivorAdded
// 0x0008 (0x0008 - 0x0000)
struct HexUndying_Authority_OnSurvivorAdded final
{
public:
	class ASurvivor*                              Survivor;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HexUndying_Authority_OnSurvivorAdded) == 0x000008, "Wrong alignment on HexUndying_Authority_OnSurvivorAdded");
static_assert(sizeof(HexUndying_Authority_OnSurvivorAdded) == 0x000008, "Wrong size on HexUndying_Authority_OnSurvivorAdded");
static_assert(offsetof(HexUndying_Authority_OnSurvivorAdded, Survivor) == 0x000000, "Member 'HexUndying_Authority_OnSurvivorAdded::Survivor' has a wrong offset!");

// Function TheBlight.HexUndying.Authority_OnSurvivorCleansedHexPerk
// 0x0040 (0x0040 - 0x0000)
struct HexUndying_Authority_OnSurvivorCleansedHexPerk final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(HexUndying_Authority_OnSurvivorCleansedHexPerk) == 0x000008, "Wrong alignment on HexUndying_Authority_OnSurvivorCleansedHexPerk");
static_assert(sizeof(HexUndying_Authority_OnSurvivorCleansedHexPerk) == 0x000040, "Wrong size on HexUndying_Authority_OnSurvivorCleansedHexPerk");
static_assert(offsetof(HexUndying_Authority_OnSurvivorCleansedHexPerk, GameplayTag) == 0x000000, "Member 'HexUndying_Authority_OnSurvivorCleansedHexPerk::GameplayTag' has a wrong offset!");
static_assert(offsetof(HexUndying_Authority_OnSurvivorCleansedHexPerk, GameEventData) == 0x000010, "Member 'HexUndying_Authority_OnSurvivorCleansedHexPerk::GameEventData' has a wrong offset!");

// Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView
// 0x0010 (0x0010 - 0x0000)
struct HexUndying_Authority_UpdateHexPerkStatusView final
{
public:
	class UGameplayModifierContainer*             GameplayModifierContainer;                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsApplicable_0;                                    // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(HexUndying_Authority_UpdateHexPerkStatusView) == 0x000008, "Wrong alignment on HexUndying_Authority_UpdateHexPerkStatusView");
static_assert(sizeof(HexUndying_Authority_UpdateHexPerkStatusView) == 0x000010, "Wrong size on HexUndying_Authority_UpdateHexPerkStatusView");
static_assert(offsetof(HexUndying_Authority_UpdateHexPerkStatusView, GameplayModifierContainer) == 0x000000, "Member 'HexUndying_Authority_UpdateHexPerkStatusView::GameplayModifierContainer' has a wrong offset!");
static_assert(offsetof(HexUndying_Authority_UpdateHexPerkStatusView, IsApplicable_0) == 0x000008, "Member 'HexUndying_Authority_UpdateHexPerkStatusView::IsApplicable_0' has a wrong offset!");

// Function TheBlight.HexUndying.GetRevealAuraDistanceFromTotemAtLevel
// 0x0004 (0x0004 - 0x0000)
struct HexUndying_GetRevealAuraDistanceFromTotemAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HexUndying_GetRevealAuraDistanceFromTotemAtLevel) == 0x000004, "Wrong alignment on HexUndying_GetRevealAuraDistanceFromTotemAtLevel");
static_assert(sizeof(HexUndying_GetRevealAuraDistanceFromTotemAtLevel) == 0x000004, "Wrong size on HexUndying_GetRevealAuraDistanceFromTotemAtLevel");
static_assert(offsetof(HexUndying_GetRevealAuraDistanceFromTotemAtLevel, ReturnValue) == 0x000000, "Member 'HexUndying_GetRevealAuraDistanceFromTotemAtLevel::ReturnValue' has a wrong offset!");

}

