﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChallengesMenuRiftButton

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ChallengesMenuRiftButton.WBP_ChallengesMenuRiftButton_C
// 0x00B0 (0x0600 - 0x0550)
class UWBP_ChallengesMenuRiftButton_C final : public UChallengesMenuRiftButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              Background;                                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              LockedBackground;                                  // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              LockedIcon;                                        // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LockedOverlay;                                     // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              RiftPassTrackIcon;                                 // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              RiftProgressionBackgroundImage;                    // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              TierIcon;                                          // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<ETierType, struct FLinearColor>          TierColorMapping;                                  // 0x0590(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             FreeTrackBackground;                               // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             LowerRiftBackground;                               // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             DeepRiftBackground;                                // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             InfiniteRiftBackground;                            // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ChallengesMenuRiftButton(int32 EntryPoint);
	void SetBackgroundVisuals(bool isPremiumPass, ETierType tier);
	void SetLockedVisuals(bool IsLocked);
	void SetRiftPassTrackIcon(bool isPremiumPass);
	void SetRiftProgressionColor(ETierType tier);
	void SetRiftProgressionImage(float Percentage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ChallengesMenuRiftButton_C">();
	}
	static class UWBP_ChallengesMenuRiftButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ChallengesMenuRiftButton_C>();
	}
};
static_assert(alignof(UWBP_ChallengesMenuRiftButton_C) == 0x000008, "Wrong alignment on UWBP_ChallengesMenuRiftButton_C");
static_assert(sizeof(UWBP_ChallengesMenuRiftButton_C) == 0x000600, "Wrong size on UWBP_ChallengesMenuRiftButton_C");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, UberGraphFrame) == 0x000550, "Member 'UWBP_ChallengesMenuRiftButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, Background) == 0x000558, "Member 'UWBP_ChallengesMenuRiftButton_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, LockedBackground) == 0x000560, "Member 'UWBP_ChallengesMenuRiftButton_C::LockedBackground' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, LockedIcon) == 0x000568, "Member 'UWBP_ChallengesMenuRiftButton_C::LockedIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, LockedOverlay) == 0x000570, "Member 'UWBP_ChallengesMenuRiftButton_C::LockedOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, RiftPassTrackIcon) == 0x000578, "Member 'UWBP_ChallengesMenuRiftButton_C::RiftPassTrackIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, RiftProgressionBackgroundImage) == 0x000580, "Member 'UWBP_ChallengesMenuRiftButton_C::RiftProgressionBackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, TierIcon) == 0x000588, "Member 'UWBP_ChallengesMenuRiftButton_C::TierIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, TierColorMapping) == 0x000590, "Member 'UWBP_ChallengesMenuRiftButton_C::TierColorMapping' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, FreeTrackBackground) == 0x0005E0, "Member 'UWBP_ChallengesMenuRiftButton_C::FreeTrackBackground' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, LowerRiftBackground) == 0x0005E8, "Member 'UWBP_ChallengesMenuRiftButton_C::LowerRiftBackground' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, DeepRiftBackground) == 0x0005F0, "Member 'UWBP_ChallengesMenuRiftButton_C::DeepRiftBackground' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengesMenuRiftButton_C, InfiniteRiftBackground) == 0x0005F8, "Member 'UWBP_ChallengesMenuRiftButton_C::InfiniteRiftBackground' has a wrong offset!");

}

