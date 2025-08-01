﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Effect_K13_Menu

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_Effect_K13_Menu_C final
{
public:
	void K13_FX_MakeSwordAppear();
	void K13_FX_MakeSwordDisappear();
	void K13_FX_MakeSwordInvisible();
	void K13_FX_MakeSwordVisible();
	void K13_FX_ModifyFace(double SadFaceCurveValue, double MadFaceCurveValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Effect_K13_Menu_C">();
	}
	static class IBPI_Effect_K13_Menu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Effect_K13_Menu_C>();
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
static_assert(alignof(IBPI_Effect_K13_Menu_C) == 0x000001, "Wrong alignment on IBPI_Effect_K13_Menu_C");
static_assert(sizeof(IBPI_Effect_K13_Menu_C) == 0x000001, "Wrong size on IBPI_Effect_K13_Menu_C");

}

