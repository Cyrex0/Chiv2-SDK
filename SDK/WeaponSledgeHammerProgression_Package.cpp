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
	 * 		Name   -> Function WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C.OnAssemble_WeaponSledgeHammerProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponSledgeHammerProgression_C::OnAssemble_WeaponSledgeHammerProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C.OnAssemble_WeaponSledgeHammerProgression");
		
		UWeaponSledgeHammerProgression_C_OnAssemble_WeaponSledgeHammerProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C.ExecuteUbergraph_WeaponSledgeHammerProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponSledgeHammerProgression_C::ExecuteUbergraph_WeaponSledgeHammerProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C.ExecuteUbergraph_WeaponSledgeHammerProgression");
		
		UWeaponSledgeHammerProgression_C_ExecuteUbergraph_WeaponSledgeHammerProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponSledgeHammerProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponSledgeHammerProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponSledgeHammerProgression.WeaponSledgeHammerProgression_C");
		return ptr;
	}

}


