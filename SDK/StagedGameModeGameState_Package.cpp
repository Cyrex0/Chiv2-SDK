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
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.GetWinningFactionFromPreviousStage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       PreviousWinningFaction                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStagedGameModeGameState_C::GetWinningFactionFromPreviousStage(TBL_EFaction* PreviousWinningFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.GetWinningFactionFromPreviousStage");
		
		AStagedGameModeGameState_C_GetWinningFactionFromPreviousStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PreviousWinningFaction != nullptr)
			*PreviousWinningFaction = params.PreviousWinningFaction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.GetCurrentStage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void AStagedGameModeGameState_C::GetCurrentStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.GetCurrentStage");
		
		AStagedGameModeGameState_C_GetCurrentStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Actor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStagedGameModeGameState_C::OnRep_Stage_Actor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Actor");
		
		AStagedGameModeGameState_C_OnRep_Stage_Actor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Index
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStagedGameModeGameState_C::OnRep_Stage_Index()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Index");
		
		AStagedGameModeGameState_C_OnRep_Stage_Index_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.Set New Stage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStagedGameModeGameState_C::Set_New_Stage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.Set New Stage");
		
		AStagedGameModeGameState_C_Set_New_Stage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStagedGameModeGameState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.ReceiveBeginPlay");
		
		AStagedGameModeGameState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.ExecuteUbergraph_StagedGameModeGameState
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStagedGameModeGameState_C::ExecuteUbergraph_StagedGameModeGameState(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.ExecuteUbergraph_StagedGameModeGameState");
		
		AStagedGameModeGameState_C_ExecuteUbergraph_StagedGameModeGameState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.Stage Index Changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStagedGameModeGameState_C::Stage_Index_Changed__DelegateSignature(int New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.Stage Index Changed__DelegateSignature");
		
		AStagedGameModeGameState_C_Stage_Index_Changed__DelegateSignature_Params params {};
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameModeGameState.StagedGameModeGameState_C.Current Stage Changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Previous_Stage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     New_Stage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStagedGameModeGameState_C::Current_Stage_Changed__DelegateSignature(class UObject* Previous_Stage, class UObject* New_Stage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameModeGameState.StagedGameModeGameState_C.Current Stage Changed__DelegateSignature");
		
		AStagedGameModeGameState_C_Current_Stage_Changed__DelegateSignature_Params params {};
		params.Previous_Stage = Previous_Stage;
		params.New_Stage = New_Stage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStagedGameModeGameState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStagedGameModeGameState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StagedGameModeGameState.StagedGameModeGameState_C");
		return ptr;
	}

}


