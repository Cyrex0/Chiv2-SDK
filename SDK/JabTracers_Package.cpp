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
	 * 		Name   -> Function JabTracers.JabTracers_C.OnAssemble_JabTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UJabTracers_C::OnAssemble_JabTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JabTracers.JabTracers_C.OnAssemble_JabTracers");
		
		UJabTracers_C_OnAssemble_JabTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function JabTracers.JabTracers_C.ExecuteUbergraph_JabTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJabTracers_C::ExecuteUbergraph_JabTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JabTracers.JabTracers_C.ExecuteUbergraph_JabTracers");
		
		UJabTracers_C_ExecuteUbergraph_JabTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UJabTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJabTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass JabTracers.JabTracers_C");
		return ptr;
	}

}


