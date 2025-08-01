﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StructUtils

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "StructUtils_structs.hpp"


namespace SDK
{

// Class StructUtils.PropertyBagMissingObject
// 0x0000 (0x0030 - 0x0030)
class UPropertyBagMissingObject final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyBagMissingObject">();
	}
	static class UPropertyBagMissingObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyBagMissingObject>();
	}
};
static_assert(alignof(UPropertyBagMissingObject) == 0x000008, "Wrong alignment on UPropertyBagMissingObject");
static_assert(sizeof(UPropertyBagMissingObject) == 0x000030, "Wrong size on UPropertyBagMissingObject");

// Class StructUtils.PropertyBag
// 0x0018 (0x00E0 - 0x00C8)
class UPropertyBag final : public UScriptStruct
{
public:
	TArray<struct FPropertyBagPropertyDesc>       PropertyDescs;                                     // 0x00C8(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyBag">();
	}
	static class UPropertyBag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyBag>();
	}
};
static_assert(alignof(UPropertyBag) == 0x000008, "Wrong alignment on UPropertyBag");
static_assert(sizeof(UPropertyBag) == 0x0000E0, "Wrong size on UPropertyBag");
static_assert(offsetof(UPropertyBag, PropertyDescs) == 0x0000C8, "Member 'UPropertyBag::PropertyDescs' has a wrong offset!");

// Class StructUtils.StructUtilsFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UStructUtilsFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool EqualEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B);
	static void GetInstancedStructValue(EStructUtilsResult* ExecResult, const struct FInstancedStruct& InstancedStruct, int32* Value);
	static EStructUtilsResult IsInstancedStructValid(const struct FInstancedStruct& InstancedStruct);
	static bool IsValid_InstancedStruct(const struct FInstancedStruct& InstancedStruct);
	static struct FInstancedStruct MakeInstancedStruct(const int32& Value);
	static bool NotEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B);
	static void Reset(struct FInstancedStruct& InstancedStruct, const class UScriptStruct* StructType);
	static void SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, const int32& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StructUtilsFunctionLibrary">();
	}
	static class UStructUtilsFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStructUtilsFunctionLibrary>();
	}
};
static_assert(alignof(UStructUtilsFunctionLibrary) == 0x000008, "Wrong alignment on UStructUtilsFunctionLibrary");
static_assert(sizeof(UStructUtilsFunctionLibrary) == 0x000030, "Wrong size on UStructUtilsFunctionLibrary");

}

