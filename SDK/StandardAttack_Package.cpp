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
	 * 		Name   -> Function StandardAttack.StandardAttack_C.OnAssemble_StandardAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStandardAttack_C::OnAssemble_StandardAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandardAttack.StandardAttack_C.OnAssemble_StandardAttack");
		
		UStandardAttack_C_OnAssemble_StandardAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StandardAttack.StandardAttack_C.ExecuteUbergraph_StandardAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStandardAttack_C::ExecuteUbergraph_StandardAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandardAttack.StandardAttack_C.ExecuteUbergraph_StandardAttack");
		
		UStandardAttack_C_ExecuteUbergraph_StandardAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStandardAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardAttack.StandardAttack_C");
		return ptr;
	}

}


