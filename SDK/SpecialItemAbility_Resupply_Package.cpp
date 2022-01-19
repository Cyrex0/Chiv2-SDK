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
	 * 		Name   -> Function SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C.OnUseItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpecialItemAbility_Resupply_C::OnUseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C.OnUseItem");
		
		USpecialItemAbility_Resupply_C_OnUseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C.ExecuteUbergraph_SpecialItemAbility_Resupply
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemAbility_Resupply_C::ExecuteUbergraph_SpecialItemAbility_Resupply(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C.ExecuteUbergraph_SpecialItemAbility_Resupply");
		
		USpecialItemAbility_Resupply_C_ExecuteUbergraph_SpecialItemAbility_Resupply_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpecialItemAbility_Resupply_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecialItemAbility_Resupply_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C");
		return ptr;
	}

}


