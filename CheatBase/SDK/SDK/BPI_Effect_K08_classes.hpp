﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Effect_K08

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Effect_K08.BPI_Effect_K08_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_Effect_K08_C final
{
public:
	void K08_FX_MakeGutsDisappear();
	void K08_FX_MakeHatchetAppear();
	void K08_FX_MakeHatchetDisappear();
	void K08_FX_SpawnBloodTrail();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Effect_K08_C">();
	}
	static class IBPI_Effect_K08_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Effect_K08_C>();
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
static_assert(alignof(IBPI_Effect_K08_C) == 0x000001, "Wrong alignment on IBPI_Effect_K08_C");
static_assert(sizeof(IBPI_Effect_K08_C) == 0x000001, "Wrong size on IBPI_Effect_K08_C");

}

