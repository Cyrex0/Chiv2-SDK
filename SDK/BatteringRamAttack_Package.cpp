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
	 * 		Name   -> Function BatteringRamAttack.BatteringRamAttack_C.OnAssemble_BatteringRamAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBatteringRamAttack_C::OnAssemble_BatteringRamAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BatteringRamAttack.BatteringRamAttack_C.OnAssemble_BatteringRamAttack");
		
		UBatteringRamAttack_C_OnAssemble_BatteringRamAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BatteringRamAttack.BatteringRamAttack_C.ExecuteUbergraph_BatteringRamAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBatteringRamAttack_C::ExecuteUbergraph_BatteringRamAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BatteringRamAttack.BatteringRamAttack_C.ExecuteUbergraph_BatteringRamAttack");
		
		UBatteringRamAttack_C_ExecuteUbergraph_BatteringRamAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBatteringRamAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBatteringRamAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BatteringRamAttack.BatteringRamAttack_C");
		return ptr;
	}

}


