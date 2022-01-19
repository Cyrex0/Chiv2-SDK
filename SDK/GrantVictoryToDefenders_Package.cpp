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
	 * 		Name   -> Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.CompleteStage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToDefenders_C::CompleteStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.CompleteStage");
		
		UGrantVictoryToDefenders_C_CompleteStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.IsStageReadyToComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UGrantVictoryToDefenders_C::IsStageReadyToComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.IsStageReadyToComplete");
		
		UGrantVictoryToDefenders_C_IsStageReadyToComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.TimeoutStage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToDefenders_C::TimeoutStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.TimeoutStage");
		
		UGrantVictoryToDefenders_C_TimeoutStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.StartStage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToDefenders_C::StartStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.StartStage");
		
		UGrantVictoryToDefenders_C_StartStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.ExecuteUbergraph_GrantVictoryToDefenders
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGrantVictoryToDefenders_C::ExecuteUbergraph_GrantVictoryToDefenders(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.ExecuteUbergraph_GrantVictoryToDefenders");
		
		UGrantVictoryToDefenders_C_ExecuteUbergraph_GrantVictoryToDefenders_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGrantVictoryToDefenders_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrantVictoryToDefenders_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GrantVictoryToDefenders.GrantVictoryToDefenders_C");
		return ptr;
	}

}


