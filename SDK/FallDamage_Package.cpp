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
	 * 		Name   -> Function FallDamage.FallDamage_C.OnAssemble_FallDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFallDamage_C::OnAssemble_FallDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FallDamage.FallDamage_C.OnAssemble_FallDamage");
		
		UFallDamage_C_OnAssemble_FallDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FallDamage.FallDamage_C.ExecuteUbergraph_FallDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFallDamage_C::ExecuteUbergraph_FallDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FallDamage.FallDamage_C.ExecuteUbergraph_FallDamage");
		
		UFallDamage_C_ExecuteUbergraph_FallDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFallDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFallDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FallDamage.FallDamage_C");
		return ptr;
	}

}


