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
	 * 		Name   -> Function MS_KnockbackSmall.MS_KnockbackSmall_C.OnAssemble_MS_KnockbackSmall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMS_KnockbackSmall_C::OnAssemble_MS_KnockbackSmall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_KnockbackSmall.MS_KnockbackSmall_C.OnAssemble_MS_KnockbackSmall");
		
		UMS_KnockbackSmall_C_OnAssemble_MS_KnockbackSmall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MS_KnockbackSmall.MS_KnockbackSmall_C.ExecuteUbergraph_MS_KnockbackSmall
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMS_KnockbackSmall_C::ExecuteUbergraph_MS_KnockbackSmall(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_KnockbackSmall.MS_KnockbackSmall_C.ExecuteUbergraph_MS_KnockbackSmall");
		
		UMS_KnockbackSmall_C_ExecuteUbergraph_MS_KnockbackSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMS_KnockbackSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMS_KnockbackSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MS_KnockbackSmall.MS_KnockbackSmall_C");
		return ptr;
	}

}


