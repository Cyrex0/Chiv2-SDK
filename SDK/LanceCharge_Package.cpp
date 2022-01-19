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
	 * 		Name   -> Function LanceCharge.LanceCharge_C.OnAssemble_LanceCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULanceCharge_C::OnAssemble_LanceCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanceCharge.LanceCharge_C.OnAssemble_LanceCharge");
		
		ULanceCharge_C_OnAssemble_LanceCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LanceCharge.LanceCharge_C.ExecuteUbergraph_LanceCharge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULanceCharge_C::ExecuteUbergraph_LanceCharge(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanceCharge.LanceCharge_C.ExecuteUbergraph_LanceCharge");
		
		ULanceCharge_C_ExecuteUbergraph_LanceCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULanceCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULanceCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LanceCharge.LanceCharge_C");
		return ptr;
	}

}


