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
	 * 		Name   -> Function Siege_Idle.Siege_Idle_C.OnAssemble_Siege_Idle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiege_Idle_C::OnAssemble_Siege_Idle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Idle.Siege_Idle_C.OnAssemble_Siege_Idle");
		
		USiege_Idle_C_OnAssemble_Siege_Idle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Siege_Idle.Siege_Idle_C.ExecuteUbergraph_Siege_Idle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiege_Idle_C::ExecuteUbergraph_Siege_Idle(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Idle.Siege_Idle_C.ExecuteUbergraph_Siege_Idle");
		
		USiege_Idle_C_ExecuteUbergraph_Siege_Idle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USiege_Idle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USiege_Idle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Siege_Idle.Siege_Idle_C");
		return ptr;
	}

}


