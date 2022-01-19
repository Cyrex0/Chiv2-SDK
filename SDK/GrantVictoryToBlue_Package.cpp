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
	 * 		Name   -> Function GrantVictoryToBlue.GrantVictoryToBlue_C.CompleteStage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToBlue_C::CompleteStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToBlue.GrantVictoryToBlue_C.CompleteStage");
		
		UGrantVictoryToBlue_C_CompleteStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToBlue.GrantVictoryToBlue_C.IsStageReadyToComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UGrantVictoryToBlue_C::IsStageReadyToComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToBlue.GrantVictoryToBlue_C.IsStageReadyToComplete");
		
		UGrantVictoryToBlue_C_IsStageReadyToComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToBlue.GrantVictoryToBlue_C.TimeoutStage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToBlue_C::TimeoutStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToBlue.GrantVictoryToBlue_C.TimeoutStage");
		
		UGrantVictoryToBlue_C_TimeoutStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGrantVictoryToBlue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrantVictoryToBlue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GrantVictoryToBlue.GrantVictoryToBlue_C");
		return ptr;
	}

}


