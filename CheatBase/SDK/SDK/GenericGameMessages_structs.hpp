﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericGameMessages

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct GenericGameMessages.OpenCurrentCalendarMessage
// 0x0004 (0x0004 - 0x0000)
struct FOpenCurrentCalendarMessage final
{
public:
	int32                                         RemainingDailyRewards;                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOpenCurrentCalendarMessage) == 0x000004, "Wrong alignment on FOpenCurrentCalendarMessage");
static_assert(sizeof(FOpenCurrentCalendarMessage) == 0x000004, "Wrong size on FOpenCurrentCalendarMessage");
static_assert(offsetof(FOpenCurrentCalendarMessage, RemainingDailyRewards) == 0x000000, "Member 'FOpenCurrentCalendarMessage::RemainingDailyRewards' has a wrong offset!");

// ScriptStruct GenericGameMessages.LoginMessage
// 0x0010 (0x0010 - 0x0000)
struct FLoginMessage final
{
public:
	class FString                                 MirrorsId;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLoginMessage) == 0x000008, "Wrong alignment on FLoginMessage");
static_assert(sizeof(FLoginMessage) == 0x000010, "Wrong size on FLoginMessage");
static_assert(offsetof(FLoginMessage, MirrorsId) == 0x000000, "Member 'FLoginMessage::MirrorsId' has a wrong offset!");

// ScriptStruct GenericGameMessages.PatchStartMessage
// 0x0001 (0x0001 - 0x0000)
struct FPatchStartMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPatchStartMessage) == 0x000001, "Wrong alignment on FPatchStartMessage");
static_assert(sizeof(FPatchStartMessage) == 0x000001, "Wrong size on FPatchStartMessage");

// ScriptStruct GenericGameMessages.PatchEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FPatchEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPatchEndMessage) == 0x000001, "Wrong alignment on FPatchEndMessage");
static_assert(sizeof(FPatchEndMessage) == 0x000001, "Wrong size on FPatchEndMessage");

// ScriptStruct GenericGameMessages.PatchFailMessage
// 0x0001 (0x0001 - 0x0000)
struct FPatchFailMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPatchFailMessage) == 0x000001, "Wrong alignment on FPatchFailMessage");
static_assert(sizeof(FPatchFailMessage) == 0x000001, "Wrong size on FPatchFailMessage");

// ScriptStruct GenericGameMessages.SDKUIMessage
// 0x0001 (0x0001 - 0x0000)
struct FSDKUIMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSDKUIMessage) == 0x000001, "Wrong alignment on FSDKUIMessage");
static_assert(sizeof(FSDKUIMessage) == 0x000001, "Wrong size on FSDKUIMessage");

// ScriptStruct GenericGameMessages.SDKEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FSDKEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSDKEndMessage) == 0x000001, "Wrong alignment on FSDKEndMessage");
static_assert(sizeof(FSDKEndMessage) == 0x000001, "Wrong size on FSDKEndMessage");

// ScriptStruct GenericGameMessages.LoadStartMessage
// 0x0001 (0x0001 - 0x0000)
struct FLoadStartMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLoadStartMessage) == 0x000001, "Wrong alignment on FLoadStartMessage");
static_assert(sizeof(FLoadStartMessage) == 0x000001, "Wrong size on FLoadStartMessage");

// ScriptStruct GenericGameMessages.LoadEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FLoadEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLoadEndMessage) == 0x000001, "Wrong alignment on FLoadEndMessage");
static_assert(sizeof(FLoadEndMessage) == 0x000001, "Wrong size on FLoadEndMessage");

