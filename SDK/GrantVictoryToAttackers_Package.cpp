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
	 * 		Name   -> Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.CompleteStage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToAttackers_C::CompleteStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.CompleteStage");
		
		UGrantVictoryToAttackers_C_CompleteStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.IsStageReadyToComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UGrantVictoryToAttackers_C::IsStageReadyToComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.IsStageReadyToComplete");
		
		UGrantVictoryToAttackers_C_IsStageReadyToComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.TimeoutStage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToAttackers_C::TimeoutStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.TimeoutStage");
		
		UGrantVictoryToAttackers_C_TimeoutStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.StartStage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToAttackers_C::StartStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.StartStage");
		
		UGrantVictoryToAttackers_C_StartStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.ExecuteUbergraph_GrantVictoryToAttackers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGrantVictoryToAttackers_C::ExecuteUbergraph_GrantVictoryToAttackers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.ExecuteUbergraph_GrantVictoryToAttackers");
		
		UGrantVictoryToAttackers_C_ExecuteUbergraph_GrantVictoryToAttackers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGrantVictoryToAttackers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrantVictoryToAttackers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GrantVictoryToAttackers.GrantVictoryToAttackers_C");
		return ptr;
	}

}


