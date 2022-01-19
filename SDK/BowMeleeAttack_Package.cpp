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
	 * 		Name   -> Function BowMeleeAttack.BowMeleeAttack_C.OnAssemble_BowMeleeAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBowMeleeAttack_C::OnAssemble_BowMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowMeleeAttack.BowMeleeAttack_C.OnAssemble_BowMeleeAttack");
		
		UBowMeleeAttack_C_OnAssemble_BowMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BowMeleeAttack.BowMeleeAttack_C.ExecuteUbergraph_BowMeleeAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBowMeleeAttack_C::ExecuteUbergraph_BowMeleeAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowMeleeAttack.BowMeleeAttack_C.ExecuteUbergraph_BowMeleeAttack");
		
		UBowMeleeAttack_C_ExecuteUbergraph_BowMeleeAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBowMeleeAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBowMeleeAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BowMeleeAttack.BowMeleeAttack_C");
		return ptr;
	}

}


