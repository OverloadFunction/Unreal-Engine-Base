﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DBDGame_Start

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DBDGame_Start.BP_DBDGame_Start_C
// 0x0008 (0x0490 - 0x0488)
class ABP_DBDGame_Start_C final : public ADBDGame_Start
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DBDGame_Start_C">();
	}
	static class ABP_DBDGame_Start_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DBDGame_Start_C>();
	}
};
static_assert(alignof(ABP_DBDGame_Start_C) == 0x000008, "Wrong alignment on ABP_DBDGame_Start_C");
static_assert(sizeof(ABP_DBDGame_Start_C) == 0x000490, "Wrong size on ABP_DBDGame_Start_C");
static_assert(offsetof(ABP_DBDGame_Start_C, DefaultSceneRoot) == 0x000488, "Member 'ABP_DBDGame_Start_C::DefaultSceneRoot' has a wrong offset!");

}

