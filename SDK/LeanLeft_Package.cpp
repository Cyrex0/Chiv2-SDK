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
	 * 		Name   -> Function LeanLeft.LeanLeft_C.OnAssemble_LeanLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULeanLeft_C::OnAssemble_LeanLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeanLeft.LeanLeft_C.OnAssemble_LeanLeft");
		
		ULeanLeft_C_OnAssemble_LeanLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LeanLeft.LeanLeft_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ULeanLeft_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeanLeft.LeanLeft_C.EventEndAnimation");
		
		ULeanLeft_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LeanLeft.LeanLeft_C.ExecuteUbergraph_LeanLeft
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeanLeft_C::ExecuteUbergraph_LeanLeft(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeanLeft.LeanLeft_C.ExecuteUbergraph_LeanLeft");
		
		ULeanLeft_C_ExecuteUbergraph_LeanLeft_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULeanLeft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeanLeft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LeanLeft.LeanLeft_C");
		return ptr;
	}

}


