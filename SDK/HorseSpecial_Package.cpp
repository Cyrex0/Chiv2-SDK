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
	 * 		Name   -> Function HorseSpecial.HorseSpecial_C.OnAssemble_HorseSpecial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseSpecial_C::OnAssemble_HorseSpecial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseSpecial.HorseSpecial_C.OnAssemble_HorseSpecial");
		
		UHorseSpecial_C_OnAssemble_HorseSpecial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseSpecial.HorseSpecial_C.ExecuteUbergraph_HorseSpecial
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseSpecial_C::ExecuteUbergraph_HorseSpecial(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseSpecial.HorseSpecial_C.ExecuteUbergraph_HorseSpecial");
		
		UHorseSpecial_C_ExecuteUbergraph_HorseSpecial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseSpecial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseSpecial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseSpecial.HorseSpecial_C");
		return ptr;
	}

}


