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
	 * 		Name   -> Function BreakableMeleeAttack.BreakableMeleeAttack_C.OnAssemble_BreakableMeleeAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBreakableMeleeAttack_C::OnAssemble_BreakableMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakableMeleeAttack.BreakableMeleeAttack_C.OnAssemble_BreakableMeleeAttack");
		
		UBreakableMeleeAttack_C_OnAssemble_BreakableMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BreakableMeleeAttack.BreakableMeleeAttack_C.ExecuteUbergraph_BreakableMeleeAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakableMeleeAttack_C::ExecuteUbergraph_BreakableMeleeAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakableMeleeAttack.BreakableMeleeAttack_C.ExecuteUbergraph_BreakableMeleeAttack");
		
		UBreakableMeleeAttack_C_ExecuteUbergraph_BreakableMeleeAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBreakableMeleeAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakableMeleeAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BreakableMeleeAttack.BreakableMeleeAttack_C");
		return ptr;
	}

}


