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
	 * 		Name   -> Function MS_Blocked.MS_Blocked_C.OnAssemble_MS_Blocked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMS_Blocked_C::OnAssemble_MS_Blocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_Blocked.MS_Blocked_C.OnAssemble_MS_Blocked");
		
		UMS_Blocked_C_OnAssemble_MS_Blocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MS_Blocked.MS_Blocked_C.ExecuteUbergraph_MS_Blocked
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMS_Blocked_C::ExecuteUbergraph_MS_Blocked(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_Blocked.MS_Blocked_C.ExecuteUbergraph_MS_Blocked");
		
		UMS_Blocked_C_ExecuteUbergraph_MS_Blocked_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMS_Blocked_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMS_Blocked_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MS_Blocked.MS_Blocked_C");
		return ptr;
	}

}


