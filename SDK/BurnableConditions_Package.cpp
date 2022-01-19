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
	 * 		Name   -> Function BurnableConditions.BurnableConditions_C.OnAssemble_BurnableConditions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBurnableConditions_C::OnAssemble_BurnableConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurnableConditions.BurnableConditions_C.OnAssemble_BurnableConditions");
		
		UBurnableConditions_C_OnAssemble_BurnableConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BurnableConditions.BurnableConditions_C.ExecuteUbergraph_BurnableConditions
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurnableConditions_C::ExecuteUbergraph_BurnableConditions(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurnableConditions.BurnableConditions_C.ExecuteUbergraph_BurnableConditions");
		
		UBurnableConditions_C_ExecuteUbergraph_BurnableConditions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBurnableConditions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurnableConditions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BurnableConditions.BurnableConditions_C");
		return ptr;
	}

}


