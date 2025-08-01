﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IrisCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "IrisCore_structs.hpp"


namespace SDK
{

// Class IrisCore.DataStream
// 0x0000 (0x0030 - 0x0030)
class UDataStream : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataStream">();
	}
	static class UDataStream* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataStream>();
	}
};
static_assert(alignof(UDataStream) == 0x000008, "Wrong alignment on UDataStream");
static_assert(sizeof(UDataStream) == 0x000030, "Wrong size on UDataStream");

// Class IrisCore.DataStreamDefinitions
// 0x0018 (0x0048 - 0x0030)
class UDataStreamDefinitions final : public UObject
{
public:
	TArray<struct FDataStreamDefinition>          DataStreamDefinitions;                             // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                         Pad_40[0x8];                                       // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataStreamDefinitions">();
	}
	static class UDataStreamDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataStreamDefinitions>();
	}
};
static_assert(alignof(UDataStreamDefinitions) == 0x000008, "Wrong alignment on UDataStreamDefinitions");
static_assert(sizeof(UDataStreamDefinitions) == 0x000048, "Wrong size on UDataStreamDefinitions");
static_assert(offsetof(UDataStreamDefinitions, DataStreamDefinitions) == 0x000030, "Member 'UDataStreamDefinitions::DataStreamDefinitions' has a wrong offset!");

// Class IrisCore.DataStreamManager
// 0x0008 (0x0038 - 0x0030)
class UDataStreamManager final : public UDataStream
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataStreamManager">();
	}
	static class UDataStreamManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataStreamManager>();
	}
};
static_assert(alignof(UDataStreamManager) == 0x000008, "Wrong alignment on UDataStreamManager");
static_assert(sizeof(UDataStreamManager) == 0x000038, "Wrong size on UDataStreamManager");

// Class IrisCore.NetObjectFilterConfig
// 0x0000 (0x0030 - 0x0030)
class UNetObjectFilterConfig : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectFilterConfig">();
	}
	static class UNetObjectFilterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectFilterConfig>();
	}
};
static_assert(alignof(UNetObjectFilterConfig) == 0x000008, "Wrong alignment on UNetObjectFilterConfig");
static_assert(sizeof(UNetObjectFilterConfig) == 0x000030, "Wrong size on UNetObjectFilterConfig");

// Class IrisCore.FilterOutNetObjectFilterConfig
// 0x0000 (0x0030 - 0x0030)
class UFilterOutNetObjectFilterConfig final : public UNetObjectFilterConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FilterOutNetObjectFilterConfig">();
	}
	static class UFilterOutNetObjectFilterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterOutNetObjectFilterConfig>();
	}
};
static_assert(alignof(UFilterOutNetObjectFilterConfig) == 0x000008, "Wrong alignment on UFilterOutNetObjectFilterConfig");
static_assert(sizeof(UFilterOutNetObjectFilterConfig) == 0x000030, "Wrong size on UFilterOutNetObjectFilterConfig");

// Class IrisCore.NetObjectFilter
// 0x0000 (0x0030 - 0x0030)
class UNetObjectFilter : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectFilter">();
	}
	static class UNetObjectFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectFilter>();
	}
};
static_assert(alignof(UNetObjectFilter) == 0x000008, "Wrong alignment on UNetObjectFilter");
static_assert(sizeof(UNetObjectFilter) == 0x000030, "Wrong size on UNetObjectFilter");

// Class IrisCore.FilterOutNetObjectFilter
// 0x0000 (0x0030 - 0x0030)
class UFilterOutNetObjectFilter final : public UNetObjectFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FilterOutNetObjectFilter">();
	}
	static class UFilterOutNetObjectFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterOutNetObjectFilter>();
	}
};
static_assert(alignof(UFilterOutNetObjectFilter) == 0x000008, "Wrong alignment on UFilterOutNetObjectFilter");
static_assert(sizeof(UFilterOutNetObjectFilter) == 0x000030, "Wrong size on UFilterOutNetObjectFilter");

// Class IrisCore.IrisObjectReferencePackageMap
// 0x0008 (0x00F0 - 0x00E8)
class UIrisObjectReferencePackageMap final : public UPackageMap
{
public:
	uint8                                         Pad_E8[0x8];                                       // 0x00E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IrisObjectReferencePackageMap">();
	}
	static class UIrisObjectReferencePackageMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIrisObjectReferencePackageMap>();
	}
};
static_assert(alignof(UIrisObjectReferencePackageMap) == 0x000008, "Wrong alignment on UIrisObjectReferencePackageMap");
static_assert(sizeof(UIrisObjectReferencePackageMap) == 0x0000F0, "Wrong size on UIrisObjectReferencePackageMap");

