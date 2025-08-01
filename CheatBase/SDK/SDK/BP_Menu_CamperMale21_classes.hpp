﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Menu_CamperMale21

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Menu_Base_Camper_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Menu_CamperMale21.BP_Menu_CamperMale21_C
// 0x0020 (0x0950 - 0x0930)
class ABP_Menu_CamperMale21_C final : public ABP_Menu_Base_Camper_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Menu_CamperMale21_C;             // 0x0930(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 S42Lute;                                           // 0x0938(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAB_Lute_S42_C*                         AB_S42_Lute;                                       // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAB_Menu_S42_C*                         AB_Menu_S42;                                       // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddBloodOnCamper();
	void CK_StartSacrificeDissolve();
	void ExecuteUbergraph_BP_Menu_CamperMale21(int32 EntryPoint);
	void GoToAddMoriVomitStain();
	void GoToAddVomitDecal();
	void HideProps();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RemoveBloodOnCamper();
	void ShowProps();
	void StartEndGameDissolve();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Menu_CamperMale21_C">();
	}
	static class ABP_Menu_CamperMale21_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Menu_CamperMale21_C>();
	}
};
static_assert(alignof(ABP_Menu_CamperMale21_C) == 0x000010, "Wrong alignment on ABP_Menu_CamperMale21_C");
static_assert(sizeof(ABP_Menu_CamperMale21_C) == 0x000950, "Wrong size on ABP_Menu_CamperMale21_C");
static_assert(offsetof(ABP_Menu_CamperMale21_C, UberGraphFrame_BP_Menu_CamperMale21_C) == 0x000930, "Member 'ABP_Menu_CamperMale21_C::UberGraphFrame_BP_Menu_CamperMale21_C' has a wrong offset!");
static_assert(offsetof(ABP_Menu_CamperMale21_C, S42Lute) == 0x000938, "Member 'ABP_Menu_CamperMale21_C::S42Lute' has a wrong offset!");
static_assert(offsetof(ABP_Menu_CamperMale21_C, AB_S42_Lute) == 0x000940, "Member 'ABP_Menu_CamperMale21_C::AB_S42_Lute' has a wrong offset!");
static_assert(offsetof(ABP_Menu_CamperMale21_C, AB_Menu_S42) == 0x000948, "Member 'ABP_Menu_CamperMale21_C::AB_Menu_S42' has a wrong offset!");

}

