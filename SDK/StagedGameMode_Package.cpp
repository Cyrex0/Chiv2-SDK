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
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.IsAutoBalanceBlocked
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool AStagedGameMode_C::IsAutoBalanceBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.IsAutoBalanceBlocked");
		
		AStagedGameMode_C_IsAutoBalanceBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.K2_GetCurrentStage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UObject* AStagedGameMode_C::K2_GetCurrentStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.K2_GetCurrentStage");
		
		AStagedGameMode_C_K2_GetCurrentStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.Get First Stage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStagedGameMode_C::Get_First_Stage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.Get First Stage");
		
		AStagedGameMode_C_Get_First_Stage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.Get First Stage With Warmup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStagedGameMode_C::Get_First_Stage_With_Warmup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.Get First Stage With Warmup");
		
		AStagedGameMode_C_Get_First_Stage_With_Warmup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStagedGameMode_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.ReceiveTick");
		
		AStagedGameMode_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.K2_HandleMatchHasStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AStagedGameMode_C::K2_HandleMatchHasStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.K2_HandleMatchHasStarted");
		
		AStagedGameMode_C_K2_HandleMatchHasStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.K2_OnSetMatchState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStagedGameMode_C::K2_OnSetMatchState(const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.K2_OnSetMatchState");
		
		AStagedGameMode_C_K2_OnSetMatchState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.K2_HandleSkipStage
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AStagedGameMode_C::K2_HandleSkipStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.K2_HandleSkipStage");
		
		AStagedGameMode_C_K2_HandleSkipStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.K2_HandleMatchIsWaitingToStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AStagedGameMode_C::K2_HandleMatchIsWaitingToStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.K2_HandleMatchIsWaitingToStart");
		
		AStagedGameMode_C_K2_HandleMatchIsWaitingToStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.ExecuteUbergraph_StagedGameMode
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStagedGameMode_C::ExecuteUbergraph_StagedGameMode(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.ExecuteUbergraph_StagedGameMode");
		
		AStagedGameMode_C_ExecuteUbergraph_StagedGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StagedGameMode.StagedGameMode_C.Started New Stage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AStagedGameMode_C::Started_New_Stage__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StagedGameMode.StagedGameMode_C.Started New Stage__DelegateSignature");
		
		AStagedGameMode_C_Started_New_Stage__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStagedGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStagedGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StagedGameMode.StagedGameMode_C");
		return ptr;
	}

}