// Class IrisCore.NetObjectPrioritizer
// 0x0000 (0x0030 - 0x0030)
class UNetObjectPrioritizer : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectPrioritizer">();
	}
	static class UNetObjectPrioritizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectPrioritizer>();
	}
};
static_assert(alignof(UNetObjectPrioritizer) == 0x000008, "Wrong alignment on UNetObjectPrioritizer");
static_assert(sizeof(UNetObjectPrioritizer) == 0x000030, "Wrong size on UNetObjectPrioritizer");

// Class IrisCore.LocationBasedNetObjectPrioritizer
// 0x0038 (0x0068 - 0x0030)
class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer
{
public:
	uint8                                         Pad_30[0x38];                                      // 0x0030(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocationBasedNetObjectPrioritizer">();
	}
	static class ULocationBasedNetObjectPrioritizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocationBasedNetObjectPrioritizer>();
	}
};
static_assert(alignof(ULocationBasedNetObjectPrioritizer) == 0x000008, "Wrong alignment on ULocationBasedNetObjectPrioritizer");
static_assert(sizeof(ULocationBasedNetObjectPrioritizer) == 0x000068, "Wrong size on ULocationBasedNetObjectPrioritizer");

// Class IrisCore.NetBlobHandler
// 0x0010 (0x0040 - 0x0030)
class UNetBlobHandler : public UObject
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetBlobHandler">();
	}
	static class UNetBlobHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetBlobHandler>();
	}
};
static_assert(alignof(UNetBlobHandler) == 0x000008, "Wrong alignment on UNetBlobHandler");
static_assert(sizeof(UNetBlobHandler) == 0x000040, "Wrong size on UNetBlobHandler");

// Class IrisCore.NetBlobHandlerDefinitions
// 0x0010 (0x0040 - 0x0030)
class UNetBlobHandlerDefinitions final : public UObject
{
public:
	TArray<struct FNetBlobHandlerDefinition>      NetBlobHandlerDefinitions;                         // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetBlobHandlerDefinitions">();
	}
	static class UNetBlobHandlerDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetBlobHandlerDefinitions>();
	}
};
static_assert(alignof(UNetBlobHandlerDefinitions) == 0x000008, "Wrong alignment on UNetBlobHandlerDefinitions");
static_assert(sizeof(UNetBlobHandlerDefinitions) == 0x000040, "Wrong size on UNetBlobHandlerDefinitions");
static_assert(offsetof(UNetBlobHandlerDefinitions, NetBlobHandlerDefinitions) == 0x000030, "Member 'UNetBlobHandlerDefinitions::NetBlobHandlerDefinitions' has a wrong offset!");

// Class IrisCore.NetObjectBlobHandler
// 0x0000 (0x0040 - 0x0040)
class UNetObjectBlobHandler final : public UNetBlobHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectBlobHandler">();
	}
	static class UNetObjectBlobHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectBlobHandler>();
	}
};
static_assert(alignof(UNetObjectBlobHandler) == 0x000008, "Wrong alignment on UNetObjectBlobHandler");
static_assert(sizeof(UNetObjectBlobHandler) == 0x000040, "Wrong size on UNetObjectBlobHandler");

// Class IrisCore.NetObjectPrioritizerConfig
// 0x0000 (0x0030 - 0x0030)
class UNetObjectPrioritizerConfig : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectPrioritizerConfig">();
	}
	static class UNetObjectPrioritizerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectPrioritizerConfig>();
	}
};
static_assert(alignof(UNetObjectPrioritizerConfig) == 0x000008, "Wrong alignment on UNetObjectPrioritizerConfig");
static_assert(sizeof(UNetObjectPrioritizerConfig) == 0x000030, "Wrong size on UNetObjectPrioritizerConfig");

