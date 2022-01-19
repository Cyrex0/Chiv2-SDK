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
	 * 		Name   -> Function Siege_Charging.Siege_Charging_C.OnAssemble_Siege_Charging
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiege_Charging_C::OnAssemble_Siege_Charging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Charging.Siege_Charging_C.OnAssemble_Siege_Charging");
		
		USiege_Charging_C_OnAssemble_Siege_Charging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Siege_Charging.Siege_Charging_C.ExecuteUbergraph_Siege_Charging
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiege_Charging_C::ExecuteUbergraph_Siege_Charging(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Charging.Siege_Charging_C.ExecuteUbergraph_Siege_Charging");
		
		USiege_Charging_C_ExecuteUbergraph_Siege_Charging_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USiege_Charging_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USiege_Charging_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Siege_Charging.Siege_Charging_C");
		return ptr;
	}

}


