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
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.RemoveExcessChildSubWidgets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UReviveScoreHeader_C::RemoveExcessChildSubWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.RemoveExcessChildSubWidgets");
		
		UReviveScoreHeader_C_RemoveExcessChildSubWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.SendBreakableEventToCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UReviveScoreHeader_C::SendBreakableEventToCrosshair(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.SendBreakableEventToCrosshair");
		
		UReviveScoreHeader_C_SendBreakableEventToCrosshair_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.DetermineEventType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEventStruct                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ScoreEventType_EScoreEventType                     Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReviveScoreHeader_C::DetermineEventType(const struct FScoreEventStruct& ScoreEventStruct, ScoreEventType_EScoreEventType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.DetermineEventType");
		
		UReviveScoreHeader_C_DetermineEventType_Params params {};
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
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.GetScoreText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                ScoreValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 * 		bool                                               IsPositive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReviveScoreHeader_C::GetScoreText(int ScoreValue, class FText* Result, bool* IsPositive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.GetScoreText");
		
		UReviveScoreHeader_C_GetScoreText_Params params {};
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
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UReviveScoreHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.Construct");
		
		UReviveScoreHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.OnIndexChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReviveScoreHeader_C::OnIndexChanged(int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.OnIndexChanged");
		
		UReviveScoreHeader_C_OnIndexChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.OnRemoved
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UReviveScoreHeader_C::OnRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.OnRemoved");
		
		UReviveScoreHeader_C_OnRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UReviveScoreHeader_C::AddSubScoreEvent(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreEvent");
		
		UReviveScoreHeader_C_AddSubScoreEvent_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreWidget
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEventStruct                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UReviveScoreHeader_C::AddSubScoreWidget(const struct FScoreEventStruct& ScoreEventStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreWidget");
		
		UReviveScoreHeader_C_AddSubScoreWidget_Params params {};
		params.ScoreEventStruct = ScoreEventStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.AddScore
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReviveScoreHeader_C::AddScore(int Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.AddScore");
		
		UReviveScoreHeader_C_AddScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.StartFadeOut_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UReviveScoreHeader_C::StartFadeOut_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.StartFadeOut_2");
		
		UReviveScoreHeader_C_StartFadeOut_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ReviveScoreHeader.ReviveScoreHeader_C.ExecuteUbergraph_ReviveScoreHeader
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReviveScoreHeader_C::ExecuteUbergraph_ReviveScoreHeader(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScoreHeader.ReviveScoreHeader_C.ExecuteUbergraph_ReviveScoreHeader");
		
		UReviveScoreHeader_C_ExecuteUbergraph_ReviveScoreHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UReviveScoreHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveScoreHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReviveScoreHeader.ReviveScoreHeader_C");
		return ptr;
	}

}


