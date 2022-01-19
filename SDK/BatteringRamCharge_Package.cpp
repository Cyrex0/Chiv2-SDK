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
	 * 		Name   -> Function BatteringRamCharge.BatteringRamCharge_C.OnAssemble_BatteringRamCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBatteringRamCharge_C::OnAssemble_BatteringRamCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BatteringRamCharge.BatteringRamCharge_C.OnAssemble_BatteringRamCharge");
		
		UBatteringRamCharge_C_OnAssemble_BatteringRamCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BatteringRamCharge.BatteringRamCharge_C.ExecuteUbergraph_BatteringRamCharge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBatteringRamCharge_C::ExecuteUbergraph_BatteringRamCharge(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BatteringRamCharge.BatteringRamCharge_C.ExecuteUbergraph_BatteringRamCharge");
		
		UBatteringRamCharge_C_ExecuteUbergraph_BatteringRamCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBatteringRamCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBatteringRamCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BatteringRamCharge.BatteringRamCharge_C");
		return ptr;
	}

}


