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
	 * 		Name   -> Function FistSpecial.FistSpecial_C.OnAssemble_FistSpecial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFistSpecial_C::OnAssemble_FistSpecial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FistSpecial.FistSpecial_C.OnAssemble_FistSpecial");
		
		UFistSpecial_C_OnAssemble_FistSpecial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FistSpecial.FistSpecial_C.ExecuteUbergraph_FistSpecial
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFistSpecial_C::ExecuteUbergraph_FistSpecial(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FistSpecial.FistSpecial_C.ExecuteUbergraph_FistSpecial");
		
		UFistSpecial_C_ExecuteUbergraph_FistSpecial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFistSpecial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFistSpecial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FistSpecial.FistSpecial_C");
		return ptr;
	}

}


