﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetEaseAnalytics

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class NetEaseAnalytics.NetEaseAnalyticsUtil
// 0x0000 (0x0030 - 0x0030)
class UNetEaseAnalyticsUtil final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetEaseAnalyticsUtil">();
	}
	static class UNetEaseAnalyticsUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetEaseAnalyticsUtil>();
	}
};
static_assert(alignof(UNetEaseAnalyticsUtil) == 0x000008, "Wrong alignment on UNetEaseAnalyticsUtil");
static_assert(sizeof(UNetEaseAnalyticsUtil) == 0x000030, "Wrong size on UNetEaseAnalyticsUtil");

}

