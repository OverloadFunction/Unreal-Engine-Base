﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Party

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum Party.ESocialChannelType
// NumValues: 0x0007
enum class ESocialChannelType : uint8
{
	General                                  = 0,
	Founder                                  = 1,
	Party                                    = 2,
	Team                                     = 3,
	System                                   = 4,
	Private                                  = 5,
	ESocialChannelType_MAX                   = 6,
};

// Enum Party.EPartyType
// NumValues: 0x0004
enum class EPartyType : uint8
{
	Public                                   = 0,
	FriendsOnly                              = 1,
	Private                                  = 2,
	EPartyType_MAX                           = 3,
};

// Enum Party.EPartyInviteRestriction
// NumValues: 0x0004
enum class EPartyInviteRestriction : uint8
{
	AnyMember                                = 0,
	LeaderOnly                               = 1,
	NoInvites                                = 2,
	EPartyInviteRestriction_MAX              = 3,
};

// Enum Party.EPartyJoinDenialReason
// NumValues: 0x0041
enum class EPartyJoinDenialReason : uint8
{
	NoReason                                 = 0,
	JoinAttemptAborted                       = 1,
	Busy                                     = 2,
	OssUnavailable                           = 3,
	PartyFull                                = 4,
	GameFull                                 = 5,
	NotPartyLeader                           = 6,
	PartyPrivate                             = 7,
	JoinerCrossplayRestricted                = 8,
	MemberCrossplayRestricted                = 9,
	GameModeRestricted                       = 10,
	Banned                                   = 11,
	NotLoggedIn                              = 12,
	CheckingForRejoin                        = 13,
	TargetUserMissingPresence                = 14,
	TargetUserUnjoinable                     = 15,
	TargetUserAway                           = 16,
	AlreadyLeaderInPlatformSession           = 17,
	TargetUserPlayingDifferentGame           = 18,
	TargetUserMissingPlatformSession         = 19,
	PlatformSessionMissingJoinInfo           = 20,
	FailedToStartFindConsoleSession          = 21,
	MissingPartyClassForTypeId               = 22,
	TargetUserBlocked                        = 23,
	CustomReason0                            = 24,
	CustomReason1                            = 25,
	CustomReason2                            = 26,
	CustomReason3                            = 27,
	CustomReason4                            = 28,
	CustomReason5                            = 29,
	CustomReason6                            = 30,
	CustomReason7                            = 31,
	CustomReason8                            = 32,
	CustomReason9                            = 33,
	CustomReason10                           = 34,
	CustomReason11                           = 35,
	CustomReason12                           = 36,
	CustomReason13                           = 37,
	CustomReason14                           = 38,
	CustomReason15                           = 39,
	CustomReason16                           = 40,
	CustomReason17                           = 41,
	CustomReason18                           = 42,
	CustomReason19                           = 43,
	CustomReason20                           = 44,
	CustomReason21                           = 45,
	CustomReason22                           = 46,
	CustomReason23                           = 47,
	CustomReason24                           = 48,
	CustomReason25                           = 49,
	CustomReason26                           = 50,
	CustomReason27                           = 51,
	CustomReason28                           = 52,
	CustomReason29                           = 53,
	CustomReason30                           = 54,
	CustomReason31                           = 55,
	CustomReason32                           = 56,
	CustomReason33                           = 57,
	CustomReason34                           = 58,
	CustomReason35                           = 59,
	CustomReason36                           = 60,
	CustomReason37                           = 61,
	CustomReason38                           = 62,
	CustomReason39                           = 63,
	MAX                                      = 64,
};

// Enum Party.EApprovalAction
// NumValues: 0x0005
enum class EApprovalAction : uint8
{
	Approve                                  = 0,
	Enqueue                                  = 1,
	EnqueueAndStartBeacon                    = 2,
	Deny                                     = 3,
	EApprovalAction_MAX                      = 4,
};

// Enum Party.ESocialPartyInviteMethod
// NumValues: 0x0004
enum class ESocialPartyInviteMethod : uint8
{
	Other                                    = 0,
	Notification                             = 1,
	Custom1                                  = 2,
	ESocialPartyInviteMethod_MAX             = 3,
};

// Enum Party.ESocialPartyInviteFailureReason
// NumValues: 0x000A
enum class ESocialPartyInviteFailureReason : uint8
{
	Success                                  = 0,
	NotOnline                                = 1,
	NotAcceptingMembers                      = 2,
	NotFriends                               = 3,
	AlreadyInParty                           = 4,
	OssValidationFailed                      = 5,
	PlatformInviteFailed                     = 6,
	PartyInviteFailed                        = 7,
	InviteRateLimitExceeded                  = 8,
	ESocialPartyInviteFailureReason_MAX      = 9,
};

