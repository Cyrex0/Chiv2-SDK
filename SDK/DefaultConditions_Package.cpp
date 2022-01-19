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
	 * 		Name   -> Function DefaultConditions.DefaultConditions_C.OnAssemble_DefaultConditions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDefaultConditions_C::OnAssemble_DefaultConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultConditions.DefaultConditions_C.OnAssemble_DefaultConditions");
		
		UDefaultConditions_C_OnAssemble_DefaultConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultConditions.DefaultConditions_C.ExecuteUbergraph_DefaultConditions
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultConditions_C::ExecuteUbergraph_DefaultConditions(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultConditions.DefaultConditions_C.ExecuteUbergraph_DefaultConditions");
		
		UDefaultConditions_C_ExecuteUbergraph_DefaultConditions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDefaultConditions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultConditions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultConditions.DefaultConditions_C");
		return ptr;
	}

}


