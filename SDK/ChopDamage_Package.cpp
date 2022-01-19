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
	 * 		Name   -> Function ChopDamage.ChopDamage_C.OnAssemble_ChopDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChopDamage_C::OnAssemble_ChopDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChopDamage.ChopDamage_C.OnAssemble_ChopDamage");
		
		UChopDamage_C_OnAssemble_ChopDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChopDamage.ChopDamage_C.ExecuteUbergraph_ChopDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChopDamage_C::ExecuteUbergraph_ChopDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChopDamage.ChopDamage_C.ExecuteUbergraph_ChopDamage");
		
		UChopDamage_C_ExecuteUbergraph_ChopDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UChopDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChopDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChopDamage.ChopDamage_C");
		return ptr;
	}

}


