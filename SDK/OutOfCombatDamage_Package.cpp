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
	 * 		Name   -> Function OutOfCombatDamage.OutOfCombatDamage_C.OnAssemble_OutOfCombatDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOutOfCombatDamage_C::OnAssemble_OutOfCombatDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OutOfCombatDamage.OutOfCombatDamage_C.OnAssemble_OutOfCombatDamage");
		
		UOutOfCombatDamage_C_OnAssemble_OutOfCombatDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OutOfCombatDamage.OutOfCombatDamage_C.ExecuteUbergraph_OutOfCombatDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOutOfCombatDamage_C::ExecuteUbergraph_OutOfCombatDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OutOfCombatDamage.OutOfCombatDamage_C.ExecuteUbergraph_OutOfCombatDamage");
		
		UOutOfCombatDamage_C_ExecuteUbergraph_OutOfCombatDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOutOfCombatDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOutOfCombatDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OutOfCombatDamage.OutOfCombatDamage_C");
		return ptr;
	}

}


