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
	 * 		Name   -> Function ChargeWeak.ChargeWeak_C.OnAssemble_ChargeWeak
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChargeWeak_C::OnAssemble_ChargeWeak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeWeak.ChargeWeak_C.OnAssemble_ChargeWeak");
		
		UChargeWeak_C_OnAssemble_ChargeWeak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChargeWeak.ChargeWeak_C.ExecuteUbergraph_ChargeWeak
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChargeWeak_C::ExecuteUbergraph_ChargeWeak(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeWeak.ChargeWeak_C.ExecuteUbergraph_ChargeWeak");
		
		UChargeWeak_C_ExecuteUbergraph_ChargeWeak_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UChargeWeak_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChargeWeak_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChargeWeak.ChargeWeak_C");
		return ptr;
	}

}


