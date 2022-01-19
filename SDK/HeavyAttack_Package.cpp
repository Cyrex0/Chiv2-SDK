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
	 * 		Name   -> Function HeavyAttack.HeavyAttack_C.OnAssemble_HeavyAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHeavyAttack_C::OnAssemble_HeavyAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeavyAttack.HeavyAttack_C.OnAssemble_HeavyAttack");
		
		UHeavyAttack_C_OnAssemble_HeavyAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HeavyAttack.HeavyAttack_C.ExecuteUbergraph_HeavyAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHeavyAttack_C::ExecuteUbergraph_HeavyAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeavyAttack.HeavyAttack_C.ExecuteUbergraph_HeavyAttack");
		
		UHeavyAttack_C_ExecuteUbergraph_HeavyAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHeavyAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeavyAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HeavyAttack.HeavyAttack_C");
		return ptr;
	}

}