// Enum Party.ESocialSubsystem
// NumValues: 0x0003
enum class ESocialSubsystem : uint8
{
	Primary                                  = 0,
	Platform                                 = 1,
	MAX                                      = 2,
};

// Enum Party.ESocialRelationship
// NumValues: 0x000A
enum class ESocialRelationship : uint8
{
	Any                                      = 0,
	FriendInviteReceived                     = 1,
	FriendInviteSent                         = 2,
	PartyInvite                              = 3,
	Friend                                   = 4,
	BlockedPlayer                            = 5,
	SuggestedFriend                          = 6,
	RecentPlayer                             = 7,
	JoinRequest                              = 8,
	ESocialRelationship_MAX                  = 9,
};

// Enum Party.ECrossplayPreference
// NumValues: 0x0005
enum class ECrossplayPreference : uint8
{
	NoSelection                              = 0,
	OptedIn                                  = 1,
	OptedOut                                 = 2,
	OptedOutRestricted                       = 3,
	ECrossplayPreference_MAX                 = 4,
};

// Enum Party.EPlatformIconDisplayRule
// NumValues: 0x0006
enum class EPlatformIconDisplayRule : uint8
{
	Always                                   = 0,
	AlwaysIfDifferent                        = 1,
	AlwaysWhenInCrossplayParty               = 2,
	AlwaysIfDifferentWhenInCrossplayParty    = 3,
	Never                                    = 4,
	EPlatformIconDisplayRule_MAX             = 5,
};

// ScriptStruct Party.PartyPrivacySettings
// 0x0003 (0x0003 - 0x0000)
struct FPartyPrivacySettings final
{
public:
	EPartyType                                    PartyType;                                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPartyInviteRestriction                       PartyInviteRestriction;                            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnlyLeaderFriendsCanJoin;                         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartyPrivacySettings) == 0x000001, "Wrong alignment on FPartyPrivacySettings");
static_assert(sizeof(FPartyPrivacySettings) == 0x000003, "Wrong size on FPartyPrivacySettings");
static_assert(offsetof(FPartyPrivacySettings, PartyType) == 0x000000, "Member 'FPartyPrivacySettings::PartyType' has a wrong offset!");
static_assert(offsetof(FPartyPrivacySettings, PartyInviteRestriction) == 0x000001, "Member 'FPartyPrivacySettings::PartyInviteRestriction' has a wrong offset!");
static_assert(offsetof(FPartyPrivacySettings, bOnlyLeaderFriendsCanJoin) == 0x000002, "Member 'FPartyPrivacySettings::bOnlyLeaderFriendsCanJoin' has a wrong offset!");

// ScriptStruct Party.PartyPlatformSessionInfo
// 0x0050 (0x0050 - 0x0000)
struct FPartyPlatformSessionInfo final
{
public:
	class FString                                 SessionType;                                       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SESSIONID;                                         // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       OwnerPrimaryId;                                    // 0x0020(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartyPlatformSessionInfo) == 0x000008, "Wrong alignment on FPartyPlatformSessionInfo");
static_assert(sizeof(FPartyPlatformSessionInfo) == 0x000050, "Wrong size on FPartyPlatformSessionInfo");
static_assert(offsetof(FPartyPlatformSessionInfo, SessionType) == 0x000000, "Member 'FPartyPlatformSessionInfo::SessionType' has a wrong offset!");
static_assert(offsetof(FPartyPlatformSessionInfo, SESSIONID) == 0x000010, "Member 'FPartyPlatformSessionInfo::SESSIONID' has a wrong offset!");
static_assert(offsetof(FPartyPlatformSessionInfo, OwnerPrimaryId) == 0x000020, "Member 'FPartyPlatformSessionInfo::OwnerPrimaryId' has a wrong offset!");

// ScriptStruct Party.OnlinePartyRepDataBase
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FOnlinePartyRepDataBase
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FOnlinePartyRepDataBase) == 0x000008, "Wrong alignment on FOnlinePartyRepDataBase");
static_assert(sizeof(FOnlinePartyRepDataBase) == 0x000018, "Wrong size on FOnlinePartyRepDataBase");

