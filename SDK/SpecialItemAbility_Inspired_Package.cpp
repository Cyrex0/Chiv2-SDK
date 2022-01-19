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
	 * 		Name   -> Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.SendHealAnalyticsEvent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpecialItemAbility_Inspired_C::SendHealAnalyticsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.SendHealAnalyticsEvent");
		
		USpecialItemAbility_Inspired_C_SendHealAnalyticsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.InspireCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemAbility_Inspired_C::InspireCharacter(class ATBLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.InspireCharacter");
		
		USpecialItemAbility_Inspired_C_InspireCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.OnUseItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpecialItemAbility_Inspired_C::OnUseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.OnUseItem");
		
		USpecialItemAbility_Inspired_C_OnUseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.ExecuteUbergraph_SpecialItemAbility_Inspired
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemAbility_Inspired_C::ExecuteUbergraph_SpecialItemAbility_Inspired(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.ExecuteUbergraph_SpecialItemAbility_Inspired");
		
		USpecialItemAbility_Inspired_C_ExecuteUbergraph_SpecialItemAbility_Inspired_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpecialItemAbility_Inspired_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecialItemAbility_Inspired_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C");
		return ptr;
	}

}


