﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ISlasherEffectInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetSlasherAudioComponent
// 0x0008 (0x0008 - 0x0000)
struct ISlasherEffectInterface_C_GetSlasherAudioComponent final
{
public:
	class UAkComponent*                           Audio_Component;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ISlasherEffectInterface_C_GetSlasherAudioComponent) == 0x000008, "Wrong alignment on ISlasherEffectInterface_C_GetSlasherAudioComponent");
static_assert(sizeof(ISlasherEffectInterface_C_GetSlasherAudioComponent) == 0x000008, "Wrong size on ISlasherEffectInterface_C_GetSlasherAudioComponent");
static_assert(offsetof(ISlasherEffectInterface_C_GetSlasherAudioComponent, Audio_Component) == 0x000000, "Member 'ISlasherEffectInterface_C_GetSlasherAudioComponent::Audio_Component' has a wrong offset!");

// Function ISlasherEffectInterface.ISlasherEffectInterface_C.GetTrapPlacementLocation_World
// 0x0018 (0x0018 - 0x0000)
struct ISlasherEffectInterface_C_GetTrapPlacementLocation_World final
{
public:
	struct FVector                                World_Location;                                    // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ISlasherEffectInterface_C_GetTrapPlacementLocation_World) == 0x000008, "Wrong alignment on ISlasherEffectInterface_C_GetTrapPlacementLocation_World");
static_assert(sizeof(ISlasherEffectInterface_C_GetTrapPlacementLocation_World) == 0x000018, "Wrong size on ISlasherEffectInterface_C_GetTrapPlacementLocation_World");
static_assert(offsetof(ISlasherEffectInterface_C_GetTrapPlacementLocation_World, World_Location) == 0x000000, "Member 'ISlasherEffectInterface_C_GetTrapPlacementLocation_World::World_Location' has a wrong offset!");

}