// Class IrisCore.NetObjectCountLimiterConfig
// 0x0018 (0x0048 - 0x0030)
class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{
public:
	ENetObjectCountLimiterMode                    Mode;                                              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        MaxObjectCount;                                    // 0x0034(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Priority;                                          // 0x0038(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OwningConnectionPriority;                          // 0x003C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableOwnedObjectsFastLane;                       // 0x0040(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectCountLimiterConfig">();
	}
	static class UNetObjectCountLimiterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectCountLimiterConfig>();
	}
};
static_assert(alignof(UNetObjectCountLimiterConfig) == 0x000008, "Wrong alignment on UNetObjectCountLimiterConfig");
static_assert(sizeof(UNetObjectCountLimiterConfig) == 0x000048, "Wrong size on UNetObjectCountLimiterConfig");
static_assert(offsetof(UNetObjectCountLimiterConfig, Mode) == 0x000030, "Member 'UNetObjectCountLimiterConfig::Mode' has a wrong offset!");
static_assert(offsetof(UNetObjectCountLimiterConfig, MaxObjectCount) == 0x000034, "Member 'UNetObjectCountLimiterConfig::MaxObjectCount' has a wrong offset!");
static_assert(offsetof(UNetObjectCountLimiterConfig, Priority) == 0x000038, "Member 'UNetObjectCountLimiterConfig::Priority' has a wrong offset!");
static_assert(offsetof(UNetObjectCountLimiterConfig, OwningConnectionPriority) == 0x00003C, "Member 'UNetObjectCountLimiterConfig::OwningConnectionPriority' has a wrong offset!");
static_assert(offsetof(UNetObjectCountLimiterConfig, bEnableOwnedObjectsFastLane) == 0x000040, "Member 'UNetObjectCountLimiterConfig::bEnableOwnedObjectsFastLane' has a wrong offset!");

// Class IrisCore.NetObjectCountLimiter
// 0x0068 (0x0098 - 0x0030)
class UNetObjectCountLimiter final : public UNetObjectPrioritizer
{
public:
	uint8                                         Pad_30[0x68];                                      // 0x0030(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectCountLimiter">();
	}
	static class UNetObjectCountLimiter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectCountLimiter>();
	}
};
static_assert(alignof(UNetObjectCountLimiter) == 0x000008, "Wrong alignment on UNetObjectCountLimiter");
static_assert(sizeof(UNetObjectCountLimiter) == 0x000098, "Wrong size on UNetObjectCountLimiter");

// Class IrisCore.NetObjectFilterDefinitions
// 0x0010 (0x0040 - 0x0030)
class UNetObjectFilterDefinitions final : public UObject
{
public:
	TArray<struct FNetObjectFilterDefinition>     NetObjectFilterDefinitions;                        // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectFilterDefinitions">();
	}
	static class UNetObjectFilterDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectFilterDefinitions>();
	}
};
static_assert(alignof(UNetObjectFilterDefinitions) == 0x000008, "Wrong alignment on UNetObjectFilterDefinitions");
static_assert(sizeof(UNetObjectFilterDefinitions) == 0x000040, "Wrong size on UNetObjectFilterDefinitions");
static_assert(offsetof(UNetObjectFilterDefinitions, NetObjectFilterDefinitions) == 0x000030, "Member 'UNetObjectFilterDefinitions::NetObjectFilterDefinitions' has a wrong offset!");

// Class IrisCore.NetObjectGridFilterConfig
// 0x0048 (0x0078 - 0x0030)
class UNetObjectGridFilterConfig final : public UNetObjectFilterConfig
{
public:
	uint32                                        ViewPosRelevancyFrameCount;                        // 0x0030(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellSizeX;                                         // 0x0034(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellSizeY;                                         // 0x0038(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxCullDistance;                                   // 0x003C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultCullDistance;                               // 0x0040(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MinPos;                                            // 0x0048(0x0018)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                MaxPos;                                            // 0x0060(0x0018)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectGridFilterConfig">();
	}
	static class UNetObjectGridFilterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectGridFilterConfig>();
	}
};
static_assert(alignof(UNetObjectGridFilterConfig) == 0x000008, "Wrong alignment on UNetObjectGridFilterConfig");
static_assert(sizeof(UNetObjectGridFilterConfig) == 0x000078, "Wrong size on UNetObjectGridFilterConfig");
static_assert(offsetof(UNetObjectGridFilterConfig, ViewPosRelevancyFrameCount) == 0x000030, "Member 'UNetObjectGridFilterConfig::ViewPosRelevancyFrameCount' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, CellSizeX) == 0x000034, "Member 'UNetObjectGridFilterConfig::CellSizeX' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, CellSizeY) == 0x000038, "Member 'UNetObjectGridFilterConfig::CellSizeY' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, MaxCullDistance) == 0x00003C, "Member 'UNetObjectGridFilterConfig::MaxCullDistance' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, DefaultCullDistance) == 0x000040, "Member 'UNetObjectGridFilterConfig::DefaultCullDistance' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, MinPos) == 0x000048, "Member 'UNetObjectGridFilterConfig::MinPos' has a wrong offset!");
static_assert(offsetof(UNetObjectGridFilterConfig, MaxPos) == 0x000060, "Member 'UNetObjectGridFilterConfig::MaxPos' has a wrong offset!");

