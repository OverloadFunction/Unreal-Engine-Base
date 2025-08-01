﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Audio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Audio.Audio_C
// 0x0008 (0x02B0 - 0x02A8)
class AAudio_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Audio(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Audio_C">();
	}
	static class AAudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAudio_C>();
	}
};
static_assert(alignof(AAudio_C) == 0x000008, "Wrong alignment on AAudio_C");
static_assert(sizeof(AAudio_C) == 0x0002B0, "Wrong size on AAudio_C");
static_assert(offsetof(AAudio_C, UberGraphFrame) == 0x0002A8, "Member 'AAudio_C::UberGraphFrame' has a wrong offset!");

}

