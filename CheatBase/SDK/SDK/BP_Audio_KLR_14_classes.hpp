﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Audio_KLR_14

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Audio_KLR_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Audio_KLR_14.BP_Audio_KLR_14_C
// 0x0008 (0x0230 - 0x0228)
class UBP_Audio_KLR_14_C final : public UBP_Audio_KLR_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Audio_KLR_14_C;                  // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Audio_KLR_14(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Audio_KLR_14_C">();
	}
	static class UBP_Audio_KLR_14_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Audio_KLR_14_C>();
	}
};
static_assert(alignof(UBP_Audio_KLR_14_C) == 0x000008, "Wrong alignment on UBP_Audio_KLR_14_C");
static_assert(sizeof(UBP_Audio_KLR_14_C) == 0x000230, "Wrong size on UBP_Audio_KLR_14_C");
static_assert(offsetof(UBP_Audio_KLR_14_C, UberGraphFrame_BP_Audio_KLR_14_C) == 0x000228, "Member 'UBP_Audio_KLR_14_C::UberGraphFrame_BP_Audio_KLR_14_C' has a wrong offset!");

}