// Class IrisCore.NetObjectGridFilter
// 0x00B0 (0x00E0 - 0x0030)
class UNetObjectGridFilter final : public UNetObjectFilter
{
public:
	uint8                                         Pad_30[0xB0];                                      // 0x0030(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectGridFilter">();
	}
	static class UNetObjectGridFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectGridFilter>();
	}
};
static_assert(alignof(UNetObjectGridFilter) == 0x000008, "Wrong alignment on UNetObjectGridFilter");
static_assert(sizeof(UNetObjectGridFilter) == 0x0000E0, "Wrong size on UNetObjectGridFilter");

// Class IrisCore.NetObjectPrioritizerDefinitions
// 0x0010 (0x0040 - 0x0030)
class UNetObjectPrioritizerDefinitions final : public UObject
{
public:
	TArray<struct FNetObjectPrioritizerDefinition> NetObjectPrioritizerDefinitions;                  // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetObjectPrioritizerDefinitions">();
	}
	static class UNetObjectPrioritizerDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetObjectPrioritizerDefinitions>();
	}
};
static_assert(alignof(UNetObjectPrioritizerDefinitions) == 0x000008, "Wrong alignment on UNetObjectPrioritizerDefinitions");
static_assert(sizeof(UNetObjectPrioritizerDefinitions) == 0x000040, "Wrong size on UNetObjectPrioritizerDefinitions");
static_assert(offsetof(UNetObjectPrioritizerDefinitions, NetObjectPrioritizerDefinitions) == 0x000030, "Member 'UNetObjectPrioritizerDefinitions::NetObjectPrioritizerDefinitions' has a wrong offset!");

// Class IrisCore.NetRPCHandler
// 0x0008 (0x0048 - 0x0040)
class UNetRPCHandler final : public UNetBlobHandler
{
public:
	uint8                                         Pad_40[0x8];                                       // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetRPCHandler">();
	}
	static class UNetRPCHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetRPCHandler>();
	}
};
static_assert(alignof(UNetRPCHandler) == 0x000008, "Wrong alignment on UNetRPCHandler");
static_assert(sizeof(UNetRPCHandler) == 0x000048, "Wrong size on UNetRPCHandler");

// Class IrisCore.NetTokenDataStream
// 0x0050 (0x0080 - 0x0030)
class UNetTokenDataStream final : public UDataStream
{
public:
	uint8                                         Pad_30[0x50];                                      // 0x0030(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetTokenDataStream">();
	}
	static class UNetTokenDataStream* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetTokenDataStream>();
	}
};
static_assert(alignof(UNetTokenDataStream) == 0x000008, "Wrong alignment on UNetTokenDataStream");
static_assert(sizeof(UNetTokenDataStream) == 0x000080, "Wrong size on UNetTokenDataStream");

// Class IrisCore.NopNetObjectFilterConfig
// 0x0000 (0x0030 - 0x0030)
class UNopNetObjectFilterConfig final : public UNetObjectFilterConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NopNetObjectFilterConfig">();
	}
	static class UNopNetObjectFilterConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNopNetObjectFilterConfig>();
	}
};
static_assert(alignof(UNopNetObjectFilterConfig) == 0x000008, "Wrong alignment on UNopNetObjectFilterConfig");
static_assert(sizeof(UNopNetObjectFilterConfig) == 0x000030, "Wrong size on UNopNetObjectFilterConfig");

// Class IrisCore.NopNetObjectFilter
// 0x0000 (0x0030 - 0x0030)
class UNopNetObjectFilter final : public UNetObjectFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NopNetObjectFilter">();
	}
	static class UNopNetObjectFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNopNetObjectFilter>();
	}
};
static_assert(alignof(UNopNetObjectFilter) == 0x000008, "Wrong alignment on UNopNetObjectFilter");
static_assert(sizeof(UNopNetObjectFilter) == 0x000030, "Wrong size on UNopNetObjectFilter");

