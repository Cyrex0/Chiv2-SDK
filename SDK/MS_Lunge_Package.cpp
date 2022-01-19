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
	 * 		Name   -> Function MS_Lunge.MS_Lunge_C.OnAssemble_MS_Lunge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMS_Lunge_C::OnAssemble_MS_Lunge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_Lunge.MS_Lunge_C.OnAssemble_MS_Lunge");
		
		UMS_Lunge_C_OnAssemble_MS_Lunge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MS_Lunge.MS_Lunge_C.ExecuteUbergraph_MS_Lunge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMS_Lunge_C::ExecuteUbergraph_MS_Lunge(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MS_Lunge.MS_Lunge_C.ExecuteUbergraph_MS_Lunge");
		
		UMS_Lunge_C_ExecuteUbergraph_MS_Lunge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMS_Lunge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMS_Lunge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MS_Lunge.MS_Lunge_C");
		return ptr;
	}

}


