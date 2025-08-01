﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Party

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Party_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Class Party.SocialChatChannel
// 0x00C0 (0x00F0 - 0x0030)
class USocialChatChannel : public UObject
{
public:
	uint8                                         Pad_30[0xC0];                                      // 0x0030(0x00C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChannel">();
	}
	static class USocialChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChannel>();
	}
};
static_assert(alignof(USocialChatChannel) == 0x000008, "Wrong alignment on USocialChatChannel");
static_assert(sizeof(USocialChatChannel) == 0x0000F0, "Wrong size on USocialChatChannel");

// Class Party.SocialChatRoom
// 0x0010 (0x0100 - 0x00F0)
class USocialChatRoom : public USocialChatChannel
{
public:
	uint8                                         Pad_F0[0x10];                                      // 0x00F0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatRoom">();
	}
	static class USocialChatRoom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatRoom>();
	}
};
static_assert(alignof(USocialChatRoom) == 0x000008, "Wrong alignment on USocialChatRoom");
static_assert(sizeof(USocialChatRoom) == 0x000100, "Wrong size on USocialChatRoom");

// Class Party.SocialPartyChatRoom
// 0x0000 (0x0100 - 0x0100)
class USocialPartyChatRoom final : public USocialChatRoom
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialPartyChatRoom">();
	}
	static class USocialPartyChatRoom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPartyChatRoom>();
	}
};
static_assert(alignof(USocialPartyChatRoom) == 0x000008, "Wrong alignment on USocialPartyChatRoom");
static_assert(sizeof(USocialPartyChatRoom) == 0x000100, "Wrong size on USocialPartyChatRoom");

// Class Party.Chatroom
// 0x0030 (0x0060 - 0x0030)
class UChatroom final : public UObject
{
public:
	class FString                                 CurrentChatRoomId;                                 // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MaxChatRoomRetries;                                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         NumChatRoomRetries;                                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x18];                                      // 0x0048(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Chatroom">();
	}
	static class UChatroom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatroom>();
	}
};
static_assert(alignof(UChatroom) == 0x000008, "Wrong alignment on UChatroom");
static_assert(sizeof(UChatroom) == 0x000060, "Wrong size on UChatroom");
static_assert(offsetof(UChatroom, CurrentChatRoomId) == 0x000030, "Member 'UChatroom::CurrentChatRoomId' has a wrong offset!");
static_assert(offsetof(UChatroom, MaxChatRoomRetries) == 0x000040, "Member 'UChatroom::MaxChatRoomRetries' has a wrong offset!");
static_assert(offsetof(UChatroom, NumChatRoomRetries) == 0x000044, "Member 'UChatroom::NumChatRoomRetries' has a wrong offset!");

// Class Party.SocialManager
// 0x0180 (0x01B0 - 0x0030)
class USocialManager final : public UObject
{
public:
	uint8                                         Pad_30[0x28];                                      // 0x0030(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USocialToolkit*>                 SocialToolkits;                                    // 0x0058(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class USocialDebugTools*                      SocialDebugTools;                                  // 0x0068(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_70[0x140];                                     // 0x0070(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialManager">();
	}
	static class USocialManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialManager>();
	}
};
static_assert(alignof(USocialManager) == 0x000008, "Wrong alignment on USocialManager");
static_assert(sizeof(USocialManager) == 0x0001B0, "Wrong size on USocialManager");
static_assert(offsetof(USocialManager, SocialToolkits) == 0x000058, "Member 'USocialManager::SocialToolkits' has a wrong offset!");
static_assert(offsetof(USocialManager, SocialDebugTools) == 0x000068, "Member 'USocialManager::SocialDebugTools' has a wrong offset!");

// Class Party.SocialToolkit
// 0x0280 (0x02B0 - 0x0030)
class USocialToolkit final : public UObject
{
public:
	uint8                                         Pad_30[0x40];                                      // 0x0030(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialUser*                            LocalUser;                                         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                    AllUsers;                                          // 0x0078(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_88[0x50];                                      // 0x0088(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class ULocalPlayer>            LocalPlayerOwner;                                  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialChatManager*                     SocialChatManager;                                 // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E8[0x1C8];                                     // 0x00E8(0x01C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialToolkit">();
	}
	static class USocialToolkit* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialToolkit>();
	}
};
static_assert(alignof(USocialToolkit) == 0x000008, "Wrong alignment on USocialToolkit");
static_assert(sizeof(USocialToolkit) == 0x0002B0, "Wrong size on USocialToolkit");
static_assert(offsetof(USocialToolkit, LocalUser) == 0x000070, "Member 'USocialToolkit::LocalUser' has a wrong offset!");
static_assert(offsetof(USocialToolkit, AllUsers) == 0x000078, "Member 'USocialToolkit::AllUsers' has a wrong offset!");
static_assert(offsetof(USocialToolkit, LocalPlayerOwner) == 0x0000D8, "Member 'USocialToolkit::LocalPlayerOwner' has a wrong offset!");
static_assert(offsetof(USocialToolkit, SocialChatManager) == 0x0000E0, "Member 'USocialToolkit::SocialChatManager' has a wrong offset!");

