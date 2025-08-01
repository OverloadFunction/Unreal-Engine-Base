﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeUtilities

#include "Basic.hpp"

#include "TimeUtilities_classes.hpp"
#include "TimeUtilities_parameters.hpp"


namespace SDK
{

// Function TimeUtilities.DBDTimeUtilities.IsDateAfterCurrentDateWithEpsilon
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FDateTime&                 Date                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDBDTimeUtilities::IsDateAfterCurrentDateWithEpsilon(const struct FDateTime& Date)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DBDTimeUtilities", "IsDateAfterCurrentDateWithEpsilon");

	Params::DBDTimeUtilities_IsDateAfterCurrentDateWithEpsilon Parms{};

	Parms.Date = std::move(Date);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TimeUtilities.DBDTimeUtilities.IsDateTimeValid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FDateTime&                 DateTime                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDBDTimeUtilities::IsDateTimeValid(const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DBDTimeUtilities", "IsDateTimeValid");

	Params::DBDTimeUtilities_IsDateTimeValid Parms{};

	Parms.DateTime = std::move(DateTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

