﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SystemUtilities

#include "Basic.hpp"


namespace SDK::Params
{

// Function SystemUtilities.BoolExt.ToString
// 0x0018 (0x0018 - 0x0000)
struct BoolExt_ToString final
{
public:
	bool                                          boolToConvert;                                     // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BoolExt_ToString) == 0x000008, "Wrong alignment on BoolExt_ToString");
static_assert(sizeof(BoolExt_ToString) == 0x000018, "Wrong size on BoolExt_ToString");
static_assert(offsetof(BoolExt_ToString, boolToConvert) == 0x000000, "Member 'BoolExt_ToString::boolToConvert' has a wrong offset!");
static_assert(offsetof(BoolExt_ToString, ReturnValue) == 0x000008, "Member 'BoolExt_ToString::ReturnValue' has a wrong offset!");

// Function SystemUtilities.PlatformUtilities.GetPlatform
// 0x0010 (0x0010 - 0x0000)
struct PlatformUtilities_GetPlatform final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PlatformUtilities_GetPlatform) == 0x000008, "Wrong alignment on PlatformUtilities_GetPlatform");
static_assert(sizeof(PlatformUtilities_GetPlatform) == 0x000010, "Wrong size on PlatformUtilities_GetPlatform");
static_assert(offsetof(PlatformUtilities_GetPlatform, ReturnValue) == 0x000000, "Member 'PlatformUtilities_GetPlatform::ReturnValue' has a wrong offset!");

}

