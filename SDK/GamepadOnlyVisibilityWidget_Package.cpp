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
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.IsFadedOut
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bReturnValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGamepadOnlyVisibilityWidget_C::IsFadedOut(bool* bReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.IsFadedOut");
		
		UGamepadOnlyVisibilityWidget_C_IsFadedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReturnValue != nullptr)
			*bReturnValue = params.bReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGamepadOnlyVisibilityWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Construct");
		
		UGamepadOnlyVisibilityWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Fade In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGamepadOnlyVisibilityWidget_C::Fade_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Fade In");
		
		UGamepadOnlyVisibilityWidget_C_Fade_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Fade Out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGamepadOnlyVisibilityWidget_C::Fade_Out()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.Fade Out");
		
		UGamepadOnlyVisibilityWidget_C_Fade_Out_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnGamepadInputModeChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamepadOnlyVisibilityWidget_C::OnGamepadInputModeChanged_Event_1(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnGamepadInputModeChanged_Event_1");
		
		UGamepadOnlyVisibilityWidget_C_OnGamepadInputModeChanged_Event_1_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGamepadOnlyVisibilityWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.PreConstruct");
		
		UGamepadOnlyVisibilityWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.ExecuteUbergraph_GamepadOnlyVisibilityWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamepadOnlyVisibilityWidget_C::ExecuteUbergraph_GamepadOnlyVisibilityWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.ExecuteUbergraph_GamepadOnlyVisibilityWidget");
		
		UGamepadOnlyVisibilityWidget_C_ExecuteUbergraph_GamepadOnlyVisibilityWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnFadedOut__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UGamepadOnlyVisibilityWidget_C::OnFadedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnFadedOut__DelegateSignature");
		
		UGamepadOnlyVisibilityWidget_C_OnFadedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnFadedIn__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UGamepadOnlyVisibilityWidget_C::OnFadedIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C.OnFadedIn__DelegateSignature");
		
		UGamepadOnlyVisibilityWidget_C_OnFadedIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGamepadOnlyVisibilityWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadOnlyVisibilityWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C");
		return ptr;
	}

}


