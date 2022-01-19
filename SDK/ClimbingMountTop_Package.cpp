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
	 * 		Name   -> Function ClimbingMountTop.ClimbingMountTop_C.OnAssemble_ClimbingMountTop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UClimbingMountTop_C::OnAssemble_ClimbingMountTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClimbingMountTop.ClimbingMountTop_C.OnAssemble_ClimbingMountTop");
		
		UClimbingMountTop_C_OnAssemble_ClimbingMountTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ClimbingMountTop.ClimbingMountTop_C.ExecuteUbergraph_ClimbingMountTop
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClimbingMountTop_C::ExecuteUbergraph_ClimbingMountTop(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClimbingMountTop.ClimbingMountTop_C.ExecuteUbergraph_ClimbingMountTop");
		
		UClimbingMountTop_C_ExecuteUbergraph_ClimbingMountTop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClimbingMountTop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimbingMountTop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ClimbingMountTop.ClimbingMountTop_C");
		return ptr;
	}

}


