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
	 * 		Name   -> Function BluntDamage.BluntDamage_C.OnAssemble_BluntDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBluntDamage_C::OnAssemble_BluntDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BluntDamage.BluntDamage_C.OnAssemble_BluntDamage");
		
		UBluntDamage_C_OnAssemble_BluntDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BluntDamage.BluntDamage_C.ExecuteUbergraph_BluntDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBluntDamage_C::ExecuteUbergraph_BluntDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BluntDamage.BluntDamage_C.ExecuteUbergraph_BluntDamage");
		
		UBluntDamage_C_ExecuteUbergraph_BluntDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBluntDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBluntDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BluntDamage.BluntDamage_C");
		return ptr;
	}

}


