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
	 * 		Name   -> Function Siege_Recovery.Siege_Recovery_C.OnAssemble_Siege_Recovery
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiege_Recovery_C::OnAssemble_Siege_Recovery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Recovery.Siege_Recovery_C.OnAssemble_Siege_Recovery");
		
		USiege_Recovery_C_OnAssemble_Siege_Recovery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Siege_Recovery.Siege_Recovery_C.ExecuteUbergraph_Siege_Recovery
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiege_Recovery_C::ExecuteUbergraph_Siege_Recovery(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Recovery.Siege_Recovery_C.ExecuteUbergraph_Siege_Recovery");
		
		USiege_Recovery_C_ExecuteUbergraph_Siege_Recovery_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USiege_Recovery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USiege_Recovery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Siege_Recovery.Siege_Recovery_C");
		return ptr;
	}

}


