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
	 * 		Name   -> Function InitiativeAttack.InitiativeAttack_C.OnAssemble_InitiativeAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInitiativeAttack_C::OnAssemble_InitiativeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitiativeAttack.InitiativeAttack_C.OnAssemble_InitiativeAttack");
		
		UInitiativeAttack_C_OnAssemble_InitiativeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function InitiativeAttack.InitiativeAttack_C.ExecuteUbergraph_InitiativeAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInitiativeAttack_C::ExecuteUbergraph_InitiativeAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitiativeAttack.InitiativeAttack_C.ExecuteUbergraph_InitiativeAttack");
		
		UInitiativeAttack_C_ExecuteUbergraph_InitiativeAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInitiativeAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInitiativeAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InitiativeAttack.InitiativeAttack_C");
		return ptr;
	}

}


