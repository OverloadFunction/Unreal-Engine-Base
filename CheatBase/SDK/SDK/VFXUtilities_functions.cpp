﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VFXUtilities

#include "Basic.hpp"

#include "VFXUtilities_classes.hpp"
#include "VFXUtilities_parameters.hpp"


namespace SDK
{

// Function VFXUtilities.VFXUtilities.SetParticleSystemActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFXSystemComponent*               ParticleSystem                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Active                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Reset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVFXUtilities::SetParticleSystemActive(class UFXSystemComponent* ParticleSystem, bool Active, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFXUtilities", "SetParticleSystemActive");

	Params::VFXUtilities_SetParticleSystemActive Parms{};

	Parms.ParticleSystem = ParticleSystem;
	Parms.Active = Active;
	Parms.Reset = Reset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VFXUtilities.VFXUtilities.SetParticleSystemsActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const TSet<class UFXSystemComponent*>&  particleSystems                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                                    Active                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Reset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVFXUtilities::SetParticleSystemsActive(const TSet<class UFXSystemComponent*>& particleSystems, bool Active, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VFXUtilities", "SetParticleSystemsActive");

	Params::VFXUtilities_SetParticleSystemsActive Parms{};

	Parms.particleSystems = std::move(particleSystems);
	Parms.Active = Active;
	Parms.Reset = Reset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

