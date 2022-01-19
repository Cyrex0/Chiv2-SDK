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
	 * 		Name   -> Function FootmanProgression.FootmanProgression_C.OnAssemble_FootmanProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFootmanProgression_C::OnAssemble_FootmanProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootmanProgression.FootmanProgression_C.OnAssemble_FootmanProgression");
		
		UFootmanProgression_C_OnAssemble_FootmanProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FootmanProgression.FootmanProgression_C.ExecuteUbergraph_FootmanProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFootmanProgression_C::ExecuteUbergraph_FootmanProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FootmanProgression.FootmanProgression_C.ExecuteUbergraph_FootmanProgression");
		
		UFootmanProgression_C_ExecuteUbergraph_FootmanProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFootmanProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootmanProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FootmanProgression.FootmanProgression_C");
		return ptr;
	}

}


