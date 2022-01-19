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
	 * 		Name   -> Function LeftFistTracers.LeftFistTracers_C.OnAssemble_LeftFistTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULeftFistTracers_C::OnAssemble_LeftFistTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFistTracers.LeftFistTracers_C.OnAssemble_LeftFistTracers");
		
		ULeftFistTracers_C_OnAssemble_LeftFistTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LeftFistTracers.LeftFistTracers_C.ExecuteUbergraph_LeftFistTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeftFistTracers_C::ExecuteUbergraph_LeftFistTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftFistTracers.LeftFistTracers_C.ExecuteUbergraph_LeftFistTracers");
		
		ULeftFistTracers_C_ExecuteUbergraph_LeftFistTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULeftFistTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeftFistTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LeftFistTracers.LeftFistTracers_C");
		return ptr;
	}

}


