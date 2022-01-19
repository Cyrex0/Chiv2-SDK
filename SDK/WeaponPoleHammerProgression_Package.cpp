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
	 * 		Name   -> Function WeaponPoleHammerProgression.WeaponPoleHammerProgression_C.OnAssemble_WeaponPoleHammerProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponPoleHammerProgression_C::OnAssemble_WeaponPoleHammerProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponPoleHammerProgression.WeaponPoleHammerProgression_C.OnAssemble_WeaponPoleHammerProgression");
		
		UWeaponPoleHammerProgression_C_OnAssemble_WeaponPoleHammerProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponPoleHammerProgression.WeaponPoleHammerProgression_C.ExecuteUbergraph_WeaponPoleHammerProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponPoleHammerProgression_C::ExecuteUbergraph_WeaponPoleHammerProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponPoleHammerProgression.WeaponPoleHammerProgression_C.ExecuteUbergraph_WeaponPoleHammerProgression");
		
		UWeaponPoleHammerProgression_C_ExecuteUbergraph_WeaponPoleHammerProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponPoleHammerProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponPoleHammerProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponPoleHammerProgression.WeaponPoleHammerProgression_C");
		return ptr;
	}

}


