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
	 * 		Name   -> Function ClimbingMountBottom.ClimbingMountBottom_C.OnAssemble_ClimbingMountBottom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UClimbingMountBottom_C::OnAssemble_ClimbingMountBottom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClimbingMountBottom.ClimbingMountBottom_C.OnAssemble_ClimbingMountBottom");
		
		UClimbingMountBottom_C_OnAssemble_ClimbingMountBottom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ClimbingMountBottom.ClimbingMountBottom_C.ExecuteUbergraph_ClimbingMountBottom
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClimbingMountBottom_C::ExecuteUbergraph_ClimbingMountBottom(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClimbingMountBottom.ClimbingMountBottom_C.ExecuteUbergraph_ClimbingMountBottom");
		
		UClimbingMountBottom_C_ExecuteUbergraph_ClimbingMountBottom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClimbingMountBottom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimbingMountBottom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ClimbingMountBottom.ClimbingMountBottom_C");
		return ptr;
	}

}


