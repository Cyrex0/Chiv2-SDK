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
	 * 		Name   -> Function ShoveTracers.ShoveTracers_C.OnAssemble_ShoveTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UShoveTracers_C::OnAssemble_ShoveTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShoveTracers.ShoveTracers_C.OnAssemble_ShoveTracers");
		
		UShoveTracers_C_OnAssemble_ShoveTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ShoveTracers.ShoveTracers_C.ExecuteUbergraph_ShoveTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShoveTracers_C::ExecuteUbergraph_ShoveTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShoveTracers.ShoveTracers_C.ExecuteUbergraph_ShoveTracers");
		
		UShoveTracers_C_ExecuteUbergraph_ShoveTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UShoveTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShoveTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShoveTracers.ShoveTracers_C");
		return ptr;
	}

}


