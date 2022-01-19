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
	 * 		Name   -> Function BatteringRamStates.BatteringRamStates_C.OnAssemble_BatteringRamStates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBatteringRamStates_C::OnAssemble_BatteringRamStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BatteringRamStates.BatteringRamStates_C.OnAssemble_BatteringRamStates");
		
		UBatteringRamStates_C_OnAssemble_BatteringRamStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BatteringRamStates.BatteringRamStates_C.ExecuteUbergraph_BatteringRamStates
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBatteringRamStates_C::ExecuteUbergraph_BatteringRamStates(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BatteringRamStates.BatteringRamStates_C.ExecuteUbergraph_BatteringRamStates");
		
		UBatteringRamStates_C_ExecuteUbergraph_BatteringRamStates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBatteringRamStates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBatteringRamStates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BatteringRamStates.BatteringRamStates_C");
		return ptr;
	}

}


