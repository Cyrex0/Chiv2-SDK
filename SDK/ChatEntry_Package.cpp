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
	 * 		Name   -> Function ChatEntry.ChatEntry_C.HideDevTag
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::HideDevTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.HideDevTag");
		
		UChatEntry_C_HideDevTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UChatEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.Construct");
		
		UChatEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.Start Fadeout Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::Start_Fadeout_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.Start Fadeout Timer");
		
		UChatEntry_C_Start_Fadeout_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.Clear Fadeout Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::Clear_Fadeout_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.Clear Fadeout Timer");
		
		UChatEntry_C_Clear_Fadeout_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.On Entered Input Mode_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::On_Entered_Input_Mode_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.On Entered Input Mode_Event_1");
		
		UChatEntry_C_On_Entered_Input_Mode_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.On Left Input Mode_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::On_Left_Input_Mode_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.On Left Input Mode_Event_1");
		
		UChatEntry_C_On_Left_Input_Mode_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.Fade Me In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::Fade_Me_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.Fade Me In");
		
		UChatEntry_C_Fade_Me_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.Fade Me Out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::Fade_Me_Out()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.Fade Me Out");
		
		UChatEntry_C_Fade_Me_Out_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.Left Input Mode Delay Expired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::Left_Input_Mode_Delay_Expired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.Left Input Mode Delay Expired");
		
		UChatEntry_C_Left_Input_Mode_Delay_Expired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.Clear all fadeout timers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::Clear_all_fadeout_timers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.Clear all fadeout timers");
		
		UChatEntry_C_Clear_all_fadeout_timers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.OnAnimationStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatEntry_C::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.OnAnimationStarted");
		
		UChatEntry_C_OnAnimationStarted_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatEntry_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.OnAnimationFinished");
		
		UChatEntry_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.InitFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatEntry_C::InitFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.InitFade");
		
		UChatEntry_C_InitFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatEntry.ChatEntry_C.ExecuteUbergraph_ChatEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatEntry_C::ExecuteUbergraph_ChatEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatEntry.ChatEntry_C.ExecuteUbergraph_ChatEntry");
		
		UChatEntry_C_ExecuteUbergraph_ChatEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UChatEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatEntry.ChatEntry_C");
		return ptr;
	}

}


