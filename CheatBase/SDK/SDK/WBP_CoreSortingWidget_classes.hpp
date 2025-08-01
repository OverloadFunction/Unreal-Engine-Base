﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSortingWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "DBDUIViewsCore_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreSortingWidget.WBP_CoreSortingWidget_C
// 0x0028 (0x0390 - 0x0368)
class UWBP_CoreSortingWidget_C final : public UCoreSortingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                                Spacer;                                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Tooltip_View_Data;                                 // 0x0378(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_CoreSortingWidget_SortingOptionButton_K2Node_ComponentBoundEvent_2_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
	void BndEvt__WBP_CoreSortingWidget_SortingOptionButton_K2Node_ComponentBoundEvent_3_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
	void ExecuteUbergraph_WBP_CoreSortingWidget(int32 EntryPoint);
	void OnSortingOrderClick(class UCoreButtonWidget* buttonTarget);
	void SetSortingOrderButtonVisibility(bool showSortingOrderButton);
	void UpdateSortingOrderButton(ESortingOrder sortingOrder);
	void UpdateSortingOrderButtonIcon(ESortingOrder NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreSortingWidget_C">();
	}
	static class UWBP_CoreSortingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreSortingWidget_C>();
	}
};
static_assert(alignof(UWBP_CoreSortingWidget_C) == 0x000008, "Wrong alignment on UWBP_CoreSortingWidget_C");
static_assert(sizeof(UWBP_CoreSortingWidget_C) == 0x000390, "Wrong size on UWBP_CoreSortingWidget_C");
static_assert(offsetof(UWBP_CoreSortingWidget_C, UberGraphFrame) == 0x000368, "Member 'UWBP_CoreSortingWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSortingWidget_C, Spacer) == 0x000370, "Member 'UWBP_CoreSortingWidget_C::Spacer' has a wrong offset!");
static_assert(offsetof(UWBP_CoreSortingWidget_C, Tooltip_View_Data) == 0x000378, "Member 'UWBP_CoreSortingWidget_C::Tooltip_View_Data' has a wrong offset!");

}

