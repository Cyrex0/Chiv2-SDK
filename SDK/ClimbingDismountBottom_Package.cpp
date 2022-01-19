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
	 * 		Name   -> Function ClimbingDismountBottom.ClimbingDismountBottom_C.OnAssemble_ClimbingDismountBottom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UClimbingDismountBottom_C::OnAssemble_ClimbingDismountBottom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClimbingDismountBottom.ClimbingDismountBottom_C.OnAssemble_ClimbingDismountBottom");
		
		UClimbingDismountBottom_C_OnAssemble_ClimbingDismountBottom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ClimbingDismountBottom.ClimbingDismountBottom_C.ExecuteUbergraph_ClimbingDismountBottom
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClimbingDismountBottom_C::ExecuteUbergraph_ClimbingDismountBottom(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClimbingDismountBottom.ClimbingDismountBottom_C.ExecuteUbergraph_ClimbingDismountBottom");
		
		UClimbingDismountBottom_C_ExecuteUbergraph_ClimbingDismountBottom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClimbingDismountBottom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimbingDismountBottom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ClimbingDismountBottom.ClimbingDismountBottom_C");
		return ptr;
	}

}


