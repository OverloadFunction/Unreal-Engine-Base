﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbianceManagerSystems

#include "Basic.hpp"

#include "AmbianceManagerSystems_classes.hpp"
#include "AmbianceManagerSystems_parameters.hpp"


namespace SDK
{

// Function AmbianceManagerSystems.LobbyAmbiancesManagement.ManageAmbianceForLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGMAmbianceManager*               ambianceManager                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bOverrideTransition                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const float                             TransitionDuration                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              GameplayTag                                            (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const EDBDCameraViewType                CurrentState                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const EDBDCameraViewType                newState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAmbianceManagerDataAsset*        shopAmbiance                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAmbianceManagerDataAsset*        archiveAmbiance                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAmbianceManagerDataAsset*        moriPreviewAmbiance                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyAmbiancesManagement::ManageAmbianceForLobby(class UGMAmbianceManager* ambianceManager, const bool bOverrideTransition, const float TransitionDuration, const struct FGameplayTag& GameplayTag, const EDBDCameraViewType CurrentState, const EDBDCameraViewType newState, class UAmbianceManagerDataAsset* shopAmbiance, class UAmbianceManagerDataAsset* archiveAmbiance, class UAmbianceManagerDataAsset* moriPreviewAmbiance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LobbyAmbiancesManagement", "ManageAmbianceForLobby");

	Params::LobbyAmbiancesManagement_ManageAmbianceForLobby Parms{};

	Parms.ambianceManager = ambianceManager;
	Parms.bOverrideTransition = bOverrideTransition;
	Parms.TransitionDuration = TransitionDuration;
	Parms.GameplayTag = std::move(GameplayTag);
	Parms.CurrentState = CurrentState;
	Parms.newState = newState;
	Parms.shopAmbiance = shopAmbiance;
	Parms.archiveAmbiance = archiveAmbiance;
	Parms.moriPreviewAmbiance = moriPreviewAmbiance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AmbianceManagerSystems.LobbyAmbiancesManagement.SetOfferingState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGMAmbianceManager*               ambianceManager                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    isEnable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyAmbiancesManagement::SetOfferingState(class UGMAmbianceManager* ambianceManager, bool isEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LobbyAmbiancesManagement", "SetOfferingState");

	Params::LobbyAmbiancesManagement_SetOfferingState Parms{};

	Parms.ambianceManager = ambianceManager;
	Parms.isEnable = isEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

