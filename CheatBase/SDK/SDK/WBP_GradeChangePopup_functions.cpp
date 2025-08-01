﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GradeChangePopup

#include "Basic.hpp"

#include "WBP_GradeChangePopup_classes.hpp"
#include "WBP_GradeChangePopup_parameters.hpp"


namespace SDK
{

// Function WBP_GradeChangePopup.WBP_GradeChangePopup_C.ExecuteUbergraph_WBP_GradeChangePopup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GradeChangePopup_C::ExecuteUbergraph_WBP_GradeChangePopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GradeChangePopup_C", "ExecuteUbergraph_WBP_GradeChangePopup");

	Params::WBP_GradeChangePopup_C_ExecuteUbergraph_WBP_GradeChangePopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GradeChangePopup.WBP_GradeChangePopup_C.Set Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGradeChangePopupViewData*        view_data                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GradeChangePopup_C::Set_Data(class UGradeChangePopupViewData* view_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GradeChangePopup_C", "Set Data");

	Params::WBP_GradeChangePopup_C_Set_Data Parms{};

	Parms.view_data = view_data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GradeChangePopup.WBP_GradeChangePopup_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UGradeChangePopupViewData*  Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GradeChangePopup_C::SetData(const class UGradeChangePopupViewData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GradeChangePopup_C", "SetData");

	Params::WBP_GradeChangePopup_C_SetData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}

}

