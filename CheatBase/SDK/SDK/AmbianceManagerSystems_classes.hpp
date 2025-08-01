﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbianceManagerSystems

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "DeadByDaylight_structs.hpp"


namespace SDK
{

// Class AmbianceManagerSystems.LobbyAmbiancesManagement
// 0x0000 (0x0030 - 0x0030)
class ULobbyAmbiancesManagement final : public UObject
{
public:
	static void ManageAmbianceForLobby(class UGMAmbianceManager* ambianceManager, const bool bOverrideTransition, const float TransitionDuration, const struct FGameplayTag& GameplayTag, const EDBDCameraViewType CurrentState, const EDBDCameraViewType newState, class UAmbianceManagerDataAsset* shopAmbiance, class UAmbianceManagerDataAsset* archiveAmbiance, class UAmbianceManagerDataAsset* moriPreviewAmbiance);
	static void SetOfferingState(class UGMAmbianceManager* ambianceManager, bool isEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyAmbiancesManagement">();
	}
	static class ULobbyAmbiancesManagement* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyAmbiancesManagement>();
	}
};
static_assert(alignof(ULobbyAmbiancesManagement) == 0x000008, "Wrong alignment on ULobbyAmbiancesManagement");
static_assert(sizeof(ULobbyAmbiancesManagement) == 0x000030, "Wrong size on ULobbyAmbiancesManagement");

}

