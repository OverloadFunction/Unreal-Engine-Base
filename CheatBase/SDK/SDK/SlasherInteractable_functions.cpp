﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlasherInteractable

#include "Basic.hpp"

#include "SlasherInteractable_classes.hpp"
#include "SlasherInteractable_parameters.hpp"


namespace SDK
{

// Function SlasherInteractable.SlasherInteractable_C.ExecuteUbergraph_SlasherInteractable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASlasherInteractable_C::ExecuteUbergraph_SlasherInteractable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlasherInteractable_C", "ExecuteUbergraph_SlasherInteractable");

	Params::SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SlasherInteractable.SlasherInteractable_C.GetSlasher
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKiller**                         Slasher                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ASlasherInteractable_C::GetSlasher(class AKiller** Slasher)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlasherInteractable_C", "GetSlasher");

	Params::SlasherInteractable_C_GetSlasher Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Slasher != nullptr)
		*Slasher = Parms.Slasher;
}


// Function SlasherInteractable.SlasherInteractable_C.InitInteractable
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ASlasherInteractable_C::InitInteractable(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlasherInteractable_C", "InitInteractable");

	Params::SlasherInteractable_C_InitInteractable Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SlasherInteractable.SlasherInteractable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASlasherInteractable_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlasherInteractable_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SlasherInteractable.SlasherInteractable_C.IsInteractionPossibleInternal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const class UInteractor*                Interactor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const class UInteractionDefinition*     definition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EInputInteractionType                   interactionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ASlasherInteractable_C::IsInteractionPossibleInternal(class ADBDPlayer* Player, const class UInteractor* Interactor, const class UInteractionDefinition* definition, EInputInteractionType interactionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlasherInteractable_C", "IsInteractionPossibleInternal");

	Params::SlasherInteractable_C_IsInteractionPossibleInternal Parms{};

	Parms.Player = Player;
	Parms.Interactor = Interactor;
	Parms.definition = definition;
	Parms.interactionType = interactionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

