﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlasherInteractable

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function SlasherInteractable.SlasherInteractable_C.ExecuteUbergraph_SlasherInteractable
// 0x0010 (0x0010 - 0x0000)
struct SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable) == 0x000008, "Wrong alignment on SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable");
static_assert(sizeof(SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable) == 0x000010, "Wrong size on SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable");
static_assert(offsetof(SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable, EntryPoint) == 0x000000, "Member 'SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable::EntryPoint' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable, K2Node_Event_player) == 0x000008, "Member 'SlasherInteractable_C_ExecuteUbergraph_SlasherInteractable::K2Node_Event_player' has a wrong offset!");

// Function SlasherInteractable.SlasherInteractable_C.GetSlasher
// 0x0028 (0x0028 - 0x0000)
struct SlasherInteractable_C_GetSlasher final
{
public:
	class AKiller*                                Slasher;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AKiller*                                Ret;                                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AKiller*                                K2Node_DynamicCast_AsKiller;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SlasherInteractable_C_GetSlasher) == 0x000008, "Wrong alignment on SlasherInteractable_C_GetSlasher");
static_assert(sizeof(SlasherInteractable_C_GetSlasher) == 0x000028, "Wrong size on SlasherInteractable_C_GetSlasher");
static_assert(offsetof(SlasherInteractable_C_GetSlasher, Slasher) == 0x000000, "Member 'SlasherInteractable_C_GetSlasher::Slasher' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_GetSlasher, Ret) == 0x000008, "Member 'SlasherInteractable_C_GetSlasher::Ret' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_GetSlasher, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'SlasherInteractable_C_GetSlasher::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_GetSlasher, K2Node_DynamicCast_AsKiller) == 0x000018, "Member 'SlasherInteractable_C_GetSlasher::K2Node_DynamicCast_AsKiller' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_GetSlasher, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SlasherInteractable_C_GetSlasher::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SlasherInteractable.SlasherInteractable_C.InitInteractable
// 0x0008 (0x0008 - 0x0000)
struct SlasherInteractable_C_InitInteractable final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SlasherInteractable_C_InitInteractable) == 0x000008, "Wrong alignment on SlasherInteractable_C_InitInteractable");
static_assert(sizeof(SlasherInteractable_C_InitInteractable) == 0x000008, "Wrong size on SlasherInteractable_C_InitInteractable");
static_assert(offsetof(SlasherInteractable_C_InitInteractable, Player) == 0x000000, "Member 'SlasherInteractable_C_InitInteractable::Player' has a wrong offset!");

// Function SlasherInteractable.SlasherInteractable_C.IsInteractionPossibleInternal
// 0x0020 (0x0020 - 0x0000)
struct SlasherInteractable_C_IsInteractionPossibleInternal final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UInteractor*                      Interactor;                                        // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UInteractionDefinition*           definition;                                        // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         interactionType;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SlasherInteractable_C_IsInteractionPossibleInternal) == 0x000008, "Wrong alignment on SlasherInteractable_C_IsInteractionPossibleInternal");
static_assert(sizeof(SlasherInteractable_C_IsInteractionPossibleInternal) == 0x000020, "Wrong size on SlasherInteractable_C_IsInteractionPossibleInternal");
static_assert(offsetof(SlasherInteractable_C_IsInteractionPossibleInternal, Player) == 0x000000, "Member 'SlasherInteractable_C_IsInteractionPossibleInternal::Player' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_IsInteractionPossibleInternal, Interactor) == 0x000008, "Member 'SlasherInteractable_C_IsInteractionPossibleInternal::Interactor' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_IsInteractionPossibleInternal, definition) == 0x000010, "Member 'SlasherInteractable_C_IsInteractionPossibleInternal::definition' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_IsInteractionPossibleInternal, interactionType) == 0x000018, "Member 'SlasherInteractable_C_IsInteractionPossibleInternal::interactionType' has a wrong offset!");
static_assert(offsetof(SlasherInteractable_C_IsInteractionPossibleInternal, ReturnValue) == 0x000019, "Member 'SlasherInteractable_C_IsInteractionPossibleInternal::ReturnValue' has a wrong offset!");

}

