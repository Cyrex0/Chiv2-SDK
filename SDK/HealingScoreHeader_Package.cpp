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
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.GetLifeSpanTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealingScoreHeader_C::GetLifeSpanTime(float* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.GetLifeSpanTime");
		
		UHealingScoreHeader_C_GetLifeSpanTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.RemoveExcessChildSubWidgets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHealingScoreHeader_C::RemoveExcessChildSubWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.RemoveExcessChildSubWidgets");
		
		UHealingScoreHeader_C_RemoveExcessChildSubWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.SendBreakableEventToCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHealingScoreHeader_C::SendBreakableEventToCrosshair(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.SendBreakableEventToCrosshair");
		
		UHealingScoreHeader_C_SendBreakableEventToCrosshair_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.DetermineEventType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEventStruct                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ScoreEventType_EScoreEventType                     Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealingScoreHeader_C::DetermineEventType(const struct FScoreEventStruct& ScoreEventStruct, ScoreEventType_EScoreEventType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.DetermineEventType");
		
		UHealingScoreHeader_C_DetermineEventType_Params params {};
		params.ScoreEventStruct = ScoreEventStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.GetScoreText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                ScoreValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 * 		bool                                               IsPositive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHealingScoreHeader_C::GetScoreText(int ScoreValue, class FText* Result, bool* IsPositive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.GetScoreText");
		
		UHealingScoreHeader_C_GetScoreText_Params params {};
		params.ScoreValue = ScoreValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (IsPositive != nullptr)
			*IsPositive = params.IsPositive;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.AddSubScoreEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHealingScoreHeader_C::AddSubScoreEvent(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.AddSubScoreEvent");
		
		UHealingScoreHeader_C_AddSubScoreEvent_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.AddSubScoreWidget
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEventStruct                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHealingScoreHeader_C::AddSubScoreWidget(const struct FScoreEventStruct& ScoreEventStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.AddSubScoreWidget");
		
		UHealingScoreHeader_C_AddSubScoreWidget_Params params {};
		params.ScoreEventStruct = ScoreEventStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.AddScore
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealingScoreHeader_C::AddScore(int Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.AddScore");
		
		UHealingScoreHeader_C_AddScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHealingScoreHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.Construct");
		
		UHealingScoreHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.OnIndexChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealingScoreHeader_C::OnIndexChanged(int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.OnIndexChanged");
		
		UHealingScoreHeader_C_OnIndexChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.OnRemoved
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UHealingScoreHeader_C::OnRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.OnRemoved");
		
		UHealingScoreHeader_C_OnRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.PlayFadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHealingScoreHeader_C::PlayFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.PlayFadeIn");
		
		UHealingScoreHeader_C_PlayFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.PlayFadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHealingScoreHeader_C::PlayFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.PlayFadeOut");
		
		UHealingScoreHeader_C_PlayFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.StartFadeOutTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHealingScoreHeader_C::StartFadeOutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.StartFadeOutTimer");
		
		UHealingScoreHeader_C_StartFadeOutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.CustomEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHealingScoreHeader_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.CustomEvent");
		
		UHealingScoreHeader_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HealingScoreHeader.HealingScoreHeader_C.ExecuteUbergraph_HealingScoreHeader
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHealingScoreHeader_C::ExecuteUbergraph_HealingScoreHeader(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HealingScoreHeader.HealingScoreHeader_C.ExecuteUbergraph_HealingScoreHeader");
		
		UHealingScoreHeader_C_ExecuteUbergraph_HealingScoreHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHealingScoreHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealingScoreHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HealingScoreHeader.HealingScoreHeader_C");
		return ptr;
	}

}


