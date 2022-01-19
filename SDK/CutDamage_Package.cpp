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
	 * 		Name   -> Function CutDamage.CutDamage_C.OnAssemble_CutDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCutDamage_C::OnAssemble_CutDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutDamage.CutDamage_C.OnAssemble_CutDamage");
		
		UCutDamage_C_OnAssemble_CutDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CutDamage.CutDamage_C.ExecuteUbergraph_CutDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCutDamage_C::ExecuteUbergraph_CutDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutDamage.CutDamage_C.ExecuteUbergraph_CutDamage");
		
		UCutDamage_C_ExecuteUbergraph_CutDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCutDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCutDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CutDamage.CutDamage_C");
		return ptr;
	}

}


