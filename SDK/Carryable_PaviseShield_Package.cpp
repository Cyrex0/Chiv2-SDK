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
	 * 		Name   -> Function Carryable_PaviseShield.Carryable_PaviseShield_C.OnVisualizationActorSpawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACarryable_PaviseShield_C::OnVisualizationActorSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_PaviseShield.Carryable_PaviseShield_C.OnVisualizationActorSpawned");
		
		ACarryable_PaviseShield_C_OnVisualizationActorSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_PaviseShield.Carryable_PaviseShield_C.ExecuteUbergraph_Carryable_PaviseShield
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACarryable_PaviseShield_C::ExecuteUbergraph_Carryable_PaviseShield(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_PaviseShield.Carryable_PaviseShield_C.ExecuteUbergraph_Carryable_PaviseShield");
		
		ACarryable_PaviseShield_C_ExecuteUbergraph_Carryable_PaviseShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACarryable_PaviseShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarryable_PaviseShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Carryable_PaviseShield.Carryable_PaviseShield_C");
		return ptr;
	}

}


