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
	 * 		Name   -> Function PartyNotificationWidget.PartyNotificationWidget_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPartyNotificationWidget_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyNotificationWidget.PartyNotificationWidget_C.OnInitialized");
		
		UPartyNotificationWidget_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PartyNotificationWidget.PartyNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPartyNotificationWidget_C::WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyNotificationWidget.PartyNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1");
		
		UPartyNotificationWidget_C_WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PartyNotificationWidget.PartyNotificationWidget_C.RemoveWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPartyNotificationWidget_C::RemoveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyNotificationWidget.PartyNotificationWidget_C.RemoveWidget");
		
		UPartyNotificationWidget_C_RemoveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PartyNotificationWidget.PartyNotificationWidget_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPartyNotificationWidget_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyNotificationWidget.PartyNotificationWidget_C.FadeIn");
		
		UPartyNotificationWidget_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PartyNotificationWidget.PartyNotificationWidget_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPartyNotificationWidget_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyNotificationWidget.PartyNotificationWidget_C.FadeOut");
		
		UPartyNotificationWidget_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PartyNotificationWidget.PartyNotificationWidget_C.Cinematic Mode Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyNotificationWidget_C::Cinematic_Mode_Changed(CinematicBarsMode_ECinematicBarsMode New_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyNotificationWidget.PartyNotificationWidget_C.Cinematic Mode Changed");
		
		UPartyNotificationWidget_C_Cinematic_Mode_Changed_Params params {};
		params.New_mode = New_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PartyNotificationWidget.PartyNotificationWidget_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPartyNotificationWidget_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyNotificationWidget.PartyNotificationWidget_C.Initialize");
		
		UPartyNotificationWidget_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PartyNotificationWidget.PartyNotificationWidget_C.ExecuteUbergraph_PartyNotificationWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyNotificationWidget_C::ExecuteUbergraph_PartyNotificationWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyNotificationWidget.PartyNotificationWidget_C.ExecuteUbergraph_PartyNotificationWidget");
		
		UPartyNotificationWidget_C_ExecuteUbergraph_PartyNotificationWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPartyNotificationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyNotificationWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyNotificationWidget.PartyNotificationWidget_C");
		return ptr;
	}

}


