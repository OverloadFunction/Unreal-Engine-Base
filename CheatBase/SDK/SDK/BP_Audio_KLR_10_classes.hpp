﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Audio_KLR_10

#include "Basic.hpp"

#include "BP_Audio_KLR_Base_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Audio_KLR_10.BP_Audio_KLR_10_C
// 0x0000 (0x0228 - 0x0228)
class UBP_Audio_KLR_10_C final : public UBP_Audio_KLR_Base_C
{
public:
	void OnKillerSoundbankLoaded(EAkResult Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Audio_KLR_10_C">();
	}
	static class UBP_Audio_KLR_10_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Audio_KLR_10_C>();
	}
};
static_assert(alignof(UBP_Audio_KLR_10_C) == 0x000008, "Wrong alignment on UBP_Audio_KLR_10_C");
static_assert(sizeof(UBP_Audio_KLR_10_C) == 0x000228, "Wrong size on UBP_Audio_KLR_10_C");

}

