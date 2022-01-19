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
	 * 		Name   -> Function RangedDamage.RangedDamage_C.OnAssemble_RangedDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URangedDamage_C::OnAssemble_RangedDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RangedDamage.RangedDamage_C.OnAssemble_RangedDamage");
		
		URangedDamage_C_OnAssemble_RangedDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RangedDamage.RangedDamage_C.ExecuteUbergraph_RangedDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URangedDamage_C::ExecuteUbergraph_RangedDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RangedDamage.RangedDamage_C.ExecuteUbergraph_RangedDamage");
		
		URangedDamage_C_ExecuteUbergraph_RangedDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URangedDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangedDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RangedDamage.RangedDamage_C");
		return ptr;
	}

}


