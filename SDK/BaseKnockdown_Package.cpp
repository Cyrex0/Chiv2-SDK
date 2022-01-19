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
	 * 		Name   -> Function BaseKnockdown.BaseKnockdown_C.OnAssemble_BaseKnockdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBaseKnockdown_C::OnAssemble_BaseKnockdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseKnockdown.BaseKnockdown_C.OnAssemble_BaseKnockdown");
		
		UBaseKnockdown_C_OnAssemble_BaseKnockdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseKnockdown.BaseKnockdown_C.ExecuteUbergraph_BaseKnockdown
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseKnockdown_C::ExecuteUbergraph_BaseKnockdown(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseKnockdown.BaseKnockdown_C.ExecuteUbergraph_BaseKnockdown");
		
		UBaseKnockdown_C_ExecuteUbergraph_BaseKnockdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseKnockdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKnockdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseKnockdown.BaseKnockdown_C");
		return ptr;
	}

}


