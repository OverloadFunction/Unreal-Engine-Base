﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTagUtilities

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct GameplayTagUtilities.TagStateBoolBase
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) FTagStateBoolBase
{
public:
	bool                                          _isTrue;                                           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1[0x47];                                       // 0x0001(0x0047)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTagStateBoolBase) == 0x000008, "Wrong alignment on FTagStateBoolBase");
static_assert(sizeof(FTagStateBoolBase) == 0x000048, "Wrong size on FTagStateBoolBase");
static_assert(offsetof(FTagStateBoolBase, _isTrue) == 0x000000, "Member 'FTagStateBoolBase::_isTrue' has a wrong offset!");

// ScriptStruct GameplayTagUtilities.QueryInstanceCollection
// 0x0010 (0x0010 - 0x0000)
struct FQueryInstanceCollection final
{
public:
	TArray<class UTagContainerQueryInstance*>     Instances;                                         // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FQueryInstanceCollection) == 0x000008, "Wrong alignment on FQueryInstanceCollection");
static_assert(sizeof(FQueryInstanceCollection) == 0x000010, "Wrong size on FQueryInstanceCollection");
static_assert(offsetof(FQueryInstanceCollection, Instances) == 0x000000, "Member 'FQueryInstanceCollection::Instances' has a wrong offset!");

// ScriptStruct GameplayTagUtilities.TagStateBool
// 0x0000 (0x0048 - 0x0048)
struct FTagStateBool final : public FTagStateBoolBase
{
};
static_assert(alignof(FTagStateBool) == 0x000008, "Wrong alignment on FTagStateBool");
static_assert(sizeof(FTagStateBool) == 0x000048, "Wrong size on FTagStateBool");

}

