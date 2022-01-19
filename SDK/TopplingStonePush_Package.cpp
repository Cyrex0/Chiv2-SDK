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
	 * 		Name   -> Function TopplingStonePush.TopplingStonePush_C.OnAssemble_TopplingStonePush
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTopplingStonePush_C::OnAssemble_TopplingStonePush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TopplingStonePush.TopplingStonePush_C.OnAssemble_TopplingStonePush");
		
		UTopplingStonePush_C_OnAssemble_TopplingStonePush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TopplingStonePush.TopplingStonePush_C.ExecuteUbergraph_TopplingStonePush
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTopplingStonePush_C::ExecuteUbergraph_TopplingStonePush(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TopplingStonePush.TopplingStonePush_C.ExecuteUbergraph_TopplingStonePush");
		
		UTopplingStonePush_C_ExecuteUbergraph_TopplingStonePush_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTopplingStonePush_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTopplingStonePush_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TopplingStonePush.TopplingStonePush_C");
		return ptr;
	}

}