// Class IrisCore.ReplicationBridge
// 0x00E8 (0x0118 - 0x0030)
class UReplicationBridge : public UObject
{
public:
	uint8                                         Pad_30[0xE8];                                      // 0x0030(0x00E8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationBridge">();
	}
	static class UReplicationBridge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationBridge>();
	}
};
static_assert(alignof(UReplicationBridge) == 0x000008, "Wrong alignment on UReplicationBridge");
static_assert(sizeof(UReplicationBridge) == 0x000118, "Wrong size on UReplicationBridge");

// Class IrisCore.ObjectReplicationBridge
// 0x0328 (0x0440 - 0x0118)
class UObjectReplicationBridge : public UReplicationBridge
{
public:
	uint8                                         Pad_118[0x328];                                    // 0x0118(0x0328)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectReplicationBridge">();
	}
	static class UObjectReplicationBridge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectReplicationBridge>();
	}
};
static_assert(alignof(UObjectReplicationBridge) == 0x000008, "Wrong alignment on UObjectReplicationBridge");
static_assert(sizeof(UObjectReplicationBridge) == 0x000440, "Wrong size on UObjectReplicationBridge");

// Class IrisCore.ObjectReplicationBridgeConfig
// 0x0058 (0x0088 - 0x0030)
class UObjectReplicationBridgeConfig final : public UObject
{
public:
	TArray<struct FObjectReplicationBridgePollConfig> PollConfigs;                                   // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FObjectReplicationBridgeFilterConfig> FilterConfigs;                               // 0x0040(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FObjectReplicationBridgePrioritizerConfig> PrioritizerConfigs;                     // 0x0050(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs;           // 0x0060(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	class FName                                   DefaultSpatialFilterName;                          // 0x0070(0x000C)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   RequiredNetDriverChannelClassName;                 // 0x007C(0x000C)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectReplicationBridgeConfig">();
	}
	static class UObjectReplicationBridgeConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectReplicationBridgeConfig>();
	}
};
static_assert(alignof(UObjectReplicationBridgeConfig) == 0x000008, "Wrong alignment on UObjectReplicationBridgeConfig");
static_assert(sizeof(UObjectReplicationBridgeConfig) == 0x000088, "Wrong size on UObjectReplicationBridgeConfig");
static_assert(offsetof(UObjectReplicationBridgeConfig, PollConfigs) == 0x000030, "Member 'UObjectReplicationBridgeConfig::PollConfigs' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, FilterConfigs) == 0x000040, "Member 'UObjectReplicationBridgeConfig::FilterConfigs' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, PrioritizerConfigs) == 0x000050, "Member 'UObjectReplicationBridgeConfig::PrioritizerConfigs' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, DeltaCompressionConfigs) == 0x000060, "Member 'UObjectReplicationBridgeConfig::DeltaCompressionConfigs' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, DefaultSpatialFilterName) == 0x000070, "Member 'UObjectReplicationBridgeConfig::DefaultSpatialFilterName' has a wrong offset!");
static_assert(offsetof(UObjectReplicationBridgeConfig, RequiredNetDriverChannelClassName) == 0x00007C, "Member 'UObjectReplicationBridgeConfig::RequiredNetDriverChannelClassName' has a wrong offset!");

// Class IrisCore.SequentialPartialNetBlobHandlerConfig
// 0x0008 (0x0038 - 0x0030)
class USequentialPartialNetBlobHandlerConfig : public UObject
{
public:
	uint32                                        MaxPartBitCount;                                   // 0x0030(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                        MaxPartCount;                                      // 0x0034(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequentialPartialNetBlobHandlerConfig">();
	}
	static class USequentialPartialNetBlobHandlerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequentialPartialNetBlobHandlerConfig>();
	}
};
static_assert(alignof(USequentialPartialNetBlobHandlerConfig) == 0x000008, "Wrong alignment on USequentialPartialNetBlobHandlerConfig");
static_assert(sizeof(USequentialPartialNetBlobHandlerConfig) == 0x000038, "Wrong size on USequentialPartialNetBlobHandlerConfig");
static_assert(offsetof(USequentialPartialNetBlobHandlerConfig, MaxPartBitCount) == 0x000030, "Member 'USequentialPartialNetBlobHandlerConfig::MaxPartBitCount' has a wrong offset!");
static_assert(offsetof(USequentialPartialNetBlobHandlerConfig, MaxPartCount) == 0x000034, "Member 'USequentialPartialNetBlobHandlerConfig::MaxPartCount' has a wrong offset!");

