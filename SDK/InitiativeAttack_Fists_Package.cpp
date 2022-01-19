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
	 * 		Name   -> Function InitiativeAttack_Fists.InitiativeAttack_Fists_C.OnAssemble_InitiativeAttack_Fists
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInitiativeAttack_Fists_C::OnAssemble_InitiativeAttack_Fists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitiativeAttack_Fists.InitiativeAttack_Fists_C.OnAssemble_InitiativeAttack_Fists");
		
		UInitiativeAttack_Fists_C_OnAssemble_InitiativeAttack_Fists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InitiativeAttack_Fists.InitiativeAttack_Fists_C.ExecuteUbergraph_InitiativeAttack_Fists
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInitiativeAttack_Fists_C::ExecuteUbergraph_InitiativeAttack_Fists(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitiativeAttack_Fists.InitiativeAttack_Fists_C.ExecuteUbergraph_InitiativeAttack_Fists");
		
		UInitiativeAttack_Fists_C_ExecuteUbergraph_InitiativeAttack_Fists_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInitiativeAttack_Fists_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInitiativeAttack_Fists_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InitiativeAttack_Fists.InitiativeAttack_Fists_C");
		return ptr;
	}

}


