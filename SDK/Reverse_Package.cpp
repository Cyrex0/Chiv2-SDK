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
	 * 		Name   -> Function Reverse.Reverse_C.OnAssemble_Reverse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UReverse_C::OnAssemble_Reverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reverse.Reverse_C.OnAssemble_Reverse");
		
		UReverse_C_OnAssemble_Reverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Reverse.Reverse_C.GearUp
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UReverse_C::GearUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reverse.Reverse_C.GearUp");
		
		UReverse_C_GearUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Reverse.Reverse_C.UpdateMovement
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UReverse_C::UpdateMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reverse.Reverse_C.UpdateMovement");
		
		UReverse_C_UpdateMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Reverse.Reverse_C.ExecuteUbergraph_Reverse
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReverse_C::ExecuteUbergraph_Reverse(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reverse.Reverse_C.ExecuteUbergraph_Reverse");
		
		UReverse_C_ExecuteUbergraph_Reverse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UReverse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReverse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Reverse.Reverse_C");
		return ptr;
	}

}


