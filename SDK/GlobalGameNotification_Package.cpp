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
	 * 		Name   -> Function GlobalGameNotification.GlobalGameNotification_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotification_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotification.GlobalGameNotification_C.FadeIn");
		
		UGlobalGameNotification_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotification.GlobalGameNotification_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotification_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotification.GlobalGameNotification_C.FadeOut");
		
		UGlobalGameNotification_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotification.GlobalGameNotification_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGlobalGameNotification_C::WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotification.GlobalGameNotification_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1");
		
		UGlobalGameNotification_C_WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotification.GlobalGameNotification_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotification_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotification.GlobalGameNotification_C.Initialize");
		
		UGlobalGameNotification_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotification.GlobalGameNotification_C.Cinematic Mode Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotification_C::Cinematic_Mode_Changed(CinematicBarsMode_ECinematicBarsMode New_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotification.GlobalGameNotification_C.Cinematic Mode Changed");
		
		UGlobalGameNotification_C_Cinematic_Mode_Changed_Params params {};
		params.New_mode = New_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotification.GlobalGameNotification_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGlobalGameNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotification.GlobalGameNotification_C.Construct");
		
		UGlobalGameNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotification.GlobalGameNotification_C.CustomEvent_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotification_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotification.GlobalGameNotification_C.CustomEvent_3");
		
		UGlobalGameNotification_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotification.GlobalGameNotification_C.ExecuteUbergraph_GlobalGameNotification
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotification_C::ExecuteUbergraph_GlobalGameNotification(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotification.GlobalGameNotification_C.ExecuteUbergraph_GlobalGameNotification");
		
		UGlobalGameNotification_C_ExecuteUbergraph_GlobalGameNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGlobalGameNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalGameNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalGameNotification.GlobalGameNotification_C");
		return ptr;
	}

}


