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
	 * 		Name   -> Function HorseChargeTracers.HorseChargeTracers_C.OnAssemble_HorseChargeTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseChargeTracers_C::OnAssemble_HorseChargeTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseChargeTracers.HorseChargeTracers_C.OnAssemble_HorseChargeTracers");
		
		UHorseChargeTracers_C_OnAssemble_HorseChargeTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseChargeTracers.HorseChargeTracers_C.ExecuteUbergraph_HorseChargeTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseChargeTracers_C::ExecuteUbergraph_HorseChargeTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseChargeTracers.HorseChargeTracers_C.ExecuteUbergraph_HorseChargeTracers");
		
		UHorseChargeTracers_C_ExecuteUbergraph_HorseChargeTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseChargeTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseChargeTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseChargeTracers.HorseChargeTracers_C");
		return ptr;
	}

}


