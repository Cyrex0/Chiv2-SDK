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
	 * 		Name   -> Function Headbutt.Headbutt_C.OnAssemble_Headbutt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHeadbutt_C::OnAssemble_Headbutt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Headbutt.Headbutt_C.OnAssemble_Headbutt");
		
		UHeadbutt_C_OnAssemble_Headbutt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Headbutt.Headbutt_C.ExecuteUbergraph_Headbutt
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHeadbutt_C::ExecuteUbergraph_Headbutt(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Headbutt.Headbutt_C.ExecuteUbergraph_Headbutt");
		
		UHeadbutt_C_ExecuteUbergraph_Headbutt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHeadbutt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeadbutt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Headbutt.Headbutt_C");
		return ptr;
	}

}


