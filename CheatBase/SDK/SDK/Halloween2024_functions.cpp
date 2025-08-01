﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Halloween2024

#include "Basic.hpp"

#include "Halloween2024_classes.hpp"
#include "Halloween2024_parameters.hpp"


namespace SDK
{

// Function Halloween2024.EscapeChaseAfterVoidBombQEEvaluator.OnChaseEnd
// (Final, Native, Private, HasOutParams)
// Parameters:
// const struct FGameplayTag&              gameEventType                                          (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameEventData&            GameEventData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEscapeChaseAfterVoidBombQEEvaluator::OnChaseEnd(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeChaseAfterVoidBombQEEvaluator", "OnChaseEnd");

	Params::EscapeChaseAfterVoidBombQEEvaluator_OnChaseEnd Parms{};

	Parms.gameEventType = std::move(gameEventType);
	Parms.GameEventData = std::move(GameEventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2024.EscapeChaseAfterVoidBombQEEvaluator.OnVoidBombDropped
// (Final, Native, Private, HasOutParams)
// Parameters:
// const struct FGameplayTag&              gameEventType                                          (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameEventData&            GameEventData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEscapeChaseAfterVoidBombQEEvaluator::OnVoidBombDropped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeChaseAfterVoidBombQEEvaluator", "OnVoidBombDropped");

	Params::EscapeChaseAfterVoidBombQEEvaluator_OnVoidBombDropped Parms{};

	Parms.gameEventType = std::move(gameEventType);
	Parms.GameEventData = std::move(GameEventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2024.Halloween2024EventCheatComponent.DBD_SetVoidBombCrafted
// (Final, Exec, Native, Public)
// Parameters:
// bool                                    crafted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHalloween2024EventCheatComponent::DBD_SetVoidBombCrafted(bool crafted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Halloween2024EventCheatComponent", "DBD_SetVoidBombCrafted");

	Params::Halloween2024EventCheatComponent_DBD_SetVoidBombCrafted Parms{};

	Parms.crafted = crafted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2024.VoidEmpowermentWidgetComponent.OnHudPresenterReady
// (Final, Native, Private)

void UVoidEmpowermentWidgetComponent::OnHudPresenterReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoidEmpowermentWidgetComponent", "OnHudPresenterReady");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2024.VoidEmpowermentWidgetComponent.OnInteractorLockChangedEvent
// (Final, Native, Private)
// Parameters:
// bool                                    interacting                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ADBDPlayer*                       interactingPlayer                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoidEmpowermentWidgetComponent::OnInteractorLockChangedEvent(bool interacting, class ADBDPlayer* interactingPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoidEmpowermentWidgetComponent", "OnInteractorLockChangedEvent");

	Params::VoidEmpowermentWidgetComponent_OnInteractorLockChangedEvent Parms{};

	Parms.interacting = interacting;
	Parms.interactingPlayer = interactingPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2024.VoidStation.Cosmetic_OnItemCrafted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    itemCrafted                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    killerItem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVoidStation::Cosmetic_OnItemCrafted(bool itemCrafted, bool killerItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoidStation", "Cosmetic_OnItemCrafted");

	Params::VoidStation_Cosmetic_OnItemCrafted Parms{};

	Parms.itemCrafted = itemCrafted;
	Parms.killerItem = killerItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Halloween2024.VoidStation.Cosmetic_OnPlayerDepositingEnergyChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsInteracting                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVoidStation::Cosmetic_OnPlayerDepositingEnergyChanged(bool IsInteracting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoidStation", "Cosmetic_OnPlayerDepositingEnergyChanged");

	Params::VoidStation_Cosmetic_OnPlayerDepositingEnergyChanged Parms{};

	Parms.IsInteracting = IsInteracting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Halloween2024.VoidStation.OnLocallyObservedChanged
// (Final, Native, Private)

void AVoidStation::OnLocallyObservedChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoidStation", "OnLocallyObservedChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2024.VoidStation.OnRep_PlayerCraftedVoidBomb
// (Final, Native, Private)

void AVoidStation::OnRep_PlayerCraftedVoidBomb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoidStation", "OnRep_PlayerCraftedVoidBomb");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Halloween2024.VoidStation.GetIsVoidBombSpawned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AVoidStation::GetIsVoidBombSpawned() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoidStation", "GetIsVoidBombSpawned");

	Params::VoidStation_GetIsVoidBombSpawned Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Halloween2024.VoidStationEnergyInteraction.OnRep_SpawnedChargeable
// (Final, Native, Private)

void UVoidStationEnergyInteraction::OnRep_SpawnedChargeable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoidStationEnergyInteraction", "OnRep_SpawnedChargeable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