// Class Party.SocialChatManager
// 0x01F8 (0x0228 - 0x0030)
class USocialChatManager final : public UObject
{
public:
	uint8                                         Pad_30[0x50];                                      // 0x0030(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x0080(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialChatRoom*>   ChatRoomsById;                                     // 0x00D0(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;            // 0x0120(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                          bEnableChatSlashCommands;                          // 0x0170(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                         // 0x0178(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C8[0x60];                                     // 0x01C8(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatManager">();
	}
	static class USocialChatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatManager>();
	}
};
static_assert(alignof(USocialChatManager) == 0x000008, "Wrong alignment on USocialChatManager");
static_assert(sizeof(USocialChatManager) == 0x000228, "Wrong size on USocialChatManager");
static_assert(offsetof(USocialChatManager, DirectChannelsByTargetUser) == 0x000080, "Member 'USocialChatManager::DirectChannelsByTargetUser' has a wrong offset!");
static_assert(offsetof(USocialChatManager, ChatRoomsById) == 0x0000D0, "Member 'USocialChatManager::ChatRoomsById' has a wrong offset!");
static_assert(offsetof(USocialChatManager, ReadOnlyChannelsByDisplayName) == 0x000120, "Member 'USocialChatManager::ReadOnlyChannelsByDisplayName' has a wrong offset!");
static_assert(offsetof(USocialChatManager, bEnableChatSlashCommands) == 0x000170, "Member 'USocialChatManager::bEnableChatSlashCommands' has a wrong offset!");
static_assert(offsetof(USocialChatManager, GroupChannels) == 0x000178, "Member 'USocialChatManager::GroupChannels' has a wrong offset!");

// Class Party.SocialGroupChannel
// 0x0070 (0x00A0 - 0x0030)
class USocialGroupChannel final : public UObject
{
public:
	class USocialUser*                            SocialUser;                                        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                       GroupId;                                           // 0x0038(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                   DisplayName;                                       // 0x0068(0x0018)(NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                    Members;                                           // 0x0080(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_90[0x10];                                      // 0x0090(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialGroupChannel">();
	}
	static class USocialGroupChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupChannel>();
	}
};
static_assert(alignof(USocialGroupChannel) == 0x000008, "Wrong alignment on USocialGroupChannel");
static_assert(sizeof(USocialGroupChannel) == 0x0000A0, "Wrong size on USocialGroupChannel");
static_assert(offsetof(USocialGroupChannel, SocialUser) == 0x000030, "Member 'USocialGroupChannel::SocialUser' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, GroupId) == 0x000038, "Member 'USocialGroupChannel::GroupId' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, DisplayName) == 0x000068, "Member 'USocialGroupChannel::DisplayName' has a wrong offset!");
static_assert(offsetof(USocialGroupChannel, Members) == 0x000080, "Member 'USocialGroupChannel::Members' has a wrong offset!");

// Class Party.SocialPrivateMessageChannel
// 0x0008 (0x00F8 - 0x00F0)
class USocialPrivateMessageChannel final : public USocialChatChannel
{
public:
	class USocialUser*                            TargetUser;                                        // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialPrivateMessageChannel">();
	}
	static class USocialPrivateMessageChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPrivateMessageChannel>();
	}
};
static_assert(alignof(USocialPrivateMessageChannel) == 0x000008, "Wrong alignment on USocialPrivateMessageChannel");
static_assert(sizeof(USocialPrivateMessageChannel) == 0x0000F8, "Wrong size on USocialPrivateMessageChannel");
static_assert(offsetof(USocialPrivateMessageChannel, TargetUser) == 0x0000F0, "Member 'USocialPrivateMessageChannel::TargetUser' has a wrong offset!");

// Class Party.SocialReadOnlyChatChannel
// 0x0000 (0x00F0 - 0x00F0)
class USocialReadOnlyChatChannel final : public USocialChatChannel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialReadOnlyChatChannel">();
	}
	static class USocialReadOnlyChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialReadOnlyChatChannel>();
	}
};
static_assert(alignof(USocialReadOnlyChatChannel) == 0x000008, "Wrong alignment on USocialReadOnlyChatChannel");
static_assert(sizeof(USocialReadOnlyChatChannel) == 0x0000F0, "Wrong size on USocialReadOnlyChatChannel");

