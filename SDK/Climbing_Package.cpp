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
	 * 		Name   -> Function Climbing.Climbing_C.OnAssemble_Climbing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UClimbing_C::OnAssemble_Climbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Climbing.Climbing_C.OnAssemble_Climbing");
		
		UClimbing_C_OnAssemble_Climbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Climbing.Climbing_C.ExecuteUbergraph_Climbing
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClimbing_C::ExecuteUbergraph_Climbing(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Climbing.Climbing_C.ExecuteUbergraph_Climbing");
		
		UClimbing_C_ExecuteUbergraph_Climbing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClimbing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimbing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Climbing.Climbing_C");
		return ptr;
	}

}


