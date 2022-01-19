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
	 * 		Name   -> Function TopplingStoneSelfAttack.TopplingStoneSelfAttack_C.OnAssemble_TopplingStoneSelfAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTopplingStoneSelfAttack_C::OnAssemble_TopplingStoneSelfAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TopplingStoneSelfAttack.TopplingStoneSelfAttack_C.OnAssemble_TopplingStoneSelfAttack");
		
		UTopplingStoneSelfAttack_C_OnAssemble_TopplingStoneSelfAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TopplingStoneSelfAttack.TopplingStoneSelfAttack_C.ExecuteUbergraph_TopplingStoneSelfAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTopplingStoneSelfAttack_C::ExecuteUbergraph_TopplingStoneSelfAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TopplingStoneSelfAttack.TopplingStoneSelfAttack_C.ExecuteUbergraph_TopplingStoneSelfAttack");
		
		UTopplingStoneSelfAttack_C_ExecuteUbergraph_TopplingStoneSelfAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTopplingStoneSelfAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTopplingStoneSelfAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TopplingStoneSelfAttack.TopplingStoneSelfAttack_C");
		return ptr;
	}

}


