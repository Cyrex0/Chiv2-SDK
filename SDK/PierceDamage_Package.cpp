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
	 * 		Name   -> Function PierceDamage.PierceDamage_C.OnAssemble_PierceDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPierceDamage_C::OnAssemble_PierceDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PierceDamage.PierceDamage_C.OnAssemble_PierceDamage");
		
		UPierceDamage_C_OnAssemble_PierceDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PierceDamage.PierceDamage_C.ExecuteUbergraph_PierceDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPierceDamage_C::ExecuteUbergraph_PierceDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PierceDamage.PierceDamage_C.ExecuteUbergraph_PierceDamage");
		
		UPierceDamage_C_ExecuteUbergraph_PierceDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPierceDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPierceDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PierceDamage.PierceDamage_C");
		return ptr;
	}

}


