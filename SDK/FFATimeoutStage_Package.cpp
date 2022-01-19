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
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.GetMaxScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScoreNotReplicated                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int                                                Score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFFATimeoutStage_C::GetMaxScore(bool* ScoreNotReplicated, int* Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.GetMaxScore");
		
		AFFATimeoutStage_C_GetMaxScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoreNotReplicated != nullptr)
			*ScoreNotReplicated = params.ScoreNotReplicated;
		if (Score != nullptr)
			*Score = params.Score;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.SetMaxScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NewMaxScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFFATimeoutStage_C::SetMaxScore(int NewMaxScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.SetMaxScore");
		
		AFFATimeoutStage_C_SetMaxScore_Params params {};
		params.NewMaxScore = NewMaxScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.OnRep_MaxScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFFATimeoutStage_C::OnRep_MaxScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.OnRep_MaxScore");
		
		AFFATimeoutStage_C_OnRep_MaxScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.OnRep_IsSuddenDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFFATimeoutStage_C::OnRep_IsSuddenDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.OnRep_IsSuddenDeath");
		
		AFFATimeoutStage_C_OnRep_IsSuddenDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.GetVictor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             Player                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTie                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFFATimeoutStage_C::GetVictor(class ATBLPlayerState** Player, bool* IsTie)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.GetVictor");
		
		AFFATimeoutStage_C_GetVictor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
		if (IsTie != nullptr)
			*IsTie = params.IsTie;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.IsStageReadyToComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool AFFATimeoutStage_C::IsStageReadyToComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.IsStageReadyToComplete");
		
		AFFATimeoutStage_C_IsStageReadyToComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.CompleteStage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFFATimeoutStage_C::CompleteStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.CompleteStage");
		
		AFFATimeoutStage_C_CompleteStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.StartStage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFFATimeoutStage_C::StartStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.StartStage");
		
		AFFATimeoutStage_C_StartStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.Duration Exceeded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFFATimeoutStage_C::Duration_Exceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.Duration Exceeded");
		
		AFFATimeoutStage_C_Duration_Exceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.ExecuteUbergraph_FFATimeoutStage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFFATimeoutStage_C::ExecuteUbergraph_FFATimeoutStage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.ExecuteUbergraph_FFATimeoutStage");
		
		AFFATimeoutStage_C_ExecuteUbergraph_FFATimeoutStage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.MaxScoreUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AFFATimeoutStage_C::MaxScoreUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.MaxScoreUpdated__DelegateSignature");
		
		AFFATimeoutStage_C_MaxScoreUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFATimeoutStage.FFATimeoutStage_C.SuddenDeath__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AFFATimeoutStage_C::SuddenDeath__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFATimeoutStage.FFATimeoutStage_C.SuddenDeath__DelegateSignature");
		
		AFFATimeoutStage_C_SuddenDeath__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFFATimeoutStage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFFATimeoutStage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FFATimeoutStage.FFATimeoutStage_C");
		return ptr;
	}

}


