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
	 * 		Name   -> Function Charge.Charge_C.OnAssemble_Charge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCharge_C::OnAssemble_Charge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Charge.Charge_C.OnAssemble_Charge");
		
		UCharge_C_OnAssemble_Charge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Charge.Charge_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCharge_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Charge.Charge_C.EventEndAnimation");
		
		UCharge_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Charge.Charge_C.ExecuteUbergraph_Charge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharge_C::ExecuteUbergraph_Charge(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Charge.Charge_C.ExecuteUbergraph_Charge");
		
		UCharge_C_ExecuteUbergraph_Charge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Charge.Charge_C");
		return ptr;
	}

}