// ScriptStruct GenericGameMessages.LoginJsonMessage
// 0x0038 (0x0038 - 0x0000)
struct FLoginJsonMessage final
{
public:
	class FString                                 LoginJson;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LoginType;                                         // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RoleID;                                            // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsNewAccount;                                      // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLoginJsonMessage) == 0x000008, "Wrong alignment on FLoginJsonMessage");
static_assert(sizeof(FLoginJsonMessage) == 0x000038, "Wrong size on FLoginJsonMessage");
static_assert(offsetof(FLoginJsonMessage, LoginJson) == 0x000000, "Member 'FLoginJsonMessage::LoginJson' has a wrong offset!");
static_assert(offsetof(FLoginJsonMessage, LoginType) == 0x000010, "Member 'FLoginJsonMessage::LoginType' has a wrong offset!");
static_assert(offsetof(FLoginJsonMessage, RoleID) == 0x000020, "Member 'FLoginJsonMessage::RoleID' has a wrong offset!");
static_assert(offsetof(FLoginJsonMessage, IsNewAccount) == 0x000030, "Member 'FLoginJsonMessage::IsNewAccount' has a wrong offset!");

// ScriptStruct GenericGameMessages.TutorialEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FTutorialEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTutorialEndMessage) == 0x000001, "Wrong alignment on FTutorialEndMessage");
static_assert(sizeof(FTutorialEndMessage) == 0x000001, "Wrong size on FTutorialEndMessage");

// ScriptStruct GenericGameMessages.PlayerLevelMessage
// 0x0008 (0x0008 - 0x0000)
struct FPlayerLevelMessage final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalXp;                                           // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayerLevelMessage) == 0x000004, "Wrong alignment on FPlayerLevelMessage");
static_assert(sizeof(FPlayerLevelMessage) == 0x000008, "Wrong size on FPlayerLevelMessage");
static_assert(offsetof(FPlayerLevelMessage, Level) == 0x000000, "Member 'FPlayerLevelMessage::Level' has a wrong offset!");
static_assert(offsetof(FPlayerLevelMessage, TotalXp) == 0x000004, "Member 'FPlayerLevelMessage::TotalXp' has a wrong offset!");

// ScriptStruct GenericGameMessages.RoleUnlockMessage
// 0x0001 (0x0001 - 0x0000)
struct FRoleUnlockMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRoleUnlockMessage) == 0x000001, "Wrong alignment on FRoleUnlockMessage");
static_assert(sizeof(FRoleUnlockMessage) == 0x000001, "Wrong size on FRoleUnlockMessage");

// ScriptStruct GenericGameMessages.MatchEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FMatchEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMatchEndMessage) == 0x000001, "Wrong alignment on FMatchEndMessage");
static_assert(sizeof(FMatchEndMessage) == 0x000001, "Wrong size on FMatchEndMessage");

// ScriptStruct GenericGameMessages.GameVersionMessage
// 0x0010 (0x0010 - 0x0000)
struct FGameVersionMessage final
{
public:
	class FString                                 Version;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameVersionMessage) == 0x000008, "Wrong alignment on FGameVersionMessage");
static_assert(sizeof(FGameVersionMessage) == 0x000010, "Wrong size on FGameVersionMessage");
static_assert(offsetof(FGameVersionMessage, Version) == 0x000000, "Member 'FGameVersionMessage::Version' has a wrong offset!");

// ScriptStruct GenericGameMessages.PlayerNameMessage
// 0x0010 (0x0010 - 0x0000)
struct FPlayerNameMessage final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayerNameMessage) == 0x000008, "Wrong alignment on FPlayerNameMessage");
static_assert(sizeof(FPlayerNameMessage) == 0x000010, "Wrong size on FPlayerNameMessage");
static_assert(offsetof(FPlayerNameMessage, Name) == 0x000000, "Member 'FPlayerNameMessage::Name' has a wrong offset!");

// ScriptStruct GenericGameMessages.LanguageMessage
// 0x0010 (0x0010 - 0x0000)
struct FLanguageMessage final
{
public:
	class FString                                 Language;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLanguageMessage) == 0x000008, "Wrong alignment on FLanguageMessage");
static_assert(sizeof(FLanguageMessage) == 0x000010, "Wrong size on FLanguageMessage");
static_assert(offsetof(FLanguageMessage, Language) == 0x000000, "Member 'FLanguageMessage::Language' has a wrong offset!");

