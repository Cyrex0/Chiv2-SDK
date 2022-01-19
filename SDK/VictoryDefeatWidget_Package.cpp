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
	 * 		Name   -> Function VictoryDefeatWidget.VictoryDefeatWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVictoryDefeatWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatWidget.VictoryDefeatWidget_C.PreConstruct");
		
		UVictoryDefeatWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VictoryDefeatWidget.VictoryDefeatWidget_C.ReConstructWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVictoryDefeatWidget_C::ReConstructWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatWidget.VictoryDefeatWidget_C.ReConstructWidget");
		
		UVictoryDefeatWidget_C_ReConstructWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VictoryDefeatWidget.VictoryDefeatWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UVictoryDefeatWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatWidget.VictoryDefeatWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1");
		
		UVictoryDefeatWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VictoryDefeatWidget.VictoryDefeatWidget_C.AddMatchEndScoreEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UVictoryDefeatWidget_C::AddMatchEndScoreEvent(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatWidget.VictoryDefeatWidget_C.AddMatchEndScoreEvent");
		
		UVictoryDefeatWidget_C_AddMatchEndScoreEvent_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VictoryDefeatWidget.VictoryDefeatWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UVictoryDefeatWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatWidget.VictoryDefeatWidget_C.Construct");
		
		UVictoryDefeatWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VictoryDefeatWidget.VictoryDefeatWidget_C.OnKillsChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVictoryDefeatWidget_C::OnKillsChanged_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatWidget.VictoryDefeatWidget_C.OnKillsChanged_Event_1");
		
		UVictoryDefeatWidget_C_OnKillsChanged_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VictoryDefeatWidget.VictoryDefeatWidget_C.ExecuteUbergraph_VictoryDefeatWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVictoryDefeatWidget_C::ExecuteUbergraph_VictoryDefeatWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatWidget.VictoryDefeatWidget_C.ExecuteUbergraph_VictoryDefeatWidget");
		
		UVictoryDefeatWidget_C_ExecuteUbergraph_VictoryDefeatWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVictoryDefeatWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVictoryDefeatWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VictoryDefeatWidget.VictoryDefeatWidget_C");
		return ptr;
	}

}


