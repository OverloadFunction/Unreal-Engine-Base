﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS34

#include "Basic.hpp"

#include "TheS34_classes.hpp"
#include "TheS34_parameters.hpp"


namespace SDK
{

// Function TheS34.S34P01.Authority_OnAccumulateRedirectedCharge
// (Final, Native, Public)
// Parameters:
// const float                             ChargeAmount                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const float                             maxCharge                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P01::Authority_OnAccumulateRedirectedCharge(const float ChargeAmount, const float maxCharge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "Authority_OnAccumulateRedirectedCharge");

	Params::S34P01_Authority_OnAccumulateRedirectedCharge Parms{};

	Parms.ChargeAmount = ChargeAmount;
	Parms.maxCharge = maxCharge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P01.Authority_OnSkillCheckResponse
// (Final, Native, Private)
// Parameters:
// bool                                    Success                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Bonus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ADBDPlayer*                       Player                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    TriggerLoudNoise                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    hadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESkillCheckCustomType                   Type                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ChargeChange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P01::Authority_OnSkillCheckResponse(bool Success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "Authority_OnSkillCheckResponse");

	Params::S34P01_Authority_OnSkillCheckResponse Parms{};

	Parms.Success = Success;
	Parms.Bonus = Bonus;
	Parms.Player = Player;
	Parms.TriggerLoudNoise = TriggerLoudNoise;
	Parms.hadInput = hadInput;
	Parms.Type = Type;
	Parms.ChargeChange = ChargeChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P01.Cosmetic_OnFullCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       OwningPlayer                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P01::Cosmetic_OnFullCharge(class ADBDPlayer* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "Cosmetic_OnFullCharge");

	Params::S34P01_Cosmetic_OnFullCharge Parms{};

	Parms.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TheS34.S34P01.Cosmetic_OnStartChargingPerk
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       OwningPlayer                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P01::Cosmetic_OnStartChargingPerk(class ADBDPlayer* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "Cosmetic_OnStartChargingPerk");

	Params::S34P01_Cosmetic_OnStartChargingPerk Parms{};

	Parms.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TheS34.S34P01.Cosmetic_OnStopChargingPerk
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       OwningPlayer                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P01::Cosmetic_OnStopChargingPerk(class ADBDPlayer* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "Cosmetic_OnStopChargingPerk");

	Params::S34P01_Cosmetic_OnStopChargingPerk Parms{};

	Parms.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TheS34.S34P01.Cosmetic_OnUseCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       OwningPlayer                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P01::Cosmetic_OnUseCharge(class ADBDPlayer* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "Cosmetic_OnUseCharge");

	Params::S34P01_Cosmetic_OnUseCharge Parms{};

	Parms.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TheS34.S34P01.Multicast_OnUseTokens
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void US34P01::Multicast_OnUseTokens()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "Multicast_OnUseTokens");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P01.OnDamageStateChanged
// (Final, Native, Private)
// Parameters:
// EHealthState                            oldDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EHealthState                            currentDamageState                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P01::OnDamageStateChanged(EHealthState oldDamageState, EHealthState currentDamageState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "OnDamageStateChanged");

	Params::S34P01_OnDamageStateChanged Parms{};

	Parms.oldDamageState = oldDamageState;
	Parms.currentDamageState = currentDamageState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P01.OnRep_IsAccumulatingTokens
// (Final, Native, Private)

void US34P01::OnRep_IsAccumulatingTokens()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "OnRep_IsAccumulatingTokens");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P01.OnRep_IsPerkActive
// (Final, Native, Private)

void US34P01::OnRep_IsPerkActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "OnRep_IsPerkActive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P01.Server_AbilityTwoPressed
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// bool                                    IsPressed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P01::Server_AbilityTwoPressed(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "Server_AbilityTwoPressed");

	Params::S34P01_Server_AbilityTwoPressed Parms{};

	Parms.IsPressed = IsPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P01.GetInitialCountdownAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float US34P01::GetInitialCountdownAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "GetInitialCountdownAtLevel");

	Params::S34P01_GetInitialCountdownAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheS34.S34P01.IsPerkActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US34P01::IsPerkActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P01", "IsPerkActive");

	Params::S34P01_IsPerkActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheS34.S34P03.Authority_OnIntroComplete
// (Final, Native, Private)

void US34P03::Authority_OnIntroComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P03", "Authority_OnIntroComplete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P03.Authority_OnOwnerDamageStateChanged
// (Final, Native, Private)
// Parameters:
// EHealthState                            oldDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EHealthState                            newDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US34P03::Authority_OnOwnerDamageStateChanged(EHealthState oldDamageState, EHealthState newDamageState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P03", "Authority_OnOwnerDamageStateChanged");

	Params::S34P03_Authority_OnOwnerDamageStateChanged Parms{};

	Parms.oldDamageState = oldDamageState;
	Parms.newDamageState = newDamageState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheS34.S34P03.GetCooldownDurationAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float US34P03::GetCooldownDurationAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P03", "GetCooldownDurationAtLevel");

	Params::S34P03_GetCooldownDurationAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheS34.S34P03.GetRepairSpeedAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float US34P03::GetRepairSpeedAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S34P03", "GetRepairSpeedAtLevel");

	Params::S34P03_GetRepairSpeedAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

