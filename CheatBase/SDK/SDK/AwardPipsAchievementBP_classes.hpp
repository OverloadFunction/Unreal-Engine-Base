﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AwardPipsAchievementBP

#include "Basic.hpp"

#include "Achievements_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AwardPipsAchievementBP.AwardPipsAchievementBP_C
// 0x0000 (0x0078 - 0x0078)
class UAwardPipsAchievementBP_C final : public UAwardPipsAchievement
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AwardPipsAchievementBP_C">();
	}
	static class UAwardPipsAchievementBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAwardPipsAchievementBP_C>();
	}
};
static_assert(alignof(UAwardPipsAchievementBP_C) == 0x000008, "Wrong alignment on UAwardPipsAchievementBP_C");
static_assert(sizeof(UAwardPipsAchievementBP_C) == 0x000078, "Wrong size on UAwardPipsAchievementBP_C");

}

