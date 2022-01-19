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
	 * 		Name   -> Function KnightProgression.KnightProgression_C.OnAssemble_KnightProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKnightProgression_C::OnAssemble_KnightProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnightProgression.KnightProgression_C.OnAssemble_KnightProgression");
		
		UKnightProgression_C_OnAssemble_KnightProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KnightProgression.KnightProgression_C.ExecuteUbergraph_KnightProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKnightProgression_C::ExecuteUbergraph_KnightProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnightProgression.KnightProgression_C.ExecuteUbergraph_KnightProgression");
		
		UKnightProgression_C_ExecuteUbergraph_KnightProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKnightProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnightProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KnightProgression.KnightProgression_C");
		return ptr;
	}

}


