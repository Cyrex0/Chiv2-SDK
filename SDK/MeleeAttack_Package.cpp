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
	 * 		Name   -> Function MeleeAttack.MeleeAttack_C.OnAssemble_MeleeAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMeleeAttack_C::OnAssemble_MeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeleeAttack.MeleeAttack_C.OnAssemble_MeleeAttack");
		
		UMeleeAttack_C_OnAssemble_MeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MeleeAttack.MeleeAttack_C.ExecuteUbergraph_MeleeAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMeleeAttack_C::ExecuteUbergraph_MeleeAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeleeAttack.MeleeAttack_C.ExecuteUbergraph_MeleeAttack");
		
		UMeleeAttack_C_ExecuteUbergraph_MeleeAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMeleeAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeleeAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MeleeAttack.MeleeAttack_C");
		return ptr;
	}

}


