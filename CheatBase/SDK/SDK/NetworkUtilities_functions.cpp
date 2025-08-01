﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetworkUtilities

#include "Basic.hpp"

#include "NetworkUtilities_classes.hpp"
#include "NetworkUtilities_parameters.hpp"


namespace SDK
{

// Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// float                                   serverTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetSynchedClock::Client_ReportServerTime(float serverTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetSynchedClock", "Client_ReportServerTime");

	Params::NetSynchedClock_Client_ReportServerTime Parms{};

	Parms.serverTime = serverTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UNetSynchedClock::Server_RequestServerTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetSynchedClock", "Server_RequestServerTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.NetUtils.IsDedicatedServerInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetUtils::IsDedicatedServerInstance(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NetUtils", "IsDedicatedServerInstance");

	Params::NetUtils_IsDedicatedServerInstance Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// const TArray<struct FGuid>&             Fences                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ANetworkFenceActor::Client_AllPassedFence(const TArray<struct FGuid>& Fences)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetworkFenceActor", "Client_AllPassedFence");

	Params::NetworkFenceActor_Client_AllPassedFence Parms{};

	Parms.Fences = std::move(Fences);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// const TArray<struct FGuid>&             Fences                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ANetworkFenceActor::Server_ClientPassedFence(const TArray<struct FGuid>& Fences)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetworkFenceActor", "Server_ClientPassedFence");

	Params::NetworkFenceActor_Server_ClientPassedFence Parms{};

	Parms.Fences = std::move(Fences);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// const bool                              Enabled                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              Channel                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerCorrectionDisablerComponent::Multicast_SetServerCorrectionEnabled(const bool Enabled, const struct FGameplayTag& Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerCorrectionDisablerComponent", "Multicast_SetServerCorrectionEnabled");

	Params::ServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled Parms{};

	Parms.Enabled = Enabled;
	Parms.Channel = std::move(Channel);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const bool                              Enabled                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              Channel                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerCorrectionDisablerComponent::SetServerCorrectionEnabled(const bool Enabled, const struct FGameplayTag& Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerCorrectionDisablerComponent", "SetServerCorrectionEnabled");

	Params::ServerCorrectionDisablerComponent_SetServerCorrectionEnabled Parms{};

	Parms.Enabled = Enabled;
	Parms.Channel = std::move(Channel);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UServerCorrectionDisablerComponent::GetServerCorrectionEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerCorrectionDisablerComponent", "GetServerCorrectionEnabled");

	Params::ServerCorrectionDisablerComponent_GetServerCorrectionEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.CreateTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Owner                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTimerObject*                     ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTimerObject* UTimerObject::CreateTimer(class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TimerObject", "CreateTimer");

	Params::TimerObject_CreateTimer Parms{};

	Parms.Owner = Owner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.Authority_Clear
// (Final, Native, Public, BlueprintCallable)

void UTimerObject::Authority_Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "Authority_Clear");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.TimerObject.Authority_Pause
// (Final, Native, Public, BlueprintCallable)

void UTimerObject::Authority_Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "Authority_Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.TimerObject.Authority_SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    paused                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimerObject::Authority_SetPaused(bool paused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "Authority_SetPaused");

	Params::TimerObject_Authority_SetPaused Parms{};

	Parms.paused = paused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.TimerObject.Authority_Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Duration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimerObject::Authority_Start(float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "Authority_Start");

	Params::TimerObject_Authority_Start Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.TimerObject.Authority_Unpause
// (Final, Native, Public, BlueprintCallable)

void UTimerObject::Authority_Unpause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "Authority_Unpause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated
// (Final, Native, Private)
// Parameters:
// const struct FReplicationTimerData&     oldData                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UTimerObject::OnRep_TimerDataUpdated(const struct FReplicationTimerData& oldData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "OnRep_TimerDataUpdated");

	Params::TimerObject_OnRep_TimerDataUpdated Parms{};

	Parms.oldData = std::move(oldData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NetworkUtilities.TimerObject.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimerObject::GetDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "GetDuration");

	Params::TimerObject_GetDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimerObject::GetElapsedTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "GetElapsedTime");

	Params::TimerObject_GetElapsedTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetElapsedTimePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimerObject::GetElapsedTimePercent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "GetElapsedTimePercent");

	Params::TimerObject_GetElapsedTimePercent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetRemainingTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimerObject::GetRemainingTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "GetRemainingTime");

	Params::TimerObject_GetRemainingTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetRemainingTimePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimerObject::GetRemainingTimePercent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "GetRemainingTimePercent");

	Params::TimerObject_GetRemainingTimePercent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTimerObject::IsDone() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "IsDone");

	Params::TimerObject_IsDone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTimerObject::IsPaused() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "IsPaused");

	Params::TimerObject_IsPaused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NetworkUtilities.TimerObject.IsTimerActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTimerObject::IsTimerActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimerObject", "IsTimerActive");

	Params::TimerObject_IsTimerActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

