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
	 * 		Name   -> Function RightFistTracers.RightFistTracers_C.OnAssemble_RightFistTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URightFistTracers_C::OnAssemble_RightFistTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightFistTracers.RightFistTracers_C.OnAssemble_RightFistTracers");
		
		URightFistTracers_C_OnAssemble_RightFistTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RightFistTracers.RightFistTracers_C.ExecuteUbergraph_RightFistTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightFistTracers_C::ExecuteUbergraph_RightFistTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightFistTracers.RightFistTracers_C.ExecuteUbergraph_RightFistTracers");
		
		URightFistTracers_C_ExecuteUbergraph_RightFistTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URightFistTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URightFistTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RightFistTracers.RightFistTracers_C");
		return ptr;
	}

}


