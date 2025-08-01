﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineTransactions

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class OnlineTransactions.BloodwebManagerMock
// 0x0018 (0x0048 - 0x0030)
class UBloodwebManagerMock final : public UObject
{
public:
	uint8                                         Pad_30[0x18];                                      // 0x0030(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BloodwebManagerMock">();
	}
	static class UBloodwebManagerMock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBloodwebManagerMock>();
	}
};
static_assert(alignof(UBloodwebManagerMock) == 0x000008, "Wrong alignment on UBloodwebManagerMock");
static_assert(sizeof(UBloodwebManagerMock) == 0x000048, "Wrong size on UBloodwebManagerMock");

// Class OnlineTransactions.OnlineTransactionResponseBase
// 0x0000 (0x0030 - 0x0030)
class UOnlineTransactionResponseBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineTransactionResponseBase">();
	}
	static class UOnlineTransactionResponseBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineTransactionResponseBase>();
	}
};
static_assert(alignof(UOnlineTransactionResponseBase) == 0x000008, "Wrong alignment on UOnlineTransactionResponseBase");
static_assert(sizeof(UOnlineTransactionResponseBase) == 0x000030, "Wrong size on UOnlineTransactionResponseBase");

// Class OnlineTransactions.ForceRefreshBloodMarketTransactionResponse
// 0x0008 (0x0038 - 0x0030)
class UForceRefreshBloodMarketTransactionResponse final : public UOnlineTransactionResponseBase
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ForceRefreshBloodMarketTransactionResponse">();
	}
	static class UForceRefreshBloodMarketTransactionResponse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UForceRefreshBloodMarketTransactionResponse>();
	}
};
static_assert(alignof(UForceRefreshBloodMarketTransactionResponse) == 0x000008, "Wrong alignment on UForceRefreshBloodMarketTransactionResponse");
static_assert(sizeof(UForceRefreshBloodMarketTransactionResponse) == 0x000038, "Wrong size on UForceRefreshBloodMarketTransactionResponse");

// Class OnlineTransactions.ForceRefreshBloodMarketTransaction
// 0x0068 (0x0098 - 0x0030)
class UForceRefreshBloodMarketTransaction final : public UObject
{
public:
	uint8                                         Pad_30[0x68];                                      // 0x0030(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ForceRefreshBloodMarketTransaction">();
	}
	static class UForceRefreshBloodMarketTransaction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UForceRefreshBloodMarketTransaction>();
	}
};
static_assert(alignof(UForceRefreshBloodMarketTransaction) == 0x000008, "Wrong alignment on UForceRefreshBloodMarketTransaction");
static_assert(sizeof(UForceRefreshBloodMarketTransaction) == 0x000098, "Wrong size on UForceRefreshBloodMarketTransaction");

// Class OnlineTransactions.OnlineTransaction
// 0x0000 (0x0000 - 0x0000)
class IOnlineTransaction final
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineTransaction">();
	}
	static class IOnlineTransaction* GetDefaultObj()
	{
		return GetDefaultObjImpl<IOnlineTransaction>();
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
static_assert(alignof(IOnlineTransaction) == 0x000001, "Wrong alignment on IOnlineTransaction");
static_assert(sizeof(IOnlineTransaction) == 0x000001, "Wrong size on IOnlineTransaction");

// Class OnlineTransactions.OnlineTransactionServiceComponent
// 0x0068 (0x0120 - 0x00B8)
class UOnlineTransactionServiceComponent final : public UActorComponent
{
public:
	uint8                                         Pad_B8[0x68];                                      // 0x00B8(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineTransactionServiceComponent">();
	}
	static class UOnlineTransactionServiceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineTransactionServiceComponent>();
	}
};
static_assert(alignof(UOnlineTransactionServiceComponent) == 0x000008, "Wrong alignment on UOnlineTransactionServiceComponent");
static_assert(sizeof(UOnlineTransactionServiceComponent) == 0x000120, "Wrong size on UOnlineTransactionServiceComponent");

// Class OnlineTransactions.WalletHandlerMock
// 0x0018 (0x0048 - 0x0030)
class UWalletHandlerMock final : public UObject
{
public:
	uint8                                         Pad_30[0x18];                                      // 0x0030(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WalletHandlerMock">();
	}
	static class UWalletHandlerMock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWalletHandlerMock>();
	}
};
static_assert(alignof(UWalletHandlerMock) == 0x000008, "Wrong alignment on UWalletHandlerMock");
static_assert(sizeof(UWalletHandlerMock) == 0x000048, "Wrong size on UWalletHandlerMock");

}

