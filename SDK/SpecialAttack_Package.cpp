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
	 * 		Name   -> Function SpecialAttack.SpecialAttack_C.OnAssemble_SpecialAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpecialAttack_C::OnAssemble_SpecialAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialAttack.SpecialAttack_C.OnAssemble_SpecialAttack");
		
		USpecialAttack_C_OnAssemble_SpecialAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialAttack.SpecialAttack_C.ExecuteUbergraph_SpecialAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialAttack_C::ExecuteUbergraph_SpecialAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialAttack.SpecialAttack_C.ExecuteUbergraph_SpecialAttack");
		
		USpecialAttack_C_ExecuteUbergraph_SpecialAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpecialAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecialAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpecialAttack.SpecialAttack_C");
		return ptr;
	}

}


