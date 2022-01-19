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
	 * 		Name   -> Function CharacterCombatStates.CharacterCombatStates_C.OnAssemble_CharacterCombatStates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCharacterCombatStates_C::OnAssemble_CharacterCombatStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCombatStates.CharacterCombatStates_C.OnAssemble_CharacterCombatStates");
		
		UCharacterCombatStates_C_OnAssemble_CharacterCombatStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CharacterCombatStates.CharacterCombatStates_C.ExecuteUbergraph_CharacterCombatStates
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterCombatStates_C::ExecuteUbergraph_CharacterCombatStates(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCombatStates.CharacterCombatStates_C.ExecuteUbergraph_CharacterCombatStates");
		
		UCharacterCombatStates_C_ExecuteUbergraph_CharacterCombatStates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCharacterCombatStates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterCombatStates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CharacterCombatStates.CharacterCombatStates_C");
		return ptr;
	}

}


