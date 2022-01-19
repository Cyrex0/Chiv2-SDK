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
	 * 		Name   -> Function BaseCrowdControlState.BaseCrowdControlState_C.OnAssemble_BaseCrowdControlState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBaseCrowdControlState_C::OnAssemble_BaseCrowdControlState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCrowdControlState.BaseCrowdControlState_C.OnAssemble_BaseCrowdControlState");
		
		UBaseCrowdControlState_C_OnAssemble_BaseCrowdControlState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCrowdControlState.BaseCrowdControlState_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBaseCrowdControlState_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCrowdControlState.BaseCrowdControlState_C.EventEndAnimation");
		
		UBaseCrowdControlState_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCrowdControlState.BaseCrowdControlState_C.ExecuteUbergraph_BaseCrowdControlState
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCrowdControlState_C::ExecuteUbergraph_BaseCrowdControlState(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCrowdControlState.BaseCrowdControlState_C.ExecuteUbergraph_BaseCrowdControlState");
		
		UBaseCrowdControlState_C_ExecuteUbergraph_BaseCrowdControlState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseCrowdControlState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCrowdControlState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseCrowdControlState.BaseCrowdControlState_C");
		return ptr;
	}

}


