﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioExtensions

#include "Basic.hpp"


namespace SDK
{

// Enum AudioExtensions.EAudioParameterType
// NumValues: 0x000F
enum class EAudioParameterType : uint8
{
	None                                     = 0,
	Boolean                                  = 1,
	Integer                                  = 2,
	Float                                    = 3,
	String                                   = 4,
	Object                                   = 5,
	NoneArray                                = 6,
	BooleanArray                             = 7,
	IntegerArray                             = 8,
	FloatArray                               = 9,
	StringArray                              = 10,
	ObjectArray                              = 11,
	Trigger                                  = 12,
	COUNT                                    = 13,
	EAudioParameterType_MAX                  = 14,
};

// Enum AudioExtensions.EPcmBitDepthConversion
// NumValues: 0x0004
enum class EPcmBitDepthConversion : uint8
{
	SameAsSource                             = 0,
	Int16                                    = 1,
	Float32                                  = 2,
	EPcmBitDepthConversion_MAX               = 3,
};

// ScriptStruct AudioExtensions.AudioParameter
// 0x00A0 (0x00A0 - 0x0000)
struct FAudioParameter
{
public:
	class FName                                   ParamName;                                         // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatParam;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BoolParam;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IntParam;                                          // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ObjectParam;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringParam;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 ArrayFloatParam;                                   // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                  ArrayBoolParam;                                    // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 ArrayIntParam;                                     // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ArrayObjectParam;                                  // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                         ArrayStringParam;                                  // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EAudioParameterType                           ParamType;                                         // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TypeName;                                          // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_90[0x10];                                      // 0x0090(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioParameter) == 0x000008, "Wrong alignment on FAudioParameter");
static_assert(sizeof(FAudioParameter) == 0x0000A0, "Wrong size on FAudioParameter");
static_assert(offsetof(FAudioParameter, ParamName) == 0x000000, "Member 'FAudioParameter::ParamName' has a wrong offset!");
static_assert(offsetof(FAudioParameter, FloatParam) == 0x00000C, "Member 'FAudioParameter::FloatParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, BoolParam) == 0x000010, "Member 'FAudioParameter::BoolParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, IntParam) == 0x000014, "Member 'FAudioParameter::IntParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ObjectParam) == 0x000018, "Member 'FAudioParameter::ObjectParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, StringParam) == 0x000020, "Member 'FAudioParameter::StringParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayFloatParam) == 0x000030, "Member 'FAudioParameter::ArrayFloatParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayBoolParam) == 0x000040, "Member 'FAudioParameter::ArrayBoolParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayIntParam) == 0x000050, "Member 'FAudioParameter::ArrayIntParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayObjectParam) == 0x000060, "Member 'FAudioParameter::ArrayObjectParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayStringParam) == 0x000070, "Member 'FAudioParameter::ArrayStringParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ParamType) == 0x000080, "Member 'FAudioParameter::ParamType' has a wrong offset!");
static_assert(offsetof(FAudioParameter, TypeName) == 0x000084, "Member 'FAudioParameter::TypeName' has a wrong offset!");

}

