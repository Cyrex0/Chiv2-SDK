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
	 * 		Name   -> Function SpearCharge.SpearCharge_C.OnAssemble_SpearCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpearCharge_C::OnAssemble_SpearCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpearCharge.SpearCharge_C.OnAssemble_SpearCharge");
		
		USpearCharge_C_OnAssemble_SpearCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpearCharge.SpearCharge_C.ExecuteUbergraph_SpearCharge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpearCharge_C::ExecuteUbergraph_SpearCharge(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpearCharge.SpearCharge_C.ExecuteUbergraph_SpearCharge");
		
		USpearCharge_C_ExecuteUbergraph_SpearCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpearCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpearCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpearCharge.SpearCharge_C");
		return ptr;
	}

}


