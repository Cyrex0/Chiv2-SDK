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
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.InputModeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialActionEntry_C::InputModeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.InputModeChanged");
		
		UTutorialActionEntry_C_InputModeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.UpdateCallout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              InputMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionEntry_C::UpdateCallout(TBL_EGamepadInputMode InputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.UpdateCallout");
		
		UTutorialActionEntry_C_UpdateCallout_Params params {};
		params.InputMode = InputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.ClearEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialActionEntry_C::ClearEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.ClearEntry");
		
		UTutorialActionEntry_C_ClearEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.UpdateCount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionEntry_C::UpdateCount(int NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.UpdateCount");
		
		UTutorialActionEntry_C_UpdateCount_Params params {};
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTutorialActionEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.Construct");
		
		UTutorialActionEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.InitNewEntry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      NewEntryText                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ControllerEntryText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      EntryKeyboardCallout                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      EntryControllerCallout                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        EntryDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                NewMaxCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionEntry_C::InitNewEntry(const class FString& NewEntryText, const class FString& ControllerEntryText, const class FString& EntryKeyboardCallout, const class FString& EntryControllerCallout, const class FText& EntryDesc, int NewMaxCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.InitNewEntry");
		
		UTutorialActionEntry_C_InitNewEntry_Params params {};
		params.NewEntryText = NewEntryText;
		params.ControllerEntryText = ControllerEntryText;
		params.EntryKeyboardCallout = EntryKeyboardCallout;
		params.EntryControllerCallout = EntryControllerCallout;
		params.EntryDesc = EntryDesc;
		params.NewMaxCount = NewMaxCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.FadeInEntry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialActionEntry_C::FadeInEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.FadeInEntry");
		
		UTutorialActionEntry_C_FadeInEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.GamePadInputModeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionEntry_C::GamePadInputModeChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.GamePadInputModeChanged");
		
		UTutorialActionEntry_C_GamePadInputModeChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTutorialActionEntry_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");
		
		UTutorialActionEntry_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.PlayProgressTickAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialActionEntry_C::PlayProgressTickAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.PlayProgressTickAnim");
		
		UTutorialActionEntry_C_PlayProgressTickAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.PlayChallengeCompleteAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialActionEntry_C::PlayChallengeCompleteAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.PlayChallengeCompleteAnim");
		
		UTutorialActionEntry_C_PlayChallengeCompleteAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionEntry.TutorialActionEntry_C.ExecuteUbergraph_TutorialActionEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionEntry_C::ExecuteUbergraph_TutorialActionEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionEntry.TutorialActionEntry_C.ExecuteUbergraph_TutorialActionEntry");
		
		UTutorialActionEntry_C_ExecuteUbergraph_TutorialActionEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialActionEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialActionEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialActionEntry.TutorialActionEntry_C");
		return ptr;
	}

}


