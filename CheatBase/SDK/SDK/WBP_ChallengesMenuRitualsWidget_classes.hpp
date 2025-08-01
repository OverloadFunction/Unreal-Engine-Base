﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChallengesMenuRitualsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ChallengesMenuRitualsWidget.WBP_ChallengesMenuRitualsWidget_C
// 0x0010 (0x0678 - 0x0668)
class UWBP_ChallengesMenuRitualsWidget_C final : public UChallengesMenuRitualsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0668(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              SearchBarBackground;                               // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ChallengesMenuRitualsWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ChallengesMenuRitualsWidget_C">();
	}
	static class UWBP_ChallengesMenuRitualsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ChallengesMenuRitualsWidget_C>();
	}
};
static_assert(alignof(UWBP_ChallengesMenuRitualsWidget_C) == 0x000008, "Wrong alignment on UWBP_ChallengesMenuRitualsWidget_C");
static_assert(sizeof(UWBP_ChallengesMenuRitualsWidget_C) == 0x000678, "Wrong size on UWBP_ChallengesMenuRitualsWidget_C");
static_assert(offsetof(UWBP_ChallengesMenuRitualsWidget_C, UberGraphFrame) == 0x000668, "Member 'UWBP_ChallengesMenuRitualsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRitualsWidget_C, SearchBarBackground) == 0x000670, "Member 'UWBP_ChallengesMenuRitualsWidget_C::SearchBarBackground' has a wrong offset!");

}

