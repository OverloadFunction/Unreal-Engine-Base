﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeUtilities

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TimeUtilities.DBDTimeUtilities.IsDateAfterCurrentDateWithEpsilon
// 0x0010 (0x0010 - 0x0000)
struct DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon final
{
public:
	struct FDateTime                              Date;                                              // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon) == 0x000008, "Wrong alignment on DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon");
static_assert(sizeof(DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon) == 0x000010, "Wrong size on DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon");
static_assert(offsetof(DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon, Date) == 0x000000, "Member 'DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon::Date' has a wrong offset!");
static_assert(offsetof(DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon, ReturnValue) == 0x000008, "Member 'DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon::ReturnValue' has a wrong offset!");

// Function TimeUtilities.DBDTimeUtilities.IsDateTimeValid
// 0x0010 (0x0010 - 0x0000)
struct DBDTimeUtilities_IsDateTimeValid final
{
public:
	struct FDateTime                              DateTime;                                          // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DBDTimeUtilities_IsDateTimeValid) == 0x000008, "Wrong alignment on DBDTimeUtilities_IsDateTimeValid");
static_assert(sizeof(DBDTimeUtilities_IsDateTimeValid) == 0x000010, "Wrong size on DBDTimeUtilities_IsDateTimeValid");
static_assert(offsetof(DBDTimeUtilities_IsDateTimeValid, DateTime) == 0x000000, "Member 'DBDTimeUtilities_IsDateTimeValid::DateTime' has a wrong offset!");
static_assert(offsetof(DBDTimeUtilities_IsDateTimeValid, ReturnValue) == 0x000008, "Member 'DBDTimeUtilities_IsDateTimeValid::ReturnValue' has a wrong offset!");

}

