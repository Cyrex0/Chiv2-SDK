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
	 * 		Name   -> Function MS_Knockback.MS_Knockback_C.OnAssemble_MS_Knockback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMS_Knockback_C::OnAssemble_MS_Knockback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_Knockback.MS_Knockback_C.OnAssemble_MS_Knockback");
		
		UMS_Knockback_C_OnAssemble_MS_Knockback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MS_Knockback.MS_Knockback_C.ExecuteUbergraph_MS_Knockback
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMS_Knockback_C::ExecuteUbergraph_MS_Knockback(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_Knockback.MS_Knockback_C.ExecuteUbergraph_MS_Knockback");
		
		UMS_Knockback_C_ExecuteUbergraph_MS_Knockback_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMS_Knockback_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMS_Knockback_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MS_Knockback.MS_Knockback_C");
		return ptr;
	}

}


