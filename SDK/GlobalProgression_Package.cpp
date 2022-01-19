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
	 * 		Name   -> Function GlobalProgression.GlobalProgression_C.OnAssemble_GlobalProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalProgression_C::OnAssemble_GlobalProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalProgression.GlobalProgression_C.OnAssemble_GlobalProgression");
		
		UGlobalProgression_C_OnAssemble_GlobalProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalProgression.GlobalProgression_C.ExecuteUbergraph_GlobalProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalProgression_C::ExecuteUbergraph_GlobalProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalProgression.GlobalProgression_C.ExecuteUbergraph_GlobalProgression");
		
		UGlobalProgression_C_ExecuteUbergraph_GlobalProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGlobalProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalProgression.GlobalProgression_C");
		return ptr;
	}

}