// Class IrisCore.PartialNetObjectAttachmentHandlerConfig
// 0x0008 (0x0040 - 0x0038)
class UPartialNetObjectAttachmentHandlerConfig final : public USequentialPartialNetBlobHandlerConfig
{
public:
	uint32                                        BitCountSplitThreshold;                            // 0x0038(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PartialNetObjectAttachmentHandlerConfig">();
	}
	static class UPartialNetObjectAttachmentHandlerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartialNetObjectAttachmentHandlerConfig>();
	}
};
static_assert(alignof(UPartialNetObjectAttachmentHandlerConfig) == 0x000008, "Wrong alignment on UPartialNetObjectAttachmentHandlerConfig");
static_assert(sizeof(UPartialNetObjectAttachmentHandlerConfig) == 0x000040, "Wrong size on UPartialNetObjectAttachmentHandlerConfig");
static_assert(offsetof(UPartialNetObjectAttachmentHandlerConfig, BitCountSplitThreshold) == 0x000038, "Member 'UPartialNetObjectAttachmentHandlerConfig::BitCountSplitThreshold' has a wrong offset!");

// Class IrisCore.SequentialPartialNetBlobHandler
// 0x0010 (0x0050 - 0x0040)
class USequentialPartialNetBlobHandler : public UNetBlobHandler
{
public:
	uint8                                         Pad_40[0x10];                                      // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequentialPartialNetBlobHandler">();
	}
	static class USequentialPartialNetBlobHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequentialPartialNetBlobHandler>();
	}
};
static_assert(alignof(USequentialPartialNetBlobHandler) == 0x000008, "Wrong alignment on USequentialPartialNetBlobHandler");
static_assert(sizeof(USequentialPartialNetBlobHandler) == 0x000050, "Wrong size on USequentialPartialNetBlobHandler");

// Class IrisCore.PartialNetObjectAttachmentHandler
// 0x0000 (0x0050 - 0x0050)
class UPartialNetObjectAttachmentHandler final : public USequentialPartialNetBlobHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PartialNetObjectAttachmentHandler">();
	}
	static class UPartialNetObjectAttachmentHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartialNetObjectAttachmentHandler>();
	}
};
static_assert(alignof(UPartialNetObjectAttachmentHandler) == 0x000008, "Wrong alignment on UPartialNetObjectAttachmentHandler");
static_assert(sizeof(UPartialNetObjectAttachmentHandler) == 0x000050, "Wrong size on UPartialNetObjectAttachmentHandler");

// Class IrisCore.ReplicationDataStream
// 0x0010 (0x0040 - 0x0030)
class UReplicationDataStream final : public UDataStream
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationDataStream">();
	}
	static class UReplicationDataStream* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationDataStream>();
	}
};
static_assert(alignof(UReplicationDataStream) == 0x000008, "Wrong alignment on UReplicationDataStream");
static_assert(sizeof(UReplicationDataStream) == 0x000040, "Wrong size on UReplicationDataStream");

// Class IrisCore.ReplicationSystem
// 0x0028 (0x0058 - 0x0030)
class UReplicationSystem final : public UObject
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UReplicationBridge*                     ReplicationBridge;                                 // 0x0040(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x10];                                      // 0x0048(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationSystem">();
	}
	static class UReplicationSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationSystem>();
	}
};
static_assert(alignof(UReplicationSystem) == 0x000008, "Wrong alignment on UReplicationSystem");
static_assert(sizeof(UReplicationSystem) == 0x000058, "Wrong size on UReplicationSystem");
static_assert(offsetof(UReplicationSystem, ReplicationBridge) == 0x000040, "Member 'UReplicationSystem::ReplicationBridge' has a wrong offset!");

