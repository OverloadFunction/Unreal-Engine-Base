﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Audio_SVR_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Audio_SVR_Base.BP_Audio_SVR_Base_C
// 0x0018 (0x00D0 - 0x00B8)
class UBP_Audio_SVR_Base_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioBank*                           _Soundbank_SVR;                                    // 0x00C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioBank*                           _Soundbank_SVR_Dialog;                             // 0x00C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Audio_SVR_Base(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Audio_SVR_Base_C">();
	}
	static class UBP_Audio_SVR_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Audio_SVR_Base_C>();
	}
};
static_assert(alignof(UBP_Audio_SVR_Base_C) == 0x000008, "Wrong alignment on UBP_Audio_SVR_Base_C");
static_assert(sizeof(UBP_Audio_SVR_Base_C) == 0x0000D0, "Wrong size on UBP_Audio_SVR_Base_C");
static_assert(offsetof(UBP_Audio_SVR_Base_C, UberGraphFrame) == 0x0000B8, "Member 'UBP_Audio_SVR_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Audio_SVR_Base_C, _Soundbank_SVR) == 0x0000C0, "Member 'UBP_Audio_SVR_Base_C::_Soundbank_SVR' has a wrong offset!");
static_assert(offsetof(UBP_Audio_SVR_Base_C, _Soundbank_SVR_Dialog) == 0x0000C8, "Member 'UBP_Audio_SVR_Base_C::_Soundbank_SVR_Dialog' has a wrong offset!");

}

