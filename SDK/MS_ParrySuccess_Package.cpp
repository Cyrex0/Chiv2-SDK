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
	 * 		Name   -> Function MS_ParrySuccess.MS_ParrySuccess_C.OnAssemble_MS_ParrySuccess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMS_ParrySuccess_C::OnAssemble_MS_ParrySuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_ParrySuccess.MS_ParrySuccess_C.OnAssemble_MS_ParrySuccess");
		
		UMS_ParrySuccess_C_OnAssemble_MS_ParrySuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MS_ParrySuccess.MS_ParrySuccess_C.ExecuteUbergraph_MS_ParrySuccess
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMS_ParrySuccess_C::ExecuteUbergraph_MS_ParrySuccess(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_ParrySuccess.MS_ParrySuccess_C.ExecuteUbergraph_MS_ParrySuccess");
		
		UMS_ParrySuccess_C_ExecuteUbergraph_MS_ParrySuccess_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMS_ParrySuccess_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMS_ParrySuccess_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MS_ParrySuccess.MS_ParrySuccess_C");
		return ptr;
	}

}


