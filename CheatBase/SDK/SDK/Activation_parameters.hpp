﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Activation

#include "Basic.hpp"


namespace SDK::Params
{

// Function Activation.ActivatorComponent.SetObjectState
// 0x0008 (0x0008 - 0x0000)
struct ActivatorComponent_SetObjectState final
{
public:
	class UGameplayTagContainerComponent*         objectState;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ActivatorComponent_SetObjectState) == 0x000008, "Wrong alignment on ActivatorComponent_SetObjectState");
static_assert(sizeof(ActivatorComponent_SetObjectState) == 0x000008, "Wrong size on ActivatorComponent_SetObjectState");
static_assert(offsetof(ActivatorComponent_SetObjectState, objectState) == 0x000000, "Member 'ActivatorComponent_SetObjectState::objectState' has a wrong offset!");

}

