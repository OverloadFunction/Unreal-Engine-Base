﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mutators

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct Mutators.DrainingStageSkillData
// 0x0010 (0x0010 - 0x0000)
struct FDrainingStageSkillData final
{
public:
	TArray<class FName>                           SkillIDs;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDrainingStageSkillData) == 0x000008, "Wrong alignment on FDrainingStageSkillData");
static_assert(sizeof(FDrainingStageSkillData) == 0x000010, "Wrong size on FDrainingStageSkillData");
static_assert(offsetof(FDrainingStageSkillData, SkillIDs) == 0x000000, "Member 'FDrainingStageSkillData::SkillIDs' has a wrong offset!");

}

