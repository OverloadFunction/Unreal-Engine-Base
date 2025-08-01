﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EngineMessages

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001 (0x0001 - 0x0000)
struct FEngineServicePing final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEngineServicePing) == 0x000001, "Wrong alignment on FEngineServicePing");
static_assert(sizeof(FEngineServicePing) == 0x000001, "Wrong size on FEngineServicePing");

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050 (0x0050 - 0x0000)
struct FEngineServicePong final
{
public:
	class FString                                 CurrentLevel;                                      // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EngineVersion;                                     // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasBegunPlay;                                      // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  InstanceId;                                        // 0x0018(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InstanceType;                                      // 0x0028(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  SESSIONID;                                         // 0x0038(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldTimeSeconds;                                  // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEngineServicePong) == 0x000008, "Wrong alignment on FEngineServicePong");
static_assert(sizeof(FEngineServicePong) == 0x000050, "Wrong size on FEngineServicePong");
static_assert(offsetof(FEngineServicePong, CurrentLevel) == 0x000000, "Member 'FEngineServicePong::CurrentLevel' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, EngineVersion) == 0x000010, "Member 'FEngineServicePong::EngineVersion' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, HasBegunPlay) == 0x000014, "Member 'FEngineServicePong::HasBegunPlay' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, InstanceId) == 0x000018, "Member 'FEngineServicePong::InstanceId' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, InstanceType) == 0x000028, "Member 'FEngineServicePong::InstanceType' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, SESSIONID) == 0x000038, "Member 'FEngineServicePong::SESSIONID' has a wrong offset!");
static_assert(offsetof(FEngineServicePong, WorldTimeSeconds) == 0x000048, "Member 'FEngineServicePong::WorldTimeSeconds' has a wrong offset!");

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020 (0x0020 - 0x0000)
struct FEngineServiceAuthDeny final
{
public:
	class FString                                 UserName;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UserToDeny;                                        // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEngineServiceAuthDeny) == 0x000008, "Wrong alignment on FEngineServiceAuthDeny");
static_assert(sizeof(FEngineServiceAuthDeny) == 0x000020, "Wrong size on FEngineServiceAuthDeny");
static_assert(offsetof(FEngineServiceAuthDeny, UserName) == 0x000000, "Member 'FEngineServiceAuthDeny::UserName' has a wrong offset!");
static_assert(offsetof(FEngineServiceAuthDeny, UserToDeny) == 0x000010, "Member 'FEngineServiceAuthDeny::UserToDeny' has a wrong offset!");

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020 (0x0020 - 0x0000)
struct FEngineServiceAuthGrant final
{
public:
	class FString                                 UserName;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UserToGrant;                                       // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEngineServiceAuthGrant) == 0x000008, "Wrong alignment on FEngineServiceAuthGrant");
static_assert(sizeof(FEngineServiceAuthGrant) == 0x000020, "Wrong size on FEngineServiceAuthGrant");
static_assert(offsetof(FEngineServiceAuthGrant, UserName) == 0x000000, "Member 'FEngineServiceAuthGrant::UserName' has a wrong offset!");
static_assert(offsetof(FEngineServiceAuthGrant, UserToGrant) == 0x000010, "Member 'FEngineServiceAuthGrant::UserToGrant' has a wrong offset!");

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020 (0x0020 - 0x0000)
struct FEngineServiceExecuteCommand final
{
public:
	class FString                                 Command;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UserName;                                          // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEngineServiceExecuteCommand) == 0x000008, "Wrong alignment on FEngineServiceExecuteCommand");
static_assert(sizeof(FEngineServiceExecuteCommand) == 0x000020, "Wrong size on FEngineServiceExecuteCommand");
static_assert(offsetof(FEngineServiceExecuteCommand, Command) == 0x000000, "Member 'FEngineServiceExecuteCommand::Command' has a wrong offset!");
static_assert(offsetof(FEngineServiceExecuteCommand, UserName) == 0x000010, "Member 'FEngineServiceExecuteCommand::UserName' has a wrong offset!");

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010 (0x0010 - 0x0000)
struct FEngineServiceTerminate final
{
public:
	class FString                                 UserName;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEngineServiceTerminate) == 0x000008, "Wrong alignment on FEngineServiceTerminate");
static_assert(sizeof(FEngineServiceTerminate) == 0x000010, "Wrong size on FEngineServiceTerminate");
static_assert(offsetof(FEngineServiceTerminate, UserName) == 0x000000, "Member 'FEngineServiceTerminate::UserName' has a wrong offset!");

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018 (0x0018 - 0x0000)
struct FEngineServiceNotification final
{
public:
	class FString                                 Text;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        TimeSeconds;                                       // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEngineServiceNotification) == 0x000008, "Wrong alignment on FEngineServiceNotification");
static_assert(sizeof(FEngineServiceNotification) == 0x000018, "Wrong size on FEngineServiceNotification");
static_assert(offsetof(FEngineServiceNotification, Text) == 0x000000, "Member 'FEngineServiceNotification::Text' has a wrong offset!");
static_assert(offsetof(FEngineServiceNotification, TimeSeconds) == 0x000010, "Member 'FEngineServiceNotification::TimeSeconds' has a wrong offset!");

}

