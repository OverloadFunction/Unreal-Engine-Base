﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Customization

#include "Basic.hpp"

#include "DBDAnimationBudgetAllocator_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class Customization.Accessory
// 0x0010 (0x1150 - 0x1140)
class UAccessory : public UDBDSkeletalMeshComponentBudgeted
{
public:
	bool                                          _shouldLoadOnServer;                               // 0x1140(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1141[0xF];                                     // 0x1141(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BP_DestroyComponent(class UActorComponent* componentToDestroy);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Accessory">();
	}
	static class UAccessory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccessory>();
	}
};
static_assert(alignof(UAccessory) == 0x000010, "Wrong alignment on UAccessory");
static_assert(sizeof(UAccessory) == 0x001150, "Wrong size on UAccessory");
static_assert(offsetof(UAccessory, _shouldLoadOnServer) == 0x001140, "Member 'UAccessory::_shouldLoadOnServer' has a wrong offset!");

// Class Customization.AccessoryUtilities
// 0x0000 (0x0030 - 0x0030)
class UAccessoryUtilities final : public UBlueprintFunctionLibrary
{
public:
	static class UBoneSocketLocalVelocityEvaluator* AddBoneSocketLocalVelocityEvaluatorToAccessory(class UAccessory* Accessory, const TArray<class FName>& trackedBoneSocketNames);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AccessoryUtilities">();
	}
	static class UAccessoryUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccessoryUtilities>();
	}
};
static_assert(alignof(UAccessoryUtilities) == 0x000008, "Wrong alignment on UAccessoryUtilities");
static_assert(sizeof(UAccessoryUtilities) == 0x000030, "Wrong size on UAccessoryUtilities");

}

