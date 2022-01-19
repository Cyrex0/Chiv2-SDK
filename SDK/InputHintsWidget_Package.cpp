/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.FindCrosshairConditionWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCrosshairConditonText_C*                    Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputHintsWidget_C::FindCrosshairConditionWidget(const class FString& InActionName, bool* Found, class UCrosshairConditonText_C** Widget, int* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.FindCrosshairConditionWidget");
		
		UInputHintsWidget_C_FindCrosshairConditionWidget_Params params {};
		params.InActionName = InActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
		if (Widget != nullptr)
			*Widget = params.Widget;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.FindCrosshairCondition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int                                                ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputHintsWidget_C::FindCrosshairCondition(const class FName& Tag, bool* bFound, int* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.FindCrosshairCondition");
		
		UInputHintsWidget_C_FindCrosshairCondition_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFound != nullptr)
			*bFound = params.bFound;
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.UpdateCrosshairConditionWidgets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UInputHintsWidget_C::UpdateCrosshairConditionWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.UpdateCrosshairConditionWidgets");
		
		UInputHintsWidget_C_UpdateCrosshairConditionWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.InitCrosshairConditionWidgets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UInputHintsWidget_C::InitCrosshairConditionWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.InitCrosshairConditionWidgets");
		
		UInputHintsWidget_C_InitCrosshairConditionWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.EnableCombatConditions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Keybinding                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        HintText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AddToTop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInputHintsWidget_C::EnableCombatConditions(const class FString& Keybinding, const class FName& Tag, const class FText& HintText, bool Enable, bool AddToTop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.EnableCombatConditions");
		
		UInputHintsWidget_C_EnableCombatConditions_Params params {};
		params.Keybinding = Keybinding;
		params.Tag = Tag;
		params.HintText = HintText;
		params.Enable = Enable;
		params.AddToTop = AddToTop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.ClearAllHints
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInputHintsWidget_C::ClearAllHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.ClearAllHints");
		
		UInputHintsWidget_C_ClearAllHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.OnPlayerKilled_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInputHintsWidget_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.OnPlayerKilled_Event_1");
		
		UInputHintsWidget_C_OnPlayerKilled_Event_1_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInputHintsWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.Construct");
		
		UInputHintsWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InputHintsWidget.InputHintsWidget_C.ExecuteUbergraph_InputHintsWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputHintsWidget_C::ExecuteUbergraph_InputHintsWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputHintsWidget.InputHintsWidget_C.ExecuteUbergraph_InputHintsWidget");
		
		UInputHintsWidget_C_ExecuteUbergraph_InputHintsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInputHintsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputHintsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputHintsWidget.InputHintsWidget_C");
		return ptr;
	}

}


