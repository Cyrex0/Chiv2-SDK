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
	 * 		Name   -> Function TackleTracers.TackleTracers_C.OnAssemble_TackleTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTackleTracers_C::OnAssemble_TackleTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TackleTracers.TackleTracers_C.OnAssemble_TackleTracers");
		
		UTackleTracers_C_OnAssemble_TackleTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TackleTracers.TackleTracers_C.ExecuteUbergraph_TackleTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTackleTracers_C::ExecuteUbergraph_TackleTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TackleTracers.TackleTracers_C.ExecuteUbergraph_TackleTracers");
		
		UTackleTracers_C_ExecuteUbergraph_TackleTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTackleTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTackleTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TackleTracers.TackleTracers_C");
		return ptr;
	}

}


