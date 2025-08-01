﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AnniversaryLoadingHintsDisplay

#include "Basic.hpp"

#include "WBP_AnniversaryLoadingHintsDisplay_classes.hpp"
#include "WBP_AnniversaryLoadingHintsDisplay_parameters.hpp"


namespace SDK
{

// Function WBP_AnniversaryLoadingHintsDisplay.WBP_AnniversaryLoadingHintsDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AnniversaryLoadingHintsDisplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AnniversaryLoadingHintsDisplay_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AnniversaryLoadingHintsDisplay.WBP_AnniversaryLoadingHintsDisplay_C.ExecuteUbergraph_WBP_AnniversaryLoadingHintsDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AnniversaryLoadingHintsDisplay_C::ExecuteUbergraph_WBP_AnniversaryLoadingHintsDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AnniversaryLoadingHintsDisplay_C", "ExecuteUbergraph_WBP_AnniversaryLoadingHintsDisplay");

	Params::WBP_AnniversaryLoadingHintsDisplay_C_ExecuteUbergraph_WBP_AnniversaryLoadingHintsDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AnniversaryLoadingHintsDisplay.WBP_AnniversaryLoadingHintsDisplay_C.OnFadeInComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUITweenInstance*                 tween                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AnniversaryLoadingHintsDisplay_C::OnFadeInComplete(class UUITweenInstance* tween)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AnniversaryLoadingHintsDisplay_C", "OnFadeInComplete");

	Params::WBP_AnniversaryLoadingHintsDisplay_C_OnFadeInComplete Parms{};

	Parms.tween = tween;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AnniversaryLoadingHintsDisplay.WBP_AnniversaryLoadingHintsDisplay_C.OnFadeOutComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUITweenInstance*                 tween                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AnniversaryLoadingHintsDisplay_C::OnFadeOutComplete(class UUITweenInstance* tween)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AnniversaryLoadingHintsDisplay_C", "OnFadeOutComplete");

	Params::WBP_AnniversaryLoadingHintsDisplay_C_OnFadeOutComplete Parms{};

	Parms.tween = tween;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AnniversaryLoadingHintsDisplay.WBP_AnniversaryLoadingHintsDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AnniversaryLoadingHintsDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AnniversaryLoadingHintsDisplay_C", "PreConstruct");

	Params::WBP_AnniversaryLoadingHintsDisplay_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AnniversaryLoadingHintsDisplay.WBP_AnniversaryLoadingHintsDisplay_C.StartFadeSequence
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   FadeOutDelay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AnniversaryLoadingHintsDisplay_C::StartFadeSequence(float FadeOutDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AnniversaryLoadingHintsDisplay_C", "StartFadeSequence");

	Params::WBP_AnniversaryLoadingHintsDisplay_C_StartFadeSequence Parms{};

	Parms.FadeOutDelay = FadeOutDelay;

	UObject::ProcessEvent(Func, &Parms);
}

}

