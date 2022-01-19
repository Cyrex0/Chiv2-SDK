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
	 * 		Name   -> Function QuickThrow.QuickThrow_C.OnAssemble_QuickThrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickThrow_C::OnAssemble_QuickThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickThrow.QuickThrow_C.OnAssemble_QuickThrow");
		
		UQuickThrow_C_OnAssemble_QuickThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickThrow.QuickThrow_C.ExecuteUbergraph_QuickThrow
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickThrow_C::ExecuteUbergraph_QuickThrow(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickThrow.QuickThrow_C.ExecuteUbergraph_QuickThrow");
		
		UQuickThrow_C_ExecuteUbergraph_QuickThrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UQuickThrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickThrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass QuickThrow.QuickThrow_C");
		return ptr;
	}

}


