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
	 * 		Name   -> Function HorseDamage.HorseDamage_C.OnAssemble_HorseDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseDamage_C::OnAssemble_HorseDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseDamage.HorseDamage_C.OnAssemble_HorseDamage");
		
		UHorseDamage_C_OnAssemble_HorseDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseDamage.HorseDamage_C.ExecuteUbergraph_HorseDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseDamage_C::ExecuteUbergraph_HorseDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseDamage.HorseDamage_C.ExecuteUbergraph_HorseDamage");
		
		UHorseDamage_C_ExecuteUbergraph_HorseDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseDamage.HorseDamage_C");
		return ptr;
	}

}


