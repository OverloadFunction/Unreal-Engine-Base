﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpecificReactionDialogue

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"


namespace SDK
{

// UserDefinedStruct SpecificReactionDialogue.SpecificReactionDialogue
// 0x0020 (0x0020 - 0x0000)
struct FSpecificReactionDialogue final
{
public:
	class FString                                 CharacterName_2_F0326D2A4FE40230378F258FBAE1A79B;  // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FAkEventWithSubtitle>           AudioEvents_6_CBA5DAE649A496B3060304AF525B86A1;    // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSpecificReactionDialogue) == 0x000008, "Wrong alignment on FSpecificReactionDialogue");
static_assert(sizeof(FSpecificReactionDialogue) == 0x000020, "Wrong size on FSpecificReactionDialogue");
static_assert(offsetof(FSpecificReactionDialogue, CharacterName_2_F0326D2A4FE40230378F258FBAE1A79B) == 0x000000, "Member 'FSpecificReactionDialogue::CharacterName_2_F0326D2A4FE40230378F258FBAE1A79B' has a wrong offset!");
static_assert(offsetof(FSpecificReactionDialogue, AudioEvents_6_CBA5DAE649A496B3060304AF525B86A1) == 0x000010, "Member 'FSpecificReactionDialogue::AudioEvents_6_CBA5DAE649A496B3060304AF525B86A1' has a wrong offset!");

}

