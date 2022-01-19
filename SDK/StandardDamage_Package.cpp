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
	 * 		Name   -> Function StandardDamage.StandardDamage_C.OnAssemble_StandardDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStandardDamage_C::OnAssemble_StandardDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandardDamage.StandardDamage_C.OnAssemble_StandardDamage");
		
		UStandardDamage_C_OnAssemble_StandardDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StandardDamage.StandardDamage_C.ExecuteUbergraph_StandardDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStandardDamage_C::ExecuteUbergraph_StandardDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandardDamage.StandardDamage_C.ExecuteUbergraph_StandardDamage");
		
		UStandardDamage_C_ExecuteUbergraph_StandardDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStandardDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardDamage.StandardDamage_C");
		return ptr;
	}

}


