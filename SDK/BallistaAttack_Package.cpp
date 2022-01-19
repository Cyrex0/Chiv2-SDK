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
	 * 		Name   -> Function BallistaAttack.BallistaAttack_C.OnAssemble_BallistaAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBallistaAttack_C::OnAssemble_BallistaAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallistaAttack.BallistaAttack_C.OnAssemble_BallistaAttack");
		
		UBallistaAttack_C_OnAssemble_BallistaAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BallistaAttack.BallistaAttack_C.ExecuteUbergraph_BallistaAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBallistaAttack_C::ExecuteUbergraph_BallistaAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallistaAttack.BallistaAttack_C.ExecuteUbergraph_BallistaAttack");
		
		UBallistaAttack_C_ExecuteUbergraph_BallistaAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBallistaAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBallistaAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BallistaAttack.BallistaAttack_C");
		return ptr;
	}

}


