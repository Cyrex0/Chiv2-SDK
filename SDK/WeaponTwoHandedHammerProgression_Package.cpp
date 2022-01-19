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
	 * 		Name   -> Function WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C.OnAssemble_WeaponTwoHandedHammerProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponTwoHandedHammerProgression_C::OnAssemble_WeaponTwoHandedHammerProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C.OnAssemble_WeaponTwoHandedHammerProgression");
		
		UWeaponTwoHandedHammerProgression_C_OnAssemble_WeaponTwoHandedHammerProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C.ExecuteUbergraph_WeaponTwoHandedHammerProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponTwoHandedHammerProgression_C::ExecuteUbergraph_WeaponTwoHandedHammerProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C.ExecuteUbergraph_WeaponTwoHandedHammerProgression");
		
		UWeaponTwoHandedHammerProgression_C_ExecuteUbergraph_WeaponTwoHandedHammerProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponTwoHandedHammerProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponTwoHandedHammerProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponTwoHandedHammerProgression.WeaponTwoHandedHammerProgression_C");
		return ptr;
	}

}


