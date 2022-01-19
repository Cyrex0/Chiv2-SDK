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
	 * 		Name   -> Function TrapDamage.TrapDamage_C.OnAssemble_TrapDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTrapDamage_C::OnAssemble_TrapDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDamage.TrapDamage_C.OnAssemble_TrapDamage");
		
		UTrapDamage_C_OnAssemble_TrapDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TrapDamage.TrapDamage_C.ExecuteUbergraph_TrapDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrapDamage_C::ExecuteUbergraph_TrapDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrapDamage.TrapDamage_C.ExecuteUbergraph_TrapDamage");
		
		UTrapDamage_C_ExecuteUbergraph_TrapDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTrapDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrapDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrapDamage.TrapDamage_C");
		return ptr;
	}

}


