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
	 * 		Name   -> Function WeaponBattleAxeProgression.WeaponBattleAxeProgression_C.OnAssemble_WeaponBattleAxeProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponBattleAxeProgression_C::OnAssemble_WeaponBattleAxeProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBattleAxeProgression.WeaponBattleAxeProgression_C.OnAssemble_WeaponBattleAxeProgression");
		
		UWeaponBattleAxeProgression_C_OnAssemble_WeaponBattleAxeProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponBattleAxeProgression.WeaponBattleAxeProgression_C.ExecuteUbergraph_WeaponBattleAxeProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponBattleAxeProgression_C::ExecuteUbergraph_WeaponBattleAxeProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBattleAxeProgression.WeaponBattleAxeProgression_C.ExecuteUbergraph_WeaponBattleAxeProgression");
		
		UWeaponBattleAxeProgression_C_ExecuteUbergraph_WeaponBattleAxeProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponBattleAxeProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponBattleAxeProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponBattleAxeProgression.WeaponBattleAxeProgression_C");
		return ptr;
	}

}


