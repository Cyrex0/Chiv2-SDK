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
	 * 		Name   -> Function DownedPunch.DownedPunch_C.OnAssemble_DownedPunch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDownedPunch_C::OnAssemble_DownedPunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DownedPunch.DownedPunch_C.OnAssemble_DownedPunch");
		
		UDownedPunch_C_OnAssemble_DownedPunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DownedPunch.DownedPunch_C.ExecuteUbergraph_DownedPunch
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDownedPunch_C::ExecuteUbergraph_DownedPunch(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DownedPunch.DownedPunch_C.ExecuteUbergraph_DownedPunch");
		
		UDownedPunch_C_ExecuteUbergraph_DownedPunch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDownedPunch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownedPunch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DownedPunch.DownedPunch_C");
		return ptr;
	}

}


