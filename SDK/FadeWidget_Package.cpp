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
	 * 		Name   -> Function FadeWidget.FadeWidget_C.Handle requests changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFadeWidget_C::Handle_requests_changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.Handle requests changed");
		
		UFadeWidget_C_Handle_requests_changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFadeWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.Construct");
		
		UFadeWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Playback_Speed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFadeWidget_C::FadeIn(float Playback_Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.FadeIn");
		
		UFadeWidget_C_FadeIn_Params params {};
		params.Playback_Speed = Playback_Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Playback_Speed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFadeWidget_C::FadeOut(float Playback_Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.FadeOut");
		
		UFadeWidget_C_FadeOut_Params params {};
		params.Playback_Speed = Playback_Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.Add requester
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFadeWidget_C::Add_requester(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.Add requester");
		
		UFadeWidget_C_Add_requester_Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.Remove requester
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFadeWidget_C::Remove_requester(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.Remove requester");
		
		UFadeWidget_C_Remove_requester_Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.Update requests soon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFadeWidget_C::Update_requests_soon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.Update requests soon");
		
		UFadeWidget_C_Update_requests_soon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.Snap Fade In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFadeWidget_C::Snap_Fade_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.Snap Fade In");
		
		UFadeWidget_C_Snap_Fade_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFadeWidget_C::WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_1");
		
		UFadeWidget_C_WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFadeWidget_C::WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_2");
		
		UFadeWidget_C_WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.ExecuteUbergraph_FadeWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFadeWidget_C::ExecuteUbergraph_FadeWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.ExecuteUbergraph_FadeWidget");
		
		UFadeWidget_C_ExecuteUbergraph_FadeWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.Fade out finished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UFadeWidget_C::Fade_out_finished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.Fade out finished__DelegateSignature");
		
		UFadeWidget_C_Fade_out_finished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.Fade out started__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UFadeWidget_C::Fade_out_started__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.Fade out started__DelegateSignature");
		
		UFadeWidget_C_Fade_out_started__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FadeWidget.FadeWidget_C.On Is Faded? Changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Faded_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFadeWidget_C::On_Is_Faded__Changed__DelegateSignature(bool Is_Faded_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeWidget.FadeWidget_C.On Is Faded? Changed__DelegateSignature");
		
		UFadeWidget_C_On_Is_Faded__Changed__DelegateSignature_Params params {};
		params.Is_Faded_ = Is_Faded_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFadeWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFadeWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FadeWidget.FadeWidget_C");
		return ptr;
	}

}


