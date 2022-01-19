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
	 * 		Name   -> Function HeadbuttTracers.HeadbuttTracers_C.OnAssemble_HeadbuttTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHeadbuttTracers_C::OnAssemble_HeadbuttTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeadbuttTracers.HeadbuttTracers_C.OnAssemble_HeadbuttTracers");
		
		UHeadbuttTracers_C_OnAssemble_HeadbuttTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HeadbuttTracers.HeadbuttTracers_C.ExecuteUbergraph_HeadbuttTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHeadbuttTracers_C::ExecuteUbergraph_HeadbuttTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeadbuttTracers.HeadbuttTracers_C.ExecuteUbergraph_HeadbuttTracers");
		
		UHeadbuttTracers_C_ExecuteUbergraph_HeadbuttTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHeadbuttTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeadbuttTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HeadbuttTracers.HeadbuttTracers_C");
		return ptr;
	}

}


