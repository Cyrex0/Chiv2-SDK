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
	 * 		Name   -> Function FistTracers.FistTracers_C.OnAssemble_FistTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFistTracers_C::OnAssemble_FistTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FistTracers.FistTracers_C.OnAssemble_FistTracers");
		
		UFistTracers_C_OnAssemble_FistTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FistTracers.FistTracers_C.ExecuteUbergraph_FistTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFistTracers_C::ExecuteUbergraph_FistTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FistTracers.FistTracers_C.ExecuteUbergraph_FistTracers");
		
		UFistTracers_C_ExecuteUbergraph_FistTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFistTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFistTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FistTracers.FistTracers_C");
		return ptr;
	}

}


