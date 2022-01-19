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
	 * 		Name   -> Function RangedAttack.RangedAttack_C.OnAssemble_RangedAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URangedAttack_C::OnAssemble_RangedAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RangedAttack.RangedAttack_C.OnAssemble_RangedAttack");
		
		URangedAttack_C_OnAssemble_RangedAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RangedAttack.RangedAttack_C.ExecuteUbergraph_RangedAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URangedAttack_C::ExecuteUbergraph_RangedAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RangedAttack.RangedAttack_C.ExecuteUbergraph_RangedAttack");
		
		URangedAttack_C_ExecuteUbergraph_RangedAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URangedAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangedAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RangedAttack.RangedAttack_C");
		return ptr;
	}

}


