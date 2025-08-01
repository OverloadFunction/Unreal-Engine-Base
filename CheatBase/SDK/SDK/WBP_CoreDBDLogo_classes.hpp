﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreDBDLogo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreDBDLogo.WBP_CoreDBDLogo_C
// 0x0060 (0x0308 - 0x02A8)
class UWBP_CoreDBDLogo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LoadingAnimation;                                  // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              Killer;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Surv1;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Surv2;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Surv3;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Surv4;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        VersionNumber;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterila;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Material;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldPlayAnim;                                    // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_CoreDBDLogo(int32 EntryPoint);
	void PlayLogoAnim(bool Play);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreDBDLogo_C">();
	}
	static class UWBP_CoreDBDLogo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreDBDLogo_C>();
	}
};
static_assert(alignof(UWBP_CoreDBDLogo_C) == 0x000008, "Wrong alignment on UWBP_CoreDBDLogo_C");
static_assert(sizeof(UWBP_CoreDBDLogo_C) == 0x000308, "Wrong size on UWBP_CoreDBDLogo_C");
static_assert(offsetof(UWBP_CoreDBDLogo_C, UberGraphFrame) == 0x0002A8, "Member 'UWBP_CoreDBDLogo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, LoadingAnimation) == 0x0002B0, "Member 'UWBP_CoreDBDLogo_C::LoadingAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, Killer) == 0x0002B8, "Member 'UWBP_CoreDBDLogo_C::Killer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, Surv1) == 0x0002C0, "Member 'UWBP_CoreDBDLogo_C::Surv1' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, Surv2) == 0x0002C8, "Member 'UWBP_CoreDBDLogo_C::Surv2' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, Surv3) == 0x0002D0, "Member 'UWBP_CoreDBDLogo_C::Surv3' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, Surv4) == 0x0002D8, "Member 'UWBP_CoreDBDLogo_C::Surv4' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, VersionNumber) == 0x0002E0, "Member 'UWBP_CoreDBDLogo_C::VersionNumber' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, DynamicMaterila) == 0x0002E8, "Member 'UWBP_CoreDBDLogo_C::DynamicMaterila' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, Material) == 0x0002F0, "Member 'UWBP_CoreDBDLogo_C::Material' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, Duration) == 0x0002F8, "Member 'UWBP_CoreDBDLogo_C::Duration' has a wrong offset!");
static_assert(offsetof(UWBP_CoreDBDLogo_C, ShouldPlayAnim) == 0x000300, "Member 'UWBP_CoreDBDLogo_C::ShouldPlayAnim' has a wrong offset!");

}

