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
	 * 		Name   -> Function EmoteHeld.EmoteHeld_C.OnAssemble_EmoteHeld
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEmoteHeld_C::OnAssemble_EmoteHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteHeld.EmoteHeld_C.OnAssemble_EmoteHeld");
		
		UEmoteHeld_C_OnAssemble_EmoteHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function EmoteHeld.EmoteHeld_C.ExecuteUbergraph_EmoteHeld
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmoteHeld_C::ExecuteUbergraph_EmoteHeld(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteHeld.EmoteHeld_C.ExecuteUbergraph_EmoteHeld");
		
		UEmoteHeld_C_ExecuteUbergraph_EmoteHeld_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEmoteHeld_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteHeld_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EmoteHeld.EmoteHeld_C");
		return ptr;
	}

}


