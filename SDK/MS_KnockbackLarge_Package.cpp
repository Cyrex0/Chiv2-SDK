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
	 * 		Name   -> Function MS_KnockbackLarge.MS_KnockbackLarge_C.OnAssemble_MS_KnockbackLarge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMS_KnockbackLarge_C::OnAssemble_MS_KnockbackLarge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_KnockbackLarge.MS_KnockbackLarge_C.OnAssemble_MS_KnockbackLarge");
		
		UMS_KnockbackLarge_C_OnAssemble_MS_KnockbackLarge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MS_KnockbackLarge.MS_KnockbackLarge_C.ExecuteUbergraph_MS_KnockbackLarge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMS_KnockbackLarge_C::ExecuteUbergraph_MS_KnockbackLarge(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_KnockbackLarge.MS_KnockbackLarge_C.ExecuteUbergraph_MS_KnockbackLarge");
		
		UMS_KnockbackLarge_C_ExecuteUbergraph_MS_KnockbackLarge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMS_KnockbackLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMS_KnockbackLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MS_KnockbackLarge.MS_KnockbackLarge_C");
		return ptr;
	}

}


