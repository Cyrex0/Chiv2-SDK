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
	 * 		Name   -> Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemaining
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	float UGrantVictoryToPlayer_C::GetTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemaining");
		
		UGrantVictoryToPlayer_C_GetTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemainingPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	float UGrantVictoryToPlayer_C::GetTimeRemainingPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemainingPercent");
		
		UGrantVictoryToPlayer_C_GetTimeRemainingPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageCommander
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AActor* UGrantVictoryToPlayer_C::GetStageCommander(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageCommander");
		
		UGrantVictoryToPlayer_C_GetStageCommander_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageIdNum
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int UGrantVictoryToPlayer_C::GetStageIdNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageIdNum");
		
		UGrantVictoryToPlayer_C_GetStageIdNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.CompleteStage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToPlayer_C::CompleteStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.CompleteStage");
		
		UGrantVictoryToPlayer_C_CompleteStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.IsStageReadyToComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UGrantVictoryToPlayer_C::IsStageReadyToComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.IsStageReadyToComplete");
		
		UGrantVictoryToPlayer_C_IsStageReadyToComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.StartStage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToPlayer_C::StartStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.StartStage");
		
		UGrantVictoryToPlayer_C_StartStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.ExecuteUbergraph_GrantVictoryToPlayer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGrantVictoryToPlayer_C::ExecuteUbergraph_GrantVictoryToPlayer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.ExecuteUbergraph_GrantVictoryToPlayer");
		
		UGrantVictoryToPlayer_C_ExecuteUbergraph_GrantVictoryToPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGrantVictoryToPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrantVictoryToPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GrantVictoryToPlayer.GrantVictoryToPlayer_C");
		return ptr;
	}

}