// Class Party.SocialParty
// 0x0360 (0x0390 - 0x0030)
class alignas(0x10) USocialParty final : public UObject
{
public:
	uint8                                         Pad_30[0x38];                                      // 0x0030(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class APartyBeaconClient>         ReservationBeaconClientClass;                      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASpectatorBeaconClient>     SpectatorBeaconClientClass;                        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_78[0x10];                                      // 0x0078(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       OwningLocalUserId;                                 // 0x0088(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                       CurrentLeaderId;                                   // 0x00B8(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                             // 0x00E8(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                          bEnableAutomaticPartyRejoin;                       // 0x0138(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_139[0x57];                                     // 0x0139(0x0057)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PlatformUserInviteCooldown;                        // 0x0190(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        PrimaryUserInviteCooldown;                         // 0x0198(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1A0[0x70];                                     // 0x01A0(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class APartyBeaconClient>      ReservationBeaconClient;                           // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_218[0xC];                                      // 0x0218(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class ASpectatorBeaconClient>  SpectatorBeaconClient;                             // 0x0224(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_22C[0x2C];                                     // 0x022C(0x002C)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         JoinInProgressTimerRate;                           // 0x0258(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         JoinInProgressRequestTimeout;                      // 0x025C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         JoinInProgressResponseTimeout;                     // 0x0260(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_264[0x12C];                                    // 0x0264(0x012C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialParty">();
	}
	static class USocialParty* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialParty>();
	}
};
static_assert(alignof(USocialParty) == 0x000010, "Wrong alignment on USocialParty");
static_assert(sizeof(USocialParty) == 0x000390, "Wrong size on USocialParty");
static_assert(offsetof(USocialParty, ReservationBeaconClientClass) == 0x000068, "Member 'USocialParty::ReservationBeaconClientClass' has a wrong offset!");
static_assert(offsetof(USocialParty, SpectatorBeaconClientClass) == 0x000070, "Member 'USocialParty::SpectatorBeaconClientClass' has a wrong offset!");
static_assert(offsetof(USocialParty, OwningLocalUserId) == 0x000088, "Member 'USocialParty::OwningLocalUserId' has a wrong offset!");
static_assert(offsetof(USocialParty, CurrentLeaderId) == 0x0000B8, "Member 'USocialParty::CurrentLeaderId' has a wrong offset!");
static_assert(offsetof(USocialParty, PartyMembersById) == 0x0000E8, "Member 'USocialParty::PartyMembersById' has a wrong offset!");
static_assert(offsetof(USocialParty, bEnableAutomaticPartyRejoin) == 0x000138, "Member 'USocialParty::bEnableAutomaticPartyRejoin' has a wrong offset!");
static_assert(offsetof(USocialParty, PlatformUserInviteCooldown) == 0x000190, "Member 'USocialParty::PlatformUserInviteCooldown' has a wrong offset!");
static_assert(offsetof(USocialParty, PrimaryUserInviteCooldown) == 0x000198, "Member 'USocialParty::PrimaryUserInviteCooldown' has a wrong offset!");
static_assert(offsetof(USocialParty, ReservationBeaconClient) == 0x000210, "Member 'USocialParty::ReservationBeaconClient' has a wrong offset!");
static_assert(offsetof(USocialParty, SpectatorBeaconClient) == 0x000224, "Member 'USocialParty::SpectatorBeaconClient' has a wrong offset!");
static_assert(offsetof(USocialParty, JoinInProgressTimerRate) == 0x000258, "Member 'USocialParty::JoinInProgressTimerRate' has a wrong offset!");
static_assert(offsetof(USocialParty, JoinInProgressRequestTimeout) == 0x00025C, "Member 'USocialParty::JoinInProgressRequestTimeout' has a wrong offset!");
static_assert(offsetof(USocialParty, JoinInProgressResponseTimeout) == 0x000260, "Member 'USocialParty::JoinInProgressResponseTimeout' has a wrong offset!");

// Class Party.PartyMember
// 0x00E8 (0x0118 - 0x0030)
class UPartyMember final : public UObject
{
public:
	uint8                                         Pad_30[0x48];                                      // 0x0030(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialUser*                            SocialUser;                                        // 0x0078(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_80[0x98];                                      // 0x0080(0x0098)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PartyMember">();
	}
	static class UPartyMember* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMember>();
	}
};
static_assert(alignof(UPartyMember) == 0x000008, "Wrong alignment on UPartyMember");
static_assert(sizeof(UPartyMember) == 0x000118, "Wrong size on UPartyMember");
static_assert(offsetof(UPartyMember, SocialUser) == 0x000078, "Member 'UPartyMember::SocialUser' has a wrong offset!");