// ScriptStruct Party.PartyRepData
// 0x0068 (0x0080 - 0x0018)
struct FPartyRepData final : public FOnlinePartyRepDataBase
{
public:
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPartyPrivacySettings                  PrivacySettings;                                   // 0x0020(0x0003)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_23[0x35];                                      // 0x0023(0x0035)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPartyPlatformSessionInfo>      PlatformSessions;                                  // 0x0058(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_68[0x18];                                      // 0x0068(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPartyRepData) == 0x000008, "Wrong alignment on FPartyRepData");
static_assert(sizeof(FPartyRepData) == 0x000080, "Wrong size on FPartyRepData");
static_assert(offsetof(FPartyRepData, PrivacySettings) == 0x000020, "Member 'FPartyRepData::PrivacySettings' has a wrong offset!");
static_assert(offsetof(FPartyRepData, PlatformSessions) == 0x000058, "Member 'FPartyRepData::PlatformSessions' has a wrong offset!");

// ScriptStruct Party.SocialPlatformDescription
// 0x0060 (0x0060 - 0x0000)
struct FSocialPlatformDescription final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PlatformType;                                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   OnlineSubsystem;                                   // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SessionType;                                       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExternalAccountType;                               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CrossplayPool;                                     // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSocialPlatformDescription) == 0x000008, "Wrong alignment on FSocialPlatformDescription");
static_assert(sizeof(FSocialPlatformDescription) == 0x000060, "Wrong size on FSocialPlatformDescription");
static_assert(offsetof(FSocialPlatformDescription, Name) == 0x000000, "Member 'FSocialPlatformDescription::Name' has a wrong offset!");
static_assert(offsetof(FSocialPlatformDescription, PlatformType) == 0x000010, "Member 'FSocialPlatformDescription::PlatformType' has a wrong offset!");
static_assert(offsetof(FSocialPlatformDescription, OnlineSubsystem) == 0x000020, "Member 'FSocialPlatformDescription::OnlineSubsystem' has a wrong offset!");
static_assert(offsetof(FSocialPlatformDescription, SessionType) == 0x000030, "Member 'FSocialPlatformDescription::SessionType' has a wrong offset!");
static_assert(offsetof(FSocialPlatformDescription, ExternalAccountType) == 0x000040, "Member 'FSocialPlatformDescription::ExternalAccountType' has a wrong offset!");
static_assert(offsetof(FSocialPlatformDescription, CrossplayPool) == 0x000050, "Member 'FSocialPlatformDescription::CrossplayPool' has a wrong offset!");

// ScriptStruct Party.UserPlatform
// 0x0060 (0x0060 - 0x0000)
struct FUserPlatform final
{
public:
	struct FSocialPlatformDescription             PlatformDescription;                               // 0x0000(0x0060)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FUserPlatform) == 0x000008, "Wrong alignment on FUserPlatform");
static_assert(sizeof(FUserPlatform) == 0x000060, "Wrong size on FUserPlatform");
static_assert(offsetof(FUserPlatform, PlatformDescription) == 0x000000, "Member 'FUserPlatform::PlatformDescription' has a wrong offset!");

// ScriptStruct Party.PartyMemberPlatformData
// 0x00A0 (0x00A0 - 0x0000)
struct FPartyMemberPlatformData final
{
public:
	struct FUserPlatform                          platform;                                          // 0x0000(0x0060)(NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0060(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SESSIONID;                                         // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartyMemberPlatformData) == 0x000008, "Wrong alignment on FPartyMemberPlatformData");
static_assert(sizeof(FPartyMemberPlatformData) == 0x0000A0, "Wrong size on FPartyMemberPlatformData");
static_assert(offsetof(FPartyMemberPlatformData, platform) == 0x000000, "Member 'FPartyMemberPlatformData::platform' has a wrong offset!");
static_assert(offsetof(FPartyMemberPlatformData, UniqueId) == 0x000060, "Member 'FPartyMemberPlatformData::UniqueId' has a wrong offset!");
static_assert(offsetof(FPartyMemberPlatformData, SESSIONID) == 0x000090, "Member 'FPartyMemberPlatformData::SESSIONID' has a wrong offset!");

// ScriptStruct Party.PartyMemberJoinInProgressRequest
// 0x0038 (0x0038 - 0x0000)
struct FPartyMemberJoinInProgressRequest final
{
public:
	struct FUniqueNetIdRepl                       Target;                                            // 0x0000(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         Time;                                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartyMemberJoinInProgressRequest) == 0x000008, "Wrong alignment on FPartyMemberJoinInProgressRequest");
static_assert(sizeof(FPartyMemberJoinInProgressRequest) == 0x000038, "Wrong size on FPartyMemberJoinInProgressRequest");
static_assert(offsetof(FPartyMemberJoinInProgressRequest, Target) == 0x000000, "Member 'FPartyMemberJoinInProgressRequest::Target' has a wrong offset!");
static_assert(offsetof(FPartyMemberJoinInProgressRequest, Time) == 0x000030, "Member 'FPartyMemberJoinInProgressRequest::Time' has a wrong offset!");

// ScriptStruct Party.PartyMemberJoinInProgressResponse
// 0x0048 (0x0048 - 0x0000)
struct FPartyMemberJoinInProgressResponse final
{
public:
	struct FUniqueNetIdRepl                       requester;                                         // 0x0000(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         RequestTime;                                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         ResponseTime;                                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         DenialReason;                                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPartyMemberJoinInProgressResponse) == 0x000008, "Wrong alignment on FPartyMemberJoinInProgressResponse");
static_assert(sizeof(FPartyMemberJoinInProgressResponse) == 0x000048, "Wrong size on FPartyMemberJoinInProgressResponse");
static_assert(offsetof(FPartyMemberJoinInProgressResponse, requester) == 0x000000, "Member 'FPartyMemberJoinInProgressResponse::requester' has a wrong offset!");
static_assert(offsetof(FPartyMemberJoinInProgressResponse, RequestTime) == 0x000030, "Member 'FPartyMemberJoinInProgressResponse::RequestTime' has a wrong offset!");
static_assert(offsetof(FPartyMemberJoinInProgressResponse, ResponseTime) == 0x000038, "Member 'FPartyMemberJoinInProgressResponse::ResponseTime' has a wrong offset!");
static_assert(offsetof(FPartyMemberJoinInProgressResponse, DenialReason) == 0x000040, "Member 'FPartyMemberJoinInProgressResponse::DenialReason' has a wrong offset!");

// ScriptStruct Party.PartyMemberJoinInProgressData
// 0x0048 (0x0048 - 0x0000)
struct FPartyMemberJoinInProgressData final
{
public:
	struct FPartyMemberJoinInProgressRequest      Request;                                           // 0x0000(0x0038)(NativeAccessSpecifierPublic)
	TArray<struct FPartyMemberJoinInProgressResponse> Responses;                                     // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartyMemberJoinInProgressData) == 0x000008, "Wrong alignment on FPartyMemberJoinInProgressData");
static_assert(sizeof(FPartyMemberJoinInProgressData) == 0x000048, "Wrong size on FPartyMemberJoinInProgressData");
static_assert(offsetof(FPartyMemberJoinInProgressData, Request) == 0x000000, "Member 'FPartyMemberJoinInProgressData::Request' has a wrong offset!");
static_assert(offsetof(FPartyMemberJoinInProgressData, Responses) == 0x000038, "Member 'FPartyMemberJoinInProgressData::Responses' has a wrong offset!");

// ScriptStruct Party.PartyMemberRepData
// 0x0258 (0x0270 - 0x0018)
struct FPartyMemberRepData final : public FOnlinePartyRepDataBase
{
public:
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPartyMemberPlatformData               PlatformData;                                      // 0x0020(0x00A0)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_C0[0x90];                                      // 0x00C0(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	ECrossplayPreference                          CrossplayPreference;                               // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_151[0x37];                                     // 0x0151(0x0037)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 JoinMethod;                                        // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_198[0x30];                                     // 0x0198(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPartyMemberJoinInProgressData         JoinInProgressData;                                // 0x01C8(0x0048)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_210[0x60];                                     // 0x0210(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPartyMemberRepData) == 0x000008, "Wrong alignment on FPartyMemberRepData");
static_assert(sizeof(FPartyMemberRepData) == 0x000270, "Wrong size on FPartyMemberRepData");
static_assert(offsetof(FPartyMemberRepData, PlatformData) == 0x000020, "Member 'FPartyMemberRepData::PlatformData' has a wrong offset!");
static_assert(offsetof(FPartyMemberRepData, CrossplayPreference) == 0x000150, "Member 'FPartyMemberRepData::CrossplayPreference' has a wrong offset!");
static_assert(offsetof(FPartyMemberRepData, JoinMethod) == 0x000188, "Member 'FPartyMemberRepData::JoinMethod' has a wrong offset!");
static_assert(offsetof(FPartyMemberRepData, JoinInProgressData) == 0x0001C8, "Member 'FPartyMemberRepData::JoinInProgressData' has a wrong offset!");

// ScriptStruct Party.SocialChatChannelConfig
// 0x0040 (0x0040 - 0x0000)
struct FSocialChatChannelConfig final
{
public:
	class USocialUser*                            SocialUser;                                        // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USocialChatChannel*>             ListenChannels;                                    // 0x0018(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSocialChatChannelConfig) == 0x000008, "Wrong alignment on FSocialChatChannelConfig");
static_assert(sizeof(FSocialChatChannelConfig) == 0x000040, "Wrong size on FSocialChatChannelConfig");
static_assert(offsetof(FSocialChatChannelConfig, SocialUser) == 0x000000, "Member 'FSocialChatChannelConfig::SocialUser' has a wrong offset!");
static_assert(offsetof(FSocialChatChannelConfig, ListenChannels) == 0x000018, "Member 'FSocialChatChannelConfig::ListenChannels' has a wrong offset!");

}

