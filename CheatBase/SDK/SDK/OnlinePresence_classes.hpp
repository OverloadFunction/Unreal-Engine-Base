﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlinePresence

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class OnlinePresence.MirrorsConfig
// 0x0000 (0x0030 - 0x0030)
class UMirrorsConfig final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MirrorsConfig">();
	}
	static class UMirrorsConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMirrorsConfig>();
	}
};
static_assert(alignof(UMirrorsConfig) == 0x000008, "Wrong alignment on UMirrorsConfig");
static_assert(sizeof(UMirrorsConfig) == 0x000030, "Wrong size on UMirrorsConfig");

// Class OnlinePresence.OnlinePresenceExternalCommands
// 0x0018 (0x0048 - 0x0030)
class UOnlinePresenceExternalCommands final : public UObject
{
public:
	uint8                                         Pad_30[0x18];                                      // 0x0030(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool DBD_GenerateTestItems();
	bool DBD_GrantPromoItems();
	bool DBD_IsDlcInstalled(const class FString& InString);
	void DBD_MirrorsGetValue(const class FString& StateName);
	void DBD_MirrorsSaveTestValue(const class FString& StateName, int32 Version);
	void DBD_MirrorsWalletGetCurrency(const class FString& CurrencyName);
	void DBD_MirrorsWalletWithdraw(const class FString& CurrencyName, int32 Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlinePresenceExternalCommands">();
	}
	static class UOnlinePresenceExternalCommands* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlinePresenceExternalCommands>();
	}
};
static_assert(alignof(UOnlinePresenceExternalCommands) == 0x000008, "Wrong alignment on UOnlinePresenceExternalCommands");
static_assert(sizeof(UOnlinePresenceExternalCommands) == 0x000048, "Wrong size on UOnlinePresenceExternalCommands");

// Class OnlinePresence.SteamConfig
// 0x0000 (0x0030 - 0x0030)
class USteamConfig final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamConfig">();
	}
	static class USteamConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamConfig>();
	}
};
static_assert(alignof(USteamConfig) == 0x000008, "Wrong alignment on USteamConfig");
static_assert(sizeof(USteamConfig) == 0x000030, "Wrong size on USteamConfig");

}

