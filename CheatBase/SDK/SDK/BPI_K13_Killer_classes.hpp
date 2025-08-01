﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_K13_Killer

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_K13_Killer.BPI_K13_Killer_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_K13_Killer_C final
{
public:
	void K13_FX_Attack_In_MakeWeaponAppear();
	void K13_FX_Attack_In_MakeWeaponAppear_FPV();
	void K13_FX_CarryAttack_BOW();
	void K13_FX_CarryAttack_WeaponDisappear();
	void K13_FX_MakeSwordNotVisible();
	void K13_FX_MakeSwordNotVisible_Attack_Miss();
	void K13_FX_MakeSwordNotVisible_Attack_Miss_FPV();
	void K13_FX_MakeSwordNotVisible_Attack_Wipe();
	void K13_FX_MakeSwordNotVisible_Attack_Wipe_FPV();
	void K13_FX_MakeSwordVisible();
	void K13_FX_Mori_ResetVariable();
	void K13_FX_Mori_SpawnPoseableMesh(bool First_Time_to_Mori);
	void K13_FX_Vault_SpawnPoseableMesh();
	void ResetChargeVFX();
	void TriggerActivePhaseChargeVFX(double chargeTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_K13_Killer_C">();
	}
	static class IBPI_K13_Killer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_K13_Killer_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IBPI_K13_Killer_C) == 0x000001, "Wrong alignment on IBPI_K13_Killer_C");
static_assert(sizeof(IBPI_K13_Killer_C) == 0x000001, "Wrong size on IBPI_K13_Killer_C");

}

