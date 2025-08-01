﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LuckProficiency

#include "Basic.hpp"


namespace SDK::Params
{

// Function LuckProficiency.LuckProficiency_C.GetValue
// 0x0070 (0x0070 - 0x0000)
struct LuckProficiency_C_GetValue final
{
public:
	const class UChargeableInteractionDefinition* chargeableInteraction;                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       Player;                                            // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAdditiveLuckBonus_ReturnValue;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMultiplicativeLuckBonus_ReturnValue;   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USelfUntrap*                            K2Node_DynamicCast_AsSelf_Untrap;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSuccessProbability_ReturnValue;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABearTrap*                              K2Node_DynamicCast_AsBear_Trap;                    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPerkModifierAdditiveValue_ReturnValue; // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_MathExpression_additiveBonus_ImplicitCast;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_MathExpression_multiplicativeBonus_ImplicitCast; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_MathExpression_baseLuck_ImplicitCast;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LuckProficiency_C_GetValue) == 0x000008, "Wrong alignment on LuckProficiency_C_GetValue");
static_assert(sizeof(LuckProficiency_C_GetValue) == 0x000070, "Wrong size on LuckProficiency_C_GetValue");
static_assert(offsetof(LuckProficiency_C_GetValue, chargeableInteraction) == 0x000000, "Member 'LuckProficiency_C_GetValue::chargeableInteraction' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, Player) == 0x000008, "Member 'LuckProficiency_C_GetValue::Player' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, ReturnValue) == 0x000010, "Member 'LuckProficiency_C_GetValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, CallFunc_GetAdditiveLuckBonus_ReturnValue) == 0x000014, "Member 'LuckProficiency_C_GetValue::CallFunc_GetAdditiveLuckBonus_ReturnValue' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, CallFunc_GetMultiplicativeLuckBonus_ReturnValue) == 0x000018, "Member 'LuckProficiency_C_GetValue::CallFunc_GetMultiplicativeLuckBonus_ReturnValue' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, K2Node_DynamicCast_AsSelf_Untrap) == 0x000020, "Member 'LuckProficiency_C_GetValue::K2Node_DynamicCast_AsSelf_Untrap' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'LuckProficiency_C_GetValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, CallFunc_GetSuccessProbability_ReturnValue) == 0x00002C, "Member 'LuckProficiency_C_GetValue::CallFunc_GetSuccessProbability_ReturnValue' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'LuckProficiency_C_GetValue::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, K2Node_MathExpression_ReturnValue) == 0x000038, "Member 'LuckProficiency_C_GetValue::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, K2Node_DynamicCast_AsBear_Trap) == 0x000040, "Member 'LuckProficiency_C_GetValue::K2Node_DynamicCast_AsBear_Trap' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'LuckProficiency_C_GetValue::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, CallFunc_GetPerkModifierAdditiveValue_ReturnValue) == 0x00004C, "Member 'LuckProficiency_C_GetValue::CallFunc_GetPerkModifierAdditiveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000050, "Member 'LuckProficiency_C_GetValue::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, K2Node_MathExpression_additiveBonus_ImplicitCast) == 0x000058, "Member 'LuckProficiency_C_GetValue::K2Node_MathExpression_additiveBonus_ImplicitCast' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, K2Node_MathExpression_multiplicativeBonus_ImplicitCast) == 0x000060, "Member 'LuckProficiency_C_GetValue::K2Node_MathExpression_multiplicativeBonus_ImplicitCast' has a wrong offset!");
static_assert(offsetof(LuckProficiency_C_GetValue, K2Node_MathExpression_baseLuck_ImplicitCast) == 0x000068, "Member 'LuckProficiency_C_GetValue::K2Node_MathExpression_baseLuck_ImplicitCast' has a wrong offset!");

}

