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
	 * 		Name   -> Function NormalTracers.NormalTracers_C.OnAssemble_NormalTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNormalTracers_C::OnAssemble_NormalTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NormalTracers.NormalTracers_C.OnAssemble_NormalTracers");
		
		UNormalTracers_C_OnAssemble_NormalTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NormalTracers.NormalTracers_C.ExecuteUbergraph_NormalTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNormalTracers_C::ExecuteUbergraph_NormalTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NormalTracers.NormalTracers_C.ExecuteUbergraph_NormalTracers");
		
		UNormalTracers_C_ExecuteUbergraph_NormalTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNormalTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNormalTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NormalTracers.NormalTracers_C");
		return ptr;
	}

}