// Class Party.SocialDebugTools
// 0x0060 (0x0090 - 0x0030)
class USocialDebugTools final : public UObject
{
public:
	uint8                                         Pad_30[0x60];                                      // 0x0030(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialDebugTools">();
	}
	static class USocialDebugTools* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialDebugTools>();
	}
};
static_assert(alignof(USocialDebugTools) == 0x000008, "Wrong alignment on USocialDebugTools");
static_assert(sizeof(USocialDebugTools) == 0x000090, "Wrong size on USocialDebugTools");

// Class Party.SocialSettings
// 0x0048 (0x0078 - 0x0030)
class USocialSettings final : public UObject
{
public:
	TArray<class FName>                           OssNamesWithEnvironmentIdPrefix;                   // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                         DefaultMaxPartySize;                               // 0x0040(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bPreferPlatformInvites;                            // 0x0044(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bMustSendPrimaryInvites;                           // 0x0045(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bLeavePartyOnDisconnect;                           // 0x0046(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bSetDesiredPrivacyOnLocalPlayerBecomesLeader;      // 0x0047(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         UserListAutoUpdateRate;                            // 0x0048(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MinNicknameLength;                                 // 0x004C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MaxNicknameLength;                                 // 0x0050(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSocialPlatformDescription>     SocialPlatformDescriptions;                        // 0x0058(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class FName>                           SonyOSSNames;                                      // 0x0068(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialSettings">();
	}
	static class USocialSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialSettings>();
	}
};
static_assert(alignof(USocialSettings) == 0x000008, "Wrong alignment on USocialSettings");
static_assert(sizeof(USocialSettings) == 0x000078, "Wrong size on USocialSettings");
static_assert(offsetof(USocialSettings, OssNamesWithEnvironmentIdPrefix) == 0x000030, "Member 'USocialSettings::OssNamesWithEnvironmentIdPrefix' has a wrong offset!");
static_assert(offsetof(USocialSettings, DefaultMaxPartySize) == 0x000040, "Member 'USocialSettings::DefaultMaxPartySize' has a wrong offset!");
static_assert(offsetof(USocialSettings, bPreferPlatformInvites) == 0x000044, "Member 'USocialSettings::bPreferPlatformInvites' has a wrong offset!");
static_assert(offsetof(USocialSettings, bMustSendPrimaryInvites) == 0x000045, "Member 'USocialSettings::bMustSendPrimaryInvites' has a wrong offset!");
static_assert(offsetof(USocialSettings, bLeavePartyOnDisconnect) == 0x000046, "Member 'USocialSettings::bLeavePartyOnDisconnect' has a wrong offset!");
static_assert(offsetof(USocialSettings, bSetDesiredPrivacyOnLocalPlayerBecomesLeader) == 0x000047, "Member 'USocialSettings::bSetDesiredPrivacyOnLocalPlayerBecomesLeader' has a wrong offset!");
static_assert(offsetof(USocialSettings, UserListAutoUpdateRate) == 0x000048, "Member 'USocialSettings::UserListAutoUpdateRate' has a wrong offset!");
static_assert(offsetof(USocialSettings, MinNicknameLength) == 0x00004C, "Member 'USocialSettings::MinNicknameLength' has a wrong offset!");
static_assert(offsetof(USocialSettings, MaxNicknameLength) == 0x000050, "Member 'USocialSettings::MaxNicknameLength' has a wrong offset!");
static_assert(offsetof(USocialSettings, SocialPlatformDescriptions) == 0x000058, "Member 'USocialSettings::SocialPlatformDescriptions' has a wrong offset!");
static_assert(offsetof(USocialSettings, SonyOSSNames) == 0x000068, "Member 'USocialSettings::SonyOSSNames' has a wrong offset!");

// Class Party.SocialUser
// 0x01A8 (0x01D8 - 0x0030)
class USocialUser final : public UObject
{
public:
	uint8                                         Pad_30[0x1A8];                                     // 0x0030(0x01A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUser">();
	}
	static class USocialUser* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUser>();
	}
};
static_assert(alignof(USocialUser) == 0x000008, "Wrong alignment on USocialUser");
static_assert(sizeof(USocialUser) == 0x0001D8, "Wrong size on USocialUser");

}

