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
	 * 		Name   -> Function MS_KnockbackMedium.MS_KnockbackMedium_C.OnAssemble_MS_KnockbackMedium
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMS_KnockbackMedium_C::OnAssemble_MS_KnockbackMedium()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_KnockbackMedium.MS_KnockbackMedium_C.OnAssemble_MS_KnockbackMedium");
		
		UMS_KnockbackMedium_C_OnAssemble_MS_KnockbackMedium_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MS_KnockbackMedium.MS_KnockbackMedium_C.ExecuteUbergraph_MS_KnockbackMedium
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMS_KnockbackMedium_C::ExecuteUbergraph_MS_KnockbackMedium(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_KnockbackMedium.MS_KnockbackMedium_C.ExecuteUbergraph_MS_KnockbackMedium");
		
		UMS_KnockbackMedium_C_ExecuteUbergraph_MS_KnockbackMedium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMS_KnockbackMedium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMS_KnockbackMedium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MS_KnockbackMedium.MS_KnockbackMedium_C");
		return ptr;
	}

}


