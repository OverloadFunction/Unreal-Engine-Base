﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActionSpeedProficiency

#include "Basic.hpp"

#include "ActionSpeedProficiency_classes.hpp"
#include "ActionSpeedProficiency_parameters.hpp"


namespace SDK
{

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class UChargeableInteractionDefinition*Chargeable_Interaction                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ADBDPlayer*                       Interacting_Player                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UActionSpeedProficiency_C::Compute_Overall_speed_including_multiple_interactors(const class UChargeableInteractionDefinition* Chargeable_Interaction, class ADBDPlayer* Interacting_Player) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSpeedProficiency_C", "Compute Overall speed including multiple interactors");

	Params::ActionSpeedProficiency_C_Compute_Overall_speed_including_multiple_interactors Parms{};

	Parms.Chargeable_Interaction = Chargeable_Interaction;
	Parms.Interacting_Player = Interacting_Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInteractionDefinition*           Chargeable_Interaction                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ADBDPlayer*                       Interacting_Player                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ADBDPlayer*>               ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class ADBDPlayer*> UActionSpeedProficiency_C::FetchInteractingPlayers(class UInteractionDefinition* Chargeable_Interaction, class ADBDPlayer* Interacting_Player) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSpeedProficiency_C", "FetchInteractingPlayers");

	Params::ActionSpeedProficiency_C_FetchInteractingPlayers Parms{};

	Parms.Chargeable_Interaction = Chargeable_Interaction;
	Parms.Interacting_Player = Interacting_Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const class UChargeableInteractionDefinition*chargeableInteraction                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const class ADBDPlayer*                 Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UActionSpeedProficiency_C::GetValue(const class UChargeableInteractionDefinition* chargeableInteraction, const class ADBDPlayer* Player) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSpeedProficiency_C", "GetValue");

	Params::ActionSpeedProficiency_C_GetValue Parms{};

	Parms.chargeableInteraction = chargeableInteraction;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition* Chargeable_Interaction                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UActionSpeedProficiency_C::ShouldAndCanShowMultipleActorsSpeedProficiency(class UChargeableInteractionDefinition* Chargeable_Interaction) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSpeedProficiency_C", "ShouldAndCanShowMultipleActorsSpeedProficiency");

	Params::ActionSpeedProficiency_C_ShouldAndCanShowMultipleActorsSpeedProficiency Parms{};

	Parms.Chargeable_Interaction = Chargeable_Interaction;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

