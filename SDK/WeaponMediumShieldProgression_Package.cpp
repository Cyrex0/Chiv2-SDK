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
	 * 		Name   -> Function WeaponMediumShieldProgression.WeaponMediumShieldProgression_C.OnAssemble_WeaponMediumShieldProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponMediumShieldProgression_C::OnAssemble_WeaponMediumShieldProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponMediumShieldProgression.WeaponMediumShieldProgression_C.OnAssemble_WeaponMediumShieldProgression");
		
		UWeaponMediumShieldProgression_C_OnAssemble_WeaponMediumShieldProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponMediumShieldProgression.WeaponMediumShieldProgression_C.ExecuteUbergraph_WeaponMediumShieldProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponMediumShieldProgression_C::ExecuteUbergraph_WeaponMediumShieldProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponMediumShieldProgression.WeaponMediumShieldProgression_C.ExecuteUbergraph_WeaponMediumShieldProgression");
		
		UWeaponMediumShieldProgression_C_ExecuteUbergraph_WeaponMediumShieldProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponMediumShieldProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponMediumShieldProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponMediumShieldProgression.WeaponMediumShieldProgression_C");
		return ptr;
	}

}


