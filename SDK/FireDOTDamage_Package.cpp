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
	 * 		Name   -> Function FireDOTDamage.FireDOTDamage_C.OnAssemble_FireDOTDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFireDOTDamage_C::OnAssemble_FireDOTDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FireDOTDamage.FireDOTDamage_C.OnAssemble_FireDOTDamage");
		
		UFireDOTDamage_C_OnAssemble_FireDOTDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FireDOTDamage.FireDOTDamage_C.ExecuteUbergraph_FireDOTDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFireDOTDamage_C::ExecuteUbergraph_FireDOTDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FireDOTDamage.FireDOTDamage_C.ExecuteUbergraph_FireDOTDamage");
		
		UFireDOTDamage_C_ExecuteUbergraph_FireDOTDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFireDOTDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireDOTDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FireDOTDamage.FireDOTDamage_C");
		return ptr;
	}

}


