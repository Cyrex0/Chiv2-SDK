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
	 * 		Name   -> Function Siege_Cancel.Siege_Cancel_C.OnAssemble_Siege_Cancel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiege_Cancel_C::OnAssemble_Siege_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Cancel.Siege_Cancel_C.OnAssemble_Siege_Cancel");
		
		USiege_Cancel_C_OnAssemble_Siege_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Siege_Cancel.Siege_Cancel_C.ExecuteUbergraph_Siege_Cancel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiege_Cancel_C::ExecuteUbergraph_Siege_Cancel(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Siege_Cancel.Siege_Cancel_C.ExecuteUbergraph_Siege_Cancel");
		
		USiege_Cancel_C_ExecuteUbergraph_Siege_Cancel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USiege_Cancel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USiege_Cancel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Siege_Cancel.Siege_Cancel_C");
		return ptr;
	}

}


