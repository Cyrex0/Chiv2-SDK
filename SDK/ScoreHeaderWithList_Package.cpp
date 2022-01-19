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
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetLifeSpanTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UScoreHeaderWithList_C::GetLifeSpanTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetLifeSpanTime");
		
		UScoreHeaderWithList_C_GetLifeSpanTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.RemoveExcessChildSubWidgets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UScoreHeaderWithList_C::RemoveExcessChildSubWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.RemoveExcessChildSubWidgets");
		
		UScoreHeaderWithList_C_RemoveExcessChildSubWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.SendBreakableEventToCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UScoreHeaderWithList_C::SendBreakableEventToCrosshair(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.SendBreakableEventToCrosshair");
		
		UScoreHeaderWithList_C_SendBreakableEventToCrosshair_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.DetermineEventType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEventStruct                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ScoreEventType_EScoreEventType                     Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScoreHeaderWithList_C::DetermineEventType(const struct FScoreEventStruct& ScoreEventStruct, ScoreEventType_EScoreEventType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.DetermineEventType");
		
		UScoreHeaderWithList_C_DetermineEventType_Params params {};
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
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetScoreText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                ScoreValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 * 		bool                                               IsPositive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreHeaderWithList_C::GetScoreText(int ScoreValue, class FText* Result, bool* IsPositive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetScoreText");
		
		UScoreHeaderWithList_C_GetScoreText_Params params {};
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
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UScoreHeaderWithList_C::AddSubScoreEvent(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreEvent");
		
		UScoreHeaderWithList_C_AddSubScoreEvent_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreWidget
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEventStruct                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UScoreHeaderWithList_C::AddSubScoreWidget(const struct FScoreEventStruct& ScoreEventStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreWidget");
		
		UScoreHeaderWithList_C_AddSubScoreWidget_Params params {};
		params.ScoreEventStruct = ScoreEventStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddScore
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScoreHeaderWithList_C::AddScore(int Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddScore");
		
		UScoreHeaderWithList_C_AddScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UScoreHeaderWithList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.Construct");
		
		UScoreHeaderWithList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnRemoved
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UScoreHeaderWithList_C::OnRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnRemoved");
		
		UScoreHeaderWithList_C_OnRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScoreHeaderWithList_C::PlayFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeIn");
		
		UScoreHeaderWithList_C_PlayFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnIndexChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScoreHeaderWithList_C::OnIndexChanged(int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnIndexChanged");
		
		UScoreHeaderWithList_C_OnIndexChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScoreHeaderWithList_C::PlayFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeOut");
		
		UScoreHeaderWithList_C_PlayFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOutTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScoreHeaderWithList_C::StartFadeOutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOutTimer");
		
		UScoreHeaderWithList_C_StartFadeOutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOut_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScoreHeaderWithList_C::StartFadeOut_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOut_2");
		
		UScoreHeaderWithList_C_StartFadeOut_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreHeaderWithList.ScoreHeaderWithList_C.ExecuteUbergraph_ScoreHeaderWithList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScoreHeaderWithList_C::ExecuteUbergraph_ScoreHeaderWithList(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreHeaderWithList.ScoreHeaderWithList_C.ExecuteUbergraph_ScoreHeaderWithList");
		
		UScoreHeaderWithList_C_ExecuteUbergraph_ScoreHeaderWithList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UScoreHeaderWithList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreHeaderWithList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreHeaderWithList.ScoreHeaderWithList_C");
		return ptr;
	}

}


