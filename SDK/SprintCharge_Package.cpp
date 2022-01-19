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
	 * 		Name   -> Function SprintCharge.SprintCharge_C.OnAssemble_SprintCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USprintCharge_C::OnAssemble_SprintCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SprintCharge.SprintCharge_C.OnAssemble_SprintCharge");
		
		USprintCharge_C_OnAssemble_SprintCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SprintCharge.SprintCharge_C.ExecuteUbergraph_SprintCharge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USprintCharge_C::ExecuteUbergraph_SprintCharge(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SprintCharge.SprintCharge_C.ExecuteUbergraph_SprintCharge");
		
		USprintCharge_C_ExecuteUbergraph_SprintCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USprintCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USprintCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SprintCharge.SprintCharge_C");
		return ptr;
	}

}


