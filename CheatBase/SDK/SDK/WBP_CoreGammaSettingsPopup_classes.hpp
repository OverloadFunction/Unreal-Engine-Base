﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreGammaSettingsPopup

#include "Basic.hpp"

#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreGammaSettingsPopup.WBP_CoreGammaSettingsPopup_C
// 0x0008 (0x0418 - 0x0410)
class UWBP_CoreGammaSettingsPopup_C final : public UCoreGammaSettingsPopupWidget
{
public:
	class UDBDImage*                              Background;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreGammaSettingsPopup_C">();
	}
	static class UWBP_CoreGammaSettingsPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreGammaSettingsPopup_C>();
	}
};
static_assert(alignof(UWBP_CoreGammaSettingsPopup_C) == 0x000008, "Wrong alignment on UWBP_CoreGammaSettingsPopup_C");
static_assert(sizeof(UWBP_CoreGammaSettingsPopup_C) == 0x000418, "Wrong size on UWBP_CoreGammaSettingsPopup_C");
static_assert(offsetof(UWBP_CoreGammaSettingsPopup_C, Background) == 0x000410, "Member 'UWBP_CoreGammaSettingsPopup_C::Background' has a wrong offset!");

}

