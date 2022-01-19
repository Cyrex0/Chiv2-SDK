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
	 * 		Name   -> Function HorseCombatStates.HorseCombatStates_C.OnAssemble_HorseCombatStates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseCombatStates_C::OnAssemble_HorseCombatStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseCombatStates.HorseCombatStates_C.OnAssemble_HorseCombatStates");
		
		UHorseCombatStates_C_OnAssemble_HorseCombatStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseCombatStates.HorseCombatStates_C.ExecuteUbergraph_HorseCombatStates
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseCombatStates_C::ExecuteUbergraph_HorseCombatStates(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseCombatStates.HorseCombatStates_C.ExecuteUbergraph_HorseCombatStates");
		
		UHorseCombatStates_C_ExecuteUbergraph_HorseCombatStates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseCombatStates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseCombatStates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseCombatStates.HorseCombatStates_C");
		return ptr;
	}

}


