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
	 * 		Name   -> Function Carryable_HighlanderDrumstick.Carryable_HighlanderDrumstick_C.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACarryable_HighlanderDrumstick_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_HighlanderDrumstick.Carryable_HighlanderDrumstick_C.OnInitialize");
		
		ACarryable_HighlanderDrumstick_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_HighlanderDrumstick.Carryable_HighlanderDrumstick_C.ExecuteUbergraph_Carryable_HighlanderDrumstick
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACarryable_HighlanderDrumstick_C::ExecuteUbergraph_Carryable_HighlanderDrumstick(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_HighlanderDrumstick.Carryable_HighlanderDrumstick_C.ExecuteUbergraph_Carryable_HighlanderDrumstick");
		
		ACarryable_HighlanderDrumstick_C_ExecuteUbergraph_Carryable_HighlanderDrumstick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACarryable_HighlanderDrumstick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarryable_HighlanderDrumstick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Carryable_HighlanderDrumstick.Carryable_HighlanderDrumstick_C");
		return ptr;
	}

}


