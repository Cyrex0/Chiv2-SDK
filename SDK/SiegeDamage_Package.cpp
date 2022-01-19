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
	 * 		Name   -> Function SiegeDamage.SiegeDamage_C.OnAssemble_SiegeDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeDamage_C::OnAssemble_SiegeDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeDamage.SiegeDamage_C.OnAssemble_SiegeDamage");
		
		USiegeDamage_C_OnAssemble_SiegeDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeDamage.SiegeDamage_C.ExecuteUbergraph_SiegeDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeDamage_C::ExecuteUbergraph_SiegeDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeDamage.SiegeDamage_C.ExecuteUbergraph_SiegeDamage");
		
		USiegeDamage_C_ExecuteUbergraph_SiegeDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USiegeDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USiegeDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SiegeDamage.SiegeDamage_C");
		return ptr;
	}

}


