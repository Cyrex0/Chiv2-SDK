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
	 * 		Name   -> Function SpearChargeTracers.SpearChargeTracers_C.OnAssemble_SpearChargeTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpearChargeTracers_C::OnAssemble_SpearChargeTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpearChargeTracers.SpearChargeTracers_C.OnAssemble_SpearChargeTracers");
		
		USpearChargeTracers_C_OnAssemble_SpearChargeTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpearChargeTracers.SpearChargeTracers_C.ExecuteUbergraph_SpearChargeTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpearChargeTracers_C::ExecuteUbergraph_SpearChargeTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpearChargeTracers.SpearChargeTracers_C.ExecuteUbergraph_SpearChargeTracers");
		
		USpearChargeTracers_C_ExecuteUbergraph_SpearChargeTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpearChargeTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpearChargeTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpearChargeTracers.SpearChargeTracers_C");
		return ptr;
	}

}


