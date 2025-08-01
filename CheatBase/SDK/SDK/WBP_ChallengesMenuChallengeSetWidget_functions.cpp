﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChallengesMenuChallengeSetWidget

#include "Basic.hpp"

#include "WBP_ChallengesMenuChallengeSetWidget_classes.hpp"
#include "WBP_ChallengesMenuChallengeSetWidget_parameters.hpp"


namespace SDK
{

// Function WBP_ChallengesMenuChallengeSetWidget.WBP_ChallengesMenuChallengeSetWidget_C.ExecuteUbergraph_WBP_ChallengesMenuChallengeSetWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengesMenuChallengeSetWidget_C::ExecuteUbergraph_WBP_ChallengesMenuChallengeSetWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuChallengeSetWidget_C", "ExecuteUbergraph_WBP_ChallengesMenuChallengeSetWidget");

	Params::WBP_ChallengesMenuChallengeSetWidget_C_ExecuteUbergraph_WBP_ChallengesMenuChallengeSetWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengesMenuChallengeSetWidget.WBP_ChallengesMenuChallengeSetWidget_C.OnLoaded_4B9E154D44076F2EAE239EA93685A753
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengesMenuChallengeSetWidget_C::OnLoaded_4B9E154D44076F2EAE239EA93685A753(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuChallengeSetWidget_C", "OnLoaded_4B9E154D44076F2EAE239EA93685A753");

	Params::WBP_ChallengesMenuChallengeSetWidget_C_OnLoaded_4B9E154D44076F2EAE239EA93685A753 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengesMenuChallengeSetWidget.WBP_ChallengesMenuChallengeSetWidget_C.RefreshMenuSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_ChallengesMenuChallengeSetWidget_C::RefreshMenuSkin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuChallengeSetWidget_C", "RefreshMenuSkin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ChallengesMenuChallengeSetWidget.WBP_ChallengesMenuChallengeSetWidget_C.SetEventVisuals
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    eventFrameLabel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChallengesMenuChallengeSetWidget_C::SetEventVisuals(const class FString& eventFrameLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuChallengeSetWidget_C", "SetEventVisuals");

	Params::WBP_ChallengesMenuChallengeSetWidget_C_SetEventVisuals Parms{};

	Parms.eventFrameLabel = std::move(eventFrameLabel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengesMenuChallengeSetWidget.WBP_ChallengesMenuChallengeSetWidget_C.UpdateColorsOnEachChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              PreviewBackgroundTint_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengesMenuChallengeSetWidget_C::UpdateColorsOnEachChild(const struct FLinearColor& PreviewBackgroundTint_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuChallengeSetWidget_C", "UpdateColorsOnEachChild");

	Params::WBP_ChallengesMenuChallengeSetWidget_C_UpdateColorsOnEachChild Parms{};

	Parms.PreviewBackgroundTint_0 = std::move(PreviewBackgroundTint_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengesMenuChallengeSetWidget.WBP_ChallengesMenuChallengeSetWidget_C.UpdateTabBackground
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>Soft_Material                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_ChallengesMenuChallengeSetWidget_C::UpdateTabBackground(TSoftObjectPtr<class UMaterialInterface> Soft_Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuChallengeSetWidget_C", "UpdateTabBackground");

	Params::WBP_ChallengesMenuChallengeSetWidget_C_UpdateTabBackground Parms{};

	Parms.Soft_Material = Soft_Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengesMenuChallengeSetWidget.WBP_ChallengesMenuChallengeSetWidget_C.GetRitualsInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IChallengesMenuRitualsViewInterface>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IChallengesMenuRitualsViewInterface> UWBP_ChallengesMenuChallengeSetWidget_C::GetRitualsInterface() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuChallengeSetWidget_C", "GetRitualsInterface");

	Params::WBP_ChallengesMenuChallengeSetWidget_C_GetRitualsInterface Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

