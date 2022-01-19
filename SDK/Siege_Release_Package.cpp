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
	 * 		Name   -> Function Siege_Release.Siege_Release_C.OnAssemble_Siege_Release
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiege_Release_C::OnAssemble_Siege_Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Release.Siege_Release_C.OnAssemble_Siege_Release");
		
		USiege_Release_C_OnAssemble_Siege_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Siege_Release.Siege_Release_C.ExecuteUbergraph_Siege_Release
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiege_Release_C::ExecuteUbergraph_Siege_Release(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Release.Siege_Release_C.ExecuteUbergraph_Siege_Release");
		
		USiege_Release_C_ExecuteUbergraph_Siege_Release_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USiege_Release_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USiege_Release_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Siege_Release.Siege_Release_C");
		return ptr;
	}

}


