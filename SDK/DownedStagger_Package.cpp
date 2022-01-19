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
	 * 		Name   -> Function DownedStagger.DownedStagger_C.OnAssemble_DownedStagger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDownedStagger_C::OnAssemble_DownedStagger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DownedStagger.DownedStagger_C.OnAssemble_DownedStagger");
		
		UDownedStagger_C_OnAssemble_DownedStagger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DownedStagger.DownedStagger_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDownedStagger_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DownedStagger.DownedStagger_C.EventEndAnimation");
		
		UDownedStagger_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DownedStagger.DownedStagger_C.ExecuteUbergraph_DownedStagger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDownedStagger_C::ExecuteUbergraph_DownedStagger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DownedStagger.DownedStagger_C.ExecuteUbergraph_DownedStagger");
		
		UDownedStagger_C_ExecuteUbergraph_DownedStagger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDownedStagger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownedStagger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DownedStagger.DownedStagger_C");
		return ptr;
	}

}


