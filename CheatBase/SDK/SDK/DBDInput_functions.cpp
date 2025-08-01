﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDInput

#include "Basic.hpp"

#include "DBDInput_classes.hpp"
#include "DBDInput_parameters.hpp"


namespace SDK
{

// Function DBDInput.DBDInputManager.AddPresenterRootWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      presenterRootWidget                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDBDInputManager::AddPresenterRootWidget(class UUserWidget* presenterRootWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBDInputManager", "AddPresenterRootWidget");

	Params::DBDInputManager_AddPresenterRootWidget Parms{};

	Parms.presenterRootWidget = presenterRootWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.DBDInputManager.RemovePresenterRootWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class UUserWidget*                presenterRootWidget                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDBDInputManager::RemovePresenterRootWidget(const class UUserWidget* presenterRootWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBDInputManager", "RemovePresenterRootWidget");

	Params::DBDInputManager_RemovePresenterRootWidget Parms{};

	Parms.presenterRootWidget = presenterRootWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FAnalogInputEvent&         InAnalogInputEvent                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InteractiveWidgetInterface", "HandleAnalogInputEvent");

	Params::InteractiveWidgetInterface_HandleAnalogInputEvent Parms{};

	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 InKeyEvent                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleKeyDownEvent(const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InteractiveWidgetInterface", "HandleKeyDownEvent");

	Params::InteractiveWidgetInterface_HandleKeyDownEvent Parms{};

	Parms.InKeyEvent = std::move(InKeyEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 InKeyEvent                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleKeyHoldEvent(const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InteractiveWidgetInterface", "HandleKeyHoldEvent");

	Params::InteractiveWidgetInterface_HandleKeyHoldEvent Parms{};

	Parms.InKeyEvent = std::move(InKeyEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FKeyEvent&                 InKeyEvent                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleKeyUpEvent(const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InteractiveWidgetInterface", "HandleKeyUpEvent");

	Params::InteractiveWidgetInterface_HandleKeyUpEvent Parms{};

	Parms.InKeyEvent = std::move(InKeyEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleOnMouseDownEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleOnMouseDownEvent(const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InteractiveWidgetInterface", "HandleOnMouseDownEvent");

	Params::InteractiveWidgetInterface_HandleOnMouseDownEvent Parms{};

	Parms.InMouseEvent = std::move(InMouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.InteractiveWidgetInterface.HandleOnMouseWheelEvent
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IInteractiveWidgetInterface::HandleOnMouseWheelEvent(const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InteractiveWidgetInterface", "HandleOnMouseWheelEvent");

	Params::InteractiveWidgetInterface_HandleOnMouseWheelEvent Parms{};

	Parms.InMouseEvent = std::move(InMouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDInput.UIInputUtilities.AreGamepadButtonsXOSwitched
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIInputUtilities::AreGamepadButtonsXOSwitched()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UIInputUtilities", "AreGamepadButtonsXOSwitched");

	Params::UIInputUtilities_AreGamepadButtonsXOSwitched Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDInput.UIInputUtilities.GetKeyFromUIAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const EUIActionType                     ActionType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    isUsingGamepad                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                             ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FKey UUIInputUtilities::GetKeyFromUIAction(const EUIActionType ActionType, bool isUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UIInputUtilities", "GetKeyFromUIAction");

	Params::UIInputUtilities_GetKeyFromUIAction Parms{};

	Parms.ActionType = ActionType;
	Parms.isUsingGamepad = isUsingGamepad;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const struct FKey&                      InputKey                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EControlMode                            controlMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIInputUtilities::IsInputKeyControlModePairValid(const struct FKey& InputKey, EControlMode controlMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UIInputUtilities", "IsInputKeyControlModePairValid");

	Params::UIInputUtilities_IsInputKeyControlModePairValid Parms{};

	Parms.InputKey = std::move(InputKey);
	Parms.controlMode = controlMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIInputUtilities::ShouldUseAtlantaControls(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UIInputUtilities", "ShouldUseAtlantaControls");

	Params::UIInputUtilities_ShouldUseAtlantaControls Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

