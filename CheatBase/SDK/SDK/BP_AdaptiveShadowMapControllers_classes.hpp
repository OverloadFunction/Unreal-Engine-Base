﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AdaptiveShadowMapControllers

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AdaptiveShadowMapControllers.BP_AdaptiveShadowMapControllers_C
// 0x0018 (0x02B8 - 0x02A0)
class ABP_AdaptiveShadowMapControllers_C final : public AActor
{
public:
	class UGMAdaptiveShadowMapControllerComponent* GMAdaptiveShadowMapControllerSpotlights;          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGMAdaptiveShadowMapControllerComponent* GMAdaptiveShadowMapControllerDirectional;         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AdaptiveShadowMapControllers_C">();
	}
	static class ABP_AdaptiveShadowMapControllers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AdaptiveShadowMapControllers_C>();
	}
};
static_assert(alignof(ABP_AdaptiveShadowMapControllers_C) == 0x000008, "Wrong alignment on ABP_AdaptiveShadowMapControllers_C");
static_assert(sizeof(ABP_AdaptiveShadowMapControllers_C) == 0x0002B8, "Wrong size on ABP_AdaptiveShadowMapControllers_C");
static_assert(offsetof(ABP_AdaptiveShadowMapControllers_C, GMAdaptiveShadowMapControllerSpotlights) == 0x0002A0, "Member 'ABP_AdaptiveShadowMapControllers_C::GMAdaptiveShadowMapControllerSpotlights' has a wrong offset!");
static_assert(offsetof(ABP_AdaptiveShadowMapControllers_C, GMAdaptiveShadowMapControllerDirectional) == 0x0002A8, "Member 'ABP_AdaptiveShadowMapControllers_C::GMAdaptiveShadowMapControllerDirectional' has a wrong offset!");
static_assert(offsetof(ABP_AdaptiveShadowMapControllers_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_AdaptiveShadowMapControllers_C::DefaultSceneRoot' has a wrong offset!");

}

