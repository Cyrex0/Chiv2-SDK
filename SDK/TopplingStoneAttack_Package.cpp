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
	 * 		Name   -> Function TopplingStoneAttack.TopplingStoneAttack_C.OnAssemble_TopplingStoneAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTopplingStoneAttack_C::OnAssemble_TopplingStoneAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TopplingStoneAttack.TopplingStoneAttack_C.OnAssemble_TopplingStoneAttack");
		
		UTopplingStoneAttack_C_OnAssemble_TopplingStoneAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TopplingStoneAttack.TopplingStoneAttack_C.ExecuteUbergraph_TopplingStoneAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTopplingStoneAttack_C::ExecuteUbergraph_TopplingStoneAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TopplingStoneAttack.TopplingStoneAttack_C.ExecuteUbergraph_TopplingStoneAttack");
		
		UTopplingStoneAttack_C_ExecuteUbergraph_TopplingStoneAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTopplingStoneAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTopplingStoneAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TopplingStoneAttack.TopplingStoneAttack_C");
		return ptr;
	}

}


