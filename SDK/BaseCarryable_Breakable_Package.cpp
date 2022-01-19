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
	 * 		Name   -> Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.DamageCarryable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EInventoryItemDamagedState                     DamageState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Breakable_C::DamageCarryable(TBL_EInventoryItemDamagedState DamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.DamageCarryable");
		
		ABaseCarryable_Breakable_C_DamageCarryable_Params params {};
		params.DamageState = DamageState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.PlayDamageParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseCarryable_Breakable_C::PlayDamageParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.PlayDamageParticles");
		
		ABaseCarryable_Breakable_C_PlayDamageParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.ExecuteUbergraph_BaseCarryable_Breakable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Breakable_C::ExecuteUbergraph_BaseCarryable_Breakable(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.ExecuteUbergraph_BaseCarryable_Breakable");
		
		ABaseCarryable_Breakable_C_ExecuteUbergraph_BaseCarryable_Breakable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABaseCarryable_Breakable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseCarryable_Breakable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseCarryable_Breakable.BaseCarryable_Breakable_C");
		return ptr;
	}

}


