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
	 * 		Name   -> Function FireDamage.FireDamage_C.OnAssemble_FireDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFireDamage_C::OnAssemble_FireDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FireDamage.FireDamage_C.OnAssemble_FireDamage");
		
		UFireDamage_C_OnAssemble_FireDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FireDamage.FireDamage_C.ExecuteUbergraph_FireDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFireDamage_C::ExecuteUbergraph_FireDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FireDamage.FireDamage_C.ExecuteUbergraph_FireDamage");
		
		UFireDamage_C_ExecuteUbergraph_FireDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFireDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FireDamage.FireDamage_C");
		return ptr;
	}

}


