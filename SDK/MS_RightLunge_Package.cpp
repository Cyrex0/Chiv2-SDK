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
	 * 		Name   -> Function MS_RightLunge.MS_RightLunge_C.OnAssemble_MS_RightLunge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMS_RightLunge_C::OnAssemble_MS_RightLunge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_RightLunge.MS_RightLunge_C.OnAssemble_MS_RightLunge");
		
		UMS_RightLunge_C_OnAssemble_MS_RightLunge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MS_RightLunge.MS_RightLunge_C.ExecuteUbergraph_MS_RightLunge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMS_RightLunge_C::ExecuteUbergraph_MS_RightLunge(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_RightLunge.MS_RightLunge_C.ExecuteUbergraph_MS_RightLunge");
		
		UMS_RightLunge_C_ExecuteUbergraph_MS_RightLunge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMS_RightLunge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMS_RightLunge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MS_RightLunge.MS_RightLunge_C");
		return ptr;
	}

}


