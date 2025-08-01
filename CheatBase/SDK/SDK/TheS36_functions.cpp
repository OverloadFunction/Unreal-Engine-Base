﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS36

#include "Basic.hpp"

#include "TheS36_classes.hpp"
#include "TheS36_parameters.hpp"


namespace SDK
{

// Function TheS36.S36P01.Authority_OnIsRunningAndMovingChanged
// (Final, Native, Private)
// Parameters:
// const bool                              isRunningAndMoving                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US36P01::Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S36P01", "Authority_OnIsRunningAndMovingChanged");

	Params::S36P01_Authority_OnIsRunningAndMovingChanged Parms{};

	Parms.isRunningAndMoving = isRunningAndMoving;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheS36.S36P01.GetActivationDurationAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float US36P01::GetActivationDurationAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S36P01", "GetActivationDurationAtLevel");

	Params::S36P01_GetActivationDurationAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheS36.S36P01.GetExhaustedEffectDurationAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float US36P01::GetExhaustedEffectDurationAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S36P01", "GetExhaustedEffectDurationAtLevel");

	Params::S36P01_GetExhaustedEffectDurationAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheS36.S36P01.GetHasteEffectDurationSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float US36P01::GetHasteEffectDurationSeconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S36P01", "GetHasteEffectDurationSeconds");

	Params::S36P01_GetHasteEffectDurationSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheS36.S36P01.GetHasteEffectMovementSpeedIncrease
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float US36P01::GetHasteEffectMovementSpeedIncrease() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S36P01", "GetHasteEffectMovementSpeedIncrease");

	Params::S36P01_GetHasteEffectMovementSpeedIncrease Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheS36.S36P02.OnRecoverAbilityButtonTriggeredCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ASurvivor*                        OwningSurvivor                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US36P02::OnRecoverAbilityButtonTriggeredCosmetic(class ASurvivor* OwningSurvivor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S36P02", "OnRecoverAbilityButtonTriggeredCosmetic");

	Params::S36P02_OnRecoverAbilityButtonTriggeredCosmetic Parms{};

	Parms.OwningSurvivor = OwningSurvivor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TheS36.S36P02.GetPerkActivationTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float US36P02::GetPerkActivationTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S36P02", "GetPerkActivationTime");

	Params::S36P02_GetPerkActivationTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheS36.S36P03.OnRep_IsStatusEffectActiveOnOwningSurvivor
// (Final, Native, Private)

void US36P03::OnRep_IsStatusEffectActiveOnOwningSurvivor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S36P03", "OnRep_IsStatusEffectActiveOnOwningSurvivor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

