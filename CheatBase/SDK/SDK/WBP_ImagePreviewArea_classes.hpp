﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ImagePreviewArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ImagePreviewArea.WBP_ImagePreviewArea_C
// 0x0078 (0x03D0 - 0x0358)
class UWBP_ImagePreviewArea_C final : public UCoreImagePreviewAreaWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               BottomItemsContainer;                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              PreviewContainer;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           PreviewRetainerBox;                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        ItemPreviewContainerPositionX;                     // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ItemPreviewContainerPositionY;                     // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ItemPreviewContainerScale;                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BannerPreviewContainerPositionX;                   // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BannerPreviewContainerPositionY;                   // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BannerPreviewContainerScale;                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BottomItemsPositionY;                              // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BannerAspectRatio;                                 // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BottomItemsPositionX;                              // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ContainerSize;                                     // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_ImagePreviewArea(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetAnimatedPreviewData(const class UStoreCustomizationItemViewData* previewItemData);
	void SetBannerPreviewContainer();
	void SetItemPreviewContainer();
	void SetPreviewContainerVisual(const ECustomizationCategory CustomizationCategory);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ImagePreviewArea_C">();
	}
	static class UWBP_ImagePreviewArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ImagePreviewArea_C>();
	}
};
static_assert(alignof(UWBP_ImagePreviewArea_C) == 0x000008, "Wrong alignment on UWBP_ImagePreviewArea_C");
static_assert(sizeof(UWBP_ImagePreviewArea_C) == 0x0003D0, "Wrong size on UWBP_ImagePreviewArea_C");
static_assert(offsetof(UWBP_ImagePreviewArea_C, UberGraphFrame) == 0x000358, "Member 'UWBP_ImagePreviewArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, BottomItemsContainer) == 0x000360, "Member 'UWBP_ImagePreviewArea_C::BottomItemsContainer' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, PreviewContainer) == 0x000368, "Member 'UWBP_ImagePreviewArea_C::PreviewContainer' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, PreviewRetainerBox) == 0x000370, "Member 'UWBP_ImagePreviewArea_C::PreviewRetainerBox' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, ItemPreviewContainerPositionX) == 0x000378, "Member 'UWBP_ImagePreviewArea_C::ItemPreviewContainerPositionX' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, ItemPreviewContainerPositionY) == 0x000380, "Member 'UWBP_ImagePreviewArea_C::ItemPreviewContainerPositionY' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, ItemPreviewContainerScale) == 0x000388, "Member 'UWBP_ImagePreviewArea_C::ItemPreviewContainerScale' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, BannerPreviewContainerPositionX) == 0x000390, "Member 'UWBP_ImagePreviewArea_C::BannerPreviewContainerPositionX' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, BannerPreviewContainerPositionY) == 0x000398, "Member 'UWBP_ImagePreviewArea_C::BannerPreviewContainerPositionY' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, BannerPreviewContainerScale) == 0x0003A0, "Member 'UWBP_ImagePreviewArea_C::BannerPreviewContainerScale' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, BottomItemsPositionY) == 0x0003A8, "Member 'UWBP_ImagePreviewArea_C::BottomItemsPositionY' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, BannerAspectRatio) == 0x0003B0, "Member 'UWBP_ImagePreviewArea_C::BannerAspectRatio' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, BottomItemsPositionX) == 0x0003B8, "Member 'UWBP_ImagePreviewArea_C::BottomItemsPositionX' has a wrong offset!");
static_assert(offsetof(UWBP_ImagePreviewArea_C, ContainerSize) == 0x0003C0, "Member 'UWBP_ImagePreviewArea_C::ContainerSize' has a wrong offset!");

}

