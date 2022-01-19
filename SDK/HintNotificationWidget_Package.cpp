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
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.Cinematic Mode Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHintNotificationWidget_C::Cinematic_Mode_Changed(CinematicBarsMode_ECinematicBarsMode New_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.Cinematic Mode Changed");
		
		UHintNotificationWidget_C_Cinematic_Mode_Changed_Params params {};
		params.New_mode = New_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.Fade In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHintNotificationWidget_C::Fade_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.Fade In");
		
		UHintNotificationWidget_C_Fade_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.Fade Out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHintNotificationWidget_C::Fade_Out()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.Fade Out");
		
		UHintNotificationWidget_C_Fade_Out_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.RemoveWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHintNotificationWidget_C::RemoveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.RemoveWidget");
		
		UHintNotificationWidget_C_RemoveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHintNotificationWidget_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.OnInitialized");
		
		UHintNotificationWidget_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHintNotificationWidget_C::WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1");
		
		UHintNotificationWidget_C_WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHintNotificationWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.Construct");
		
		UHintNotificationWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.OnGamepadInputChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHintNotificationWidget_C::OnGamepadInputChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.OnGamepadInputChanged");
		
		UHintNotificationWidget_C_OnGamepadInputChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HintNotificationWidget.HintNotificationWidget_C.ExecuteUbergraph_HintNotificationWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHintNotificationWidget_C::ExecuteUbergraph_HintNotificationWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HintNotificationWidget.HintNotificationWidget_C.ExecuteUbergraph_HintNotificationWidget");
		
		UHintNotificationWidget_C_ExecuteUbergraph_HintNotificationWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHintNotificationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHintNotificationWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HintNotificationWidget.HintNotificationWidget_C");
		return ptr;
	}

}


