﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SystemUtilities

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "SystemUtilities_structs.hpp"


namespace SDK
{

// Class SystemUtilities.ArrayExt
// 0x0000 (0x0030 - 0x0030)
class UArrayExt final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArrayExt">();
	}
	static class UArrayExt* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArrayExt>();
	}
};
static_assert(alignof(UArrayExt) == 0x000008, "Wrong alignment on UArrayExt");
static_assert(sizeof(UArrayExt) == 0x000030, "Wrong size on UArrayExt");

// Class SystemUtilities.DateTimeProvider
// 0x0000 (0x0030 - 0x0030)
class UDateTimeProvider : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DateTimeProvider">();
	}
	static class UDateTimeProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDateTimeProvider>();
	}
};
static_assert(alignof(UDateTimeProvider) == 0x000008, "Wrong alignment on UDateTimeProvider");
static_assert(sizeof(UDateTimeProvider) == 0x000030, "Wrong size on UDateTimeProvider");

// Class SystemUtilities.BoolExt
// 0x0000 (0x0030 - 0x0030)
class UBoolExt final : public UBlueprintFunctionLibrary
{
public:
	static class FString ToString(const bool boolToConvert);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BoolExt">();
	}
	static class UBoolExt* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoolExt>();
	}
};
static_assert(alignof(UBoolExt) == 0x000008, "Wrong alignment on UBoolExt");
static_assert(sizeof(UBoolExt) == 0x000030, "Wrong size on UBoolExt");

// Class SystemUtilities.TimeProviderMock
// 0x0008 (0x0038 - 0x0030)
class UTimeProviderMock final : public UDateTimeProvider
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeProviderMock">();
	}
	static class UTimeProviderMock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeProviderMock>();
	}
};
static_assert(alignof(UTimeProviderMock) == 0x000008, "Wrong alignment on UTimeProviderMock");
static_assert(sizeof(UTimeProviderMock) == 0x000038, "Wrong size on UTimeProviderMock");

// Class SystemUtilities.DateTimerUpdater
// 0x00A8 (0x00D8 - 0x0030)
class UDateTimerUpdater final : public UObject
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TSubclassOf<class UDateTimeProvider>, struct FDateTimerArray> _timers;                      // 0x0038(0x0050)(NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UDateTimeProvider>, class UDateTimeProvider*> _dateTimeProvider;          // 0x0088(0x0050)(NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DateTimerUpdater">();
	}
	static class UDateTimerUpdater* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDateTimerUpdater>();
	}
};
static_assert(alignof(UDateTimerUpdater) == 0x000008, "Wrong alignment on UDateTimerUpdater");
static_assert(sizeof(UDateTimerUpdater) == 0x0000D8, "Wrong size on UDateTimerUpdater");
static_assert(offsetof(UDateTimerUpdater, _timers) == 0x000038, "Member 'UDateTimerUpdater::_timers' has a wrong offset!");
static_assert(offsetof(UDateTimerUpdater, _dateTimeProvider) == 0x000088, "Member 'UDateTimerUpdater::_dateTimeProvider' has a wrong offset!");

// Class SystemUtilities.DebugUtilities
// 0x0000 (0x0030 - 0x0030)
class UDebugUtilities final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DebugUtilities">();
	}
	static class UDebugUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugUtilities>();
	}
};
static_assert(alignof(UDebugUtilities) == 0x000008, "Wrong alignment on UDebugUtilities");
static_assert(sizeof(UDebugUtilities) == 0x000030, "Wrong size on UDebugUtilities");

// Class SystemUtilities.GameStreamingSubsytem
// 0x0000 (0x0038 - 0x0038)
class UGameStreamingSubsytem : public UGameInstanceSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameStreamingSubsytem">();
	}
	static class UGameStreamingSubsytem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameStreamingSubsytem>();
	}
};
static_assert(alignof(UGameStreamingSubsytem) == 0x000008, "Wrong alignment on UGameStreamingSubsytem");
static_assert(sizeof(UGameStreamingSubsytem) == 0x000038, "Wrong size on UGameStreamingSubsytem");

// Class SystemUtilities.GameStreamingGDK
// 0x0000 (0x0038 - 0x0038)
class UGameStreamingGDK final : public UGameStreamingSubsytem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameStreamingGDK">();
	}
	static class UGameStreamingGDK* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameStreamingGDK>();
	}
};
static_assert(alignof(UGameStreamingGDK) == 0x000008, "Wrong alignment on UGameStreamingGDK");
static_assert(sizeof(UGameStreamingGDK) == 0x000038, "Wrong size on UGameStreamingGDK");

// Class SystemUtilities.GameStreamingGeForceNow
// 0x0000 (0x0038 - 0x0038)
class UGameStreamingGeForceNow final : public UGameStreamingSubsytem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameStreamingGeForceNow">();
	}
	static class UGameStreamingGeForceNow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameStreamingGeForceNow>();
	}
};
static_assert(alignof(UGameStreamingGeForceNow) == 0x000008, "Wrong alignment on UGameStreamingGeForceNow");
static_assert(sizeof(UGameStreamingGeForceNow) == 0x000038, "Wrong size on UGameStreamingGeForceNow");

// Class SystemUtilities.PlatformUtilities
// 0x0000 (0x0030 - 0x0030)
class UPlatformUtilities final : public UBlueprintFunctionLibrary
{
public:
	static class FString GetPlatform();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformUtilities">();
	}
	static class UPlatformUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformUtilities>();
	}
};
static_assert(alignof(UPlatformUtilities) == 0x000008, "Wrong alignment on UPlatformUtilities");
static_assert(sizeof(UPlatformUtilities) == 0x000030, "Wrong size on UPlatformUtilities");

}

