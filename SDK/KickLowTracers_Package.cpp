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
	 * 		Name   -> Function KickLowTracers.KickLowTracers_C.OnAssemble_KickLowTracers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKickLowTracers_C::OnAssemble_KickLowTracers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KickLowTracers.KickLowTracers_C.OnAssemble_KickLowTracers");
		
		UKickLowTracers_C_OnAssemble_KickLowTracers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KickLowTracers.KickLowTracers_C.ExecuteUbergraph_KickLowTracers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKickLowTracers_C::ExecuteUbergraph_KickLowTracers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KickLowTracers.KickLowTracers_C.ExecuteUbergraph_KickLowTracers");
		
		UKickLowTracers_C_ExecuteUbergraph_KickLowTracers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKickLowTracers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKickLowTracers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KickLowTracers.KickLowTracers_C");
		return ptr;
	}

}


