﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lunar2022

#include "Basic.hpp"

#include "Lunar2022_classes.hpp"
#include "Lunar2022_parameters.hpp"


namespace SDK
{

// Function Lunar2022.Lunar2022EventComponent.Authority_OnPlayerFinishPlaying
// (Final, Native, Private)
// Parameters:
// const class ADBDPlayerState*            PlayerState                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULunar2022EventComponent::Authority_OnPlayerFinishPlaying(const class ADBDPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lunar2022EventComponent", "Authority_OnPlayerFinishPlaying");

	Params::Lunar2022EventComponent_Authority_OnPlayerFinishPlaying Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Lunar2022.RedEnvelope.Cosmetic_OnAddEmberEffect
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// const class ADBDPlayer*                 OwningPlayer                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARedEnvelope::Cosmetic_OnAddEmberEffect(const class ADBDPlayer* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "Cosmetic_OnAddEmberEffect");

	Params::RedEnvelope_Cosmetic_OnAddEmberEffect Parms{};

	Parms.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// const class ADBDPlayer*                 interactingPlayer                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    isOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARedEnvelope::Cosmetic_OnInteractionStart(const class ADBDPlayer* interactingPlayer, bool isOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "Cosmetic_OnInteractionStart");

	Params::RedEnvelope_Cosmetic_OnInteractionStart Parms{};

	Parms.interactingPlayer = interactingPlayer;
	Parms.isOwner = isOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionStopped
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// const class ADBDPlayer*                 interactingPlayer                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    isOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARedEnvelope::Cosmetic_OnInteractionStopped(const class ADBDPlayer* interactingPlayer, bool isOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "Cosmetic_OnInteractionStopped");

	Params::RedEnvelope_Cosmetic_OnInteractionStopped Parms{};

	Parms.interactingPlayer = interactingPlayer;
	Parms.isOwner = isOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lunar2022.RedEnvelope.Cosmetic_OnInteractionUpdate
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// const class ADBDPlayer*                 interactingPlayer                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const float                             ChargePercent                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    isOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARedEnvelope::Cosmetic_OnInteractionUpdate(const class ADBDPlayer* interactingPlayer, const float ChargePercent, bool isOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "Cosmetic_OnInteractionUpdate");

	Params::RedEnvelope_Cosmetic_OnInteractionUpdate Parms{};

	Parms.interactingPlayer = interactingPlayer;
	Parms.ChargePercent = ChargePercent;
	Parms.isOwner = isOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lunar2022.RedEnvelope.Cosmetic_OnTriggerDisappearingVFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// const class ADBDPlayer*                 interactingPlayer                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    isOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    IsJackpot                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARedEnvelope::Cosmetic_OnTriggerDisappearingVFX(const class ADBDPlayer* interactingPlayer, bool isOwner, bool IsJackpot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "Cosmetic_OnTriggerDisappearingVFX");

	Params::RedEnvelope_Cosmetic_OnTriggerDisappearingVFX Parms{};

	Parms.interactingPlayer = interactingPlayer;
	Parms.isOwner = isOwner;
	Parms.IsJackpot = IsJackpot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lunar2022.RedEnvelope.Cosmetic_SetBackgroundVFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    isOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARedEnvelope::Cosmetic_SetBackgroundVFX(bool isOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "Cosmetic_SetBackgroundVFX");

	Params::RedEnvelope_Cosmetic_SetBackgroundVFX Parms{};

	Parms.isOwner = isOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lunar2022.RedEnvelope.OnLocallyObservedChanged
// (Final, Native, Public)

void ARedEnvelope::OnLocallyObservedChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "OnLocallyObservedChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Lunar2022.RedEnvelope.OnRep_OwnerPlayerState
// (Final, Native, Private)

void ARedEnvelope::OnRep_OwnerPlayerState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "OnRep_OwnerPlayerState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Lunar2022.RedEnvelope.OnRep_RedEnvelopeData
// (Final, Native, Private)

void ARedEnvelope::OnRep_RedEnvelopeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedEnvelope", "OnRep_RedEnvelopeData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