// Class IrisCore.SphereNetObjectPrioritizerConfig
// 0x0018 (0x0048 - 0x0030)
class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{
public:
	float                                         InnerRadius;                                       // 0x0030(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OuterRadius;                                       // 0x0034(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InnerPriority;                                     // 0x0038(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OuterPriority;                                     // 0x003C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutsidePriority;                                   // 0x0040(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphereNetObjectPrioritizerConfig">();
	}
	static class USphereNetObjectPrioritizerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereNetObjectPrioritizerConfig>();
	}
};
static_assert(alignof(USphereNetObjectPrioritizerConfig) == 0x000008, "Wrong alignment on USphereNetObjectPrioritizerConfig");
static_assert(sizeof(USphereNetObjectPrioritizerConfig) == 0x000048, "Wrong size on USphereNetObjectPrioritizerConfig");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, InnerRadius) == 0x000030, "Member 'USphereNetObjectPrioritizerConfig::InnerRadius' has a wrong offset!");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OuterRadius) == 0x000034, "Member 'USphereNetObjectPrioritizerConfig::OuterRadius' has a wrong offset!");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, InnerPriority) == 0x000038, "Member 'USphereNetObjectPrioritizerConfig::InnerPriority' has a wrong offset!");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OuterPriority) == 0x00003C, "Member 'USphereNetObjectPrioritizerConfig::OuterPriority' has a wrong offset!");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OutsidePriority) == 0x000040, "Member 'USphereNetObjectPrioritizerConfig::OutsidePriority' has a wrong offset!");

// Class IrisCore.SphereNetObjectPrioritizer
// 0x0008 (0x0070 - 0x0068)
class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer
{
public:
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphereNetObjectPrioritizer">();
	}
	static class USphereNetObjectPrioritizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereNetObjectPrioritizer>();
	}
};
static_assert(alignof(USphereNetObjectPrioritizer) == 0x000008, "Wrong alignment on USphereNetObjectPrioritizer");
static_assert(sizeof(USphereNetObjectPrioritizer) == 0x000070, "Wrong size on USphereNetObjectPrioritizer");

// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
// 0x0008 (0x0050 - 0x0048)
class USphereWithOwnerBoostNetObjectPrioritizerConfig final : public USphereNetObjectPrioritizerConfig
{
public:
	float                                         OwnerPriorityBoost;                                // 0x0048(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphereWithOwnerBoostNetObjectPrioritizerConfig">();
	}
	static class USphereWithOwnerBoostNetObjectPrioritizerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereWithOwnerBoostNetObjectPrioritizerConfig>();
	}
};
static_assert(alignof(USphereWithOwnerBoostNetObjectPrioritizerConfig) == 0x000008, "Wrong alignment on USphereWithOwnerBoostNetObjectPrioritizerConfig");
static_assert(sizeof(USphereWithOwnerBoostNetObjectPrioritizerConfig) == 0x000050, "Wrong size on USphereWithOwnerBoostNetObjectPrioritizerConfig");
static_assert(offsetof(USphereWithOwnerBoostNetObjectPrioritizerConfig, OwnerPriorityBoost) == 0x000048, "Member 'USphereWithOwnerBoostNetObjectPrioritizerConfig::OwnerPriorityBoost' has a wrong offset!");

// Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
// 0x0038 (0x00A8 - 0x0070)
class USphereWithOwnerBoostNetObjectPrioritizer final : public USphereNetObjectPrioritizer
{
public:
	uint8                                         Pad_70[0x38];                                      // 0x0070(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphereWithOwnerBoostNetObjectPrioritizer">();
	}
	static class USphereWithOwnerBoostNetObjectPrioritizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereWithOwnerBoostNetObjectPrioritizer>();
	}
};
static_assert(alignof(USphereWithOwnerBoostNetObjectPrioritizer) == 0x000008, "Wrong alignment on USphereWithOwnerBoostNetObjectPrioritizer");
static_assert(sizeof(USphereWithOwnerBoostNetObjectPrioritizer) == 0x0000A8, "Wrong size on USphereWithOwnerBoostNetObjectPrioritizer");

// Class IrisCore.ReplicationStateDescriptorConfig
// 0x0010 (0x0040 - 0x0030)
class UReplicationStateDescriptorConfig final : public UObject
{
public:
	TArray<struct FSupportsStructNetSerializerConfig> SupportsStructNetSerializerList;               // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationStateDescriptorConfig">();
	}
	static class UReplicationStateDescriptorConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationStateDescriptorConfig>();
	}
};
static_assert(alignof(UReplicationStateDescriptorConfig) == 0x000008, "Wrong alignment on UReplicationStateDescriptorConfig");
static_assert(sizeof(UReplicationStateDescriptorConfig) == 0x000040, "Wrong size on UReplicationStateDescriptorConfig");
static_assert(offsetof(UReplicationStateDescriptorConfig, SupportsStructNetSerializerList) == 0x000030, "Member 'UReplicationStateDescriptorConfig::SupportsStructNetSerializerList' has a wrong offset!");

}

