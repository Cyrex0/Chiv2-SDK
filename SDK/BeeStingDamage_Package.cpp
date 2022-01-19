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
	 * 		Name   -> Function BeeStingDamage.BeeStingDamage_C.OnAssemble_BeeStingDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBeeStingDamage_C::OnAssemble_BeeStingDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeStingDamage.BeeStingDamage_C.OnAssemble_BeeStingDamage");
		
		UBeeStingDamage_C_OnAssemble_BeeStingDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BeeStingDamage.BeeStingDamage_C.ExecuteUbergraph_BeeStingDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBeeStingDamage_C::ExecuteUbergraph_BeeStingDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeStingDamage.BeeStingDamage_C.ExecuteUbergraph_BeeStingDamage");
		
		UBeeStingDamage_C_ExecuteUbergraph_BeeStingDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBeeStingDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeeStingDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BeeStingDamage.BeeStingDamage_C");
		return ptr;
	}

}


