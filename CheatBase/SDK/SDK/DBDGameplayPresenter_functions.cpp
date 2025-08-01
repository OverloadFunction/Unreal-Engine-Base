﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDGameplayPresenter

#include "Basic.hpp"

#include "DBDGameplayPresenter_classes.hpp"
#include "DBDGameplayPresenter_parameters.hpp"


namespace SDK
{

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged
// (Final, Native, Private)
// Parameters:
// const bool                              isCrouched                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USurvivorStatusComponent::OnCrouchChanged(const bool isCrouched)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "OnCrouchChanged");

	Params::SurvivorStatusComponent_OnCrouchChanged Parms{};

	Parms.isCrouched = isCrouched;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged
// (Final, Native, Private)

void USurvivorStatusComponent::OnGuidedStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "OnGuidedStateChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged
// (Final, Native, Private)

void USurvivorStatusComponent::OnHookedStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "OnHookedStateChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged
// (Final, Native, Private)
// Parameters:
// const bool                              isRunningAndMoving                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USurvivorStatusComponent::OnRunningAndMovementChanged(const bool isRunningAndMoving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "OnRunningAndMovementChanged");

	Params::SurvivorStatusComponent_OnRunningAndMovementChanged Parms{};

	Parms.isRunningAndMoving = isRunningAndMoving;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange
// (Event, Public, BlueprintEvent)

void USurvivorStatusComponent::OnSurivorStatusChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "OnSurivorStatusChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged
// (Final, Native, Private)
// Parameters:
// const EHealthState                      oldDamageState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const EHealthState                      newDamageState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USurvivorStatusComponent::OnSuvivorDamaged(const EHealthState oldDamageState, const EHealthState newDamageState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "OnSuvivorDamaged");

	Params::SurvivorStatusComponent_OnSuvivorDamaged Parms{};

	Parms.oldDamageState = oldDamageState;
	Parms.newDamageState = newDamageState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded
// (Final, Native, Private)

void USurvivorStatusComponent::OnValidatedInteractionEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "OnValidatedInteractionEnded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted
// (Final, Native, Private)

void USurvivorStatusComponent::OnValidatedInteractionStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "OnValidatedInteractionStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                                  currentMovementSpeed                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                                  percentMovementSpeed                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                                  maximumMovementSpeed                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USurvivorStatusComponent::GetMovementSpeed(float* currentMovementSpeed, float* percentMovementSpeed, float* maximumMovementSpeed) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "GetMovementSpeed");

	Params::SurvivorStatusComponent_GetMovementSpeed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (currentMovementSpeed != nullptr)
		*currentMovementSpeed = Parms.currentMovementSpeed;

	if (percentMovementSpeed != nullptr)
		*percentMovementSpeed = Parms.percentMovementSpeed;

	if (maximumMovementSpeed != nullptr)
		*maximumMovementSpeed = Parms.maximumMovementSpeed;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsCaptured() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsCaptured");

	Params::SurvivorStatusComponent_IsCaptured Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsCrouching() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsCrouching");

	Params::SurvivorStatusComponent_IsCrouching Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsDead() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsDead");

	Params::SurvivorStatusComponent_IsDead Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsDying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsDying");

	Params::SurvivorStatusComponent_IsDying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsGettingSacrificed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsGettingSacrificed");

	Params::SurvivorStatusComponent_IsGettingSacrificed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsGettingStrangled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsGettingStrangled");

	Params::SurvivorStatusComponent_IsGettingStrangled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsHarpooned() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsHarpooned");

	Params::SurvivorStatusComponent_IsHarpooned Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsHealing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsHealing");

	Params::SurvivorStatusComponent_IsHealing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsHiding() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsHiding");

	Params::SurvivorStatusComponent_IsHiding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsHooked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsHooked");

	Params::SurvivorStatusComponent_IsHooked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsInjured() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsInjured");

	Params::SurvivorStatusComponent_IsInjured Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsRunning() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsRunning");

	Params::SurvivorStatusComponent_IsRunning Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USurvivorStatusComponent::IsSleeping() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorStatusComponent", "IsSleeping");

	Params::SurvivorStatusComponent_IsSleeping Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

