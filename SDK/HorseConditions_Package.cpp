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
	 * 		Name   -> Function HorseConditions.HorseConditions_C.OnAssemble_HorseConditions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseConditions_C::OnAssemble_HorseConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseConditions.HorseConditions_C.OnAssemble_HorseConditions");
		
		UHorseConditions_C_OnAssemble_HorseConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseConditions.HorseConditions_C.ExecuteUbergraph_HorseConditions
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseConditions_C::ExecuteUbergraph_HorseConditions(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseConditions.HorseConditions_C.ExecuteUbergraph_HorseConditions");
		
		UHorseConditions_C_ExecuteUbergraph_HorseConditions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseConditions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseConditions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseConditions.HorseConditions_C");
		return ptr;
	}

}