// ScriptStruct GenericGameMessages.FAQMessage
// 0x0001 (0x0001 - 0x0000)
struct FFAQMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFAQMessage) == 0x000001, "Wrong alignment on FFAQMessage");
static_assert(sizeof(FFAQMessage) == 0x000001, "Wrong size on FFAQMessage");

// ScriptStruct GenericGameMessages.BuyCurrencyMessage
// 0x0010 (0x0010 - 0x0000)
struct FBuyCurrencyMessage final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBuyCurrencyMessage) == 0x000008, "Wrong alignment on FBuyCurrencyMessage");
static_assert(sizeof(FBuyCurrencyMessage) == 0x000010, "Wrong size on FBuyCurrencyMessage");
static_assert(offsetof(FBuyCurrencyMessage, ItemId) == 0x000000, "Member 'FBuyCurrencyMessage::ItemId' has a wrong offset!");

// ScriptStruct GenericGameMessages.OrderDoneMessage
// 0x0028 (0x0028 - 0x0000)
struct FOrderDoneMessage final
{
public:
	int32                                         Code;                                              // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OrderId;                                           // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OrderChannel;                                      // 0x0018(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOrderDoneMessage) == 0x000008, "Wrong alignment on FOrderDoneMessage");
static_assert(sizeof(FOrderDoneMessage) == 0x000028, "Wrong size on FOrderDoneMessage");
static_assert(offsetof(FOrderDoneMessage, Code) == 0x000000, "Member 'FOrderDoneMessage::Code' has a wrong offset!");
static_assert(offsetof(FOrderDoneMessage, OrderId) == 0x000008, "Member 'FOrderDoneMessage::OrderId' has a wrong offset!");
static_assert(offsetof(FOrderDoneMessage, OrderChannel) == 0x000018, "Member 'FOrderDoneMessage::OrderChannel' has a wrong offset!");

// ScriptStruct GenericGameMessages.BuyTipsMessage
// 0x0004 (0x0004 - 0x0000)
struct FBuyTipsMessage final
{
public:
	int32                                         Result;                                            // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBuyTipsMessage) == 0x000004, "Wrong alignment on FBuyTipsMessage");
static_assert(sizeof(FBuyTipsMessage) == 0x000004, "Wrong size on FBuyTipsMessage");
static_assert(offsetof(FBuyTipsMessage, Result) == 0x000000, "Member 'FBuyTipsMessage::Result' has a wrong offset!");

// ScriptStruct GenericGameMessages.SkuDetailsMessage
// 0x0050 (0x0050 - 0x0000)
struct FSkuDetailsMessage final
{
public:
	TMap<class FString, class FString>            BundlePrices;                                      // 0x0000(0x0050)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkuDetailsMessage) == 0x000008, "Wrong alignment on FSkuDetailsMessage");
static_assert(sizeof(FSkuDetailsMessage) == 0x000050, "Wrong size on FSkuDetailsMessage");
static_assert(offsetof(FSkuDetailsMessage, BundlePrices) == 0x000000, "Member 'FSkuDetailsMessage::BundlePrices' has a wrong offset!");

// ScriptStruct GenericGameMessages.ForceLogoutMessage
// 0x0001 (0x0001 - 0x0000)
struct FForceLogoutMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FForceLogoutMessage) == 0x000001, "Wrong alignment on FForceLogoutMessage");
static_assert(sizeof(FForceLogoutMessage) == 0x000001, "Wrong size on FForceLogoutMessage");

// ScriptStruct GenericGameMessages.UserCenterMessage
// 0x0001 (0x0001 - 0x0000)
struct FUserCenterMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUserCenterMessage) == 0x000001, "Wrong alignment on FUserCenterMessage");
static_assert(sizeof(FUserCenterMessage) == 0x000001, "Wrong size on FUserCenterMessage");

// ScriptStruct GenericGameMessages.RateAppMessage
// 0x0001 (0x0001 - 0x0000)
struct FRateAppMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRateAppMessage) == 0x000001, "Wrong alignment on FRateAppMessage");
static_assert(sizeof(FRateAppMessage) == 0x000001, "Wrong size on FRateAppMessage");

}

