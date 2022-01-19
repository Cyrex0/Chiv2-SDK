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
	 * 		Name   -> Function Weapon_LanceMounted.Weapon_LanceMounted_C.OnMeleeSuccess
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               DamagedCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_LanceMounted_C::OnMeleeSuccess(class ATBLCharacter* DamagedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_LanceMounted.Weapon_LanceMounted_C.OnMeleeSuccess");
		
		AWeapon_LanceMounted_C_OnMeleeSuccess_Params params {};
		params.DamagedCharacter = DamagedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Weapon_LanceMounted.Weapon_LanceMounted_C.OnWasParried
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               ParryingCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_LanceMounted_C::OnWasParried(class ATBLCharacter* ParryingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_LanceMounted.Weapon_LanceMounted_C.OnWasParried");
		
		AWeapon_LanceMounted_C_OnWasParried_Params params {};
		params.ParryingCharacter = ParryingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Weapon_LanceMounted.Weapon_LanceMounted_C.ExecuteUbergraph_Weapon_LanceMounted
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_LanceMounted_C::ExecuteUbergraph_Weapon_LanceMounted(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_LanceMounted.Weapon_LanceMounted_C.ExecuteUbergraph_Weapon_LanceMounted");
		
		AWeapon_LanceMounted_C_ExecuteUbergraph_Weapon_LanceMounted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWeapon_LanceMounted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_LanceMounted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_LanceMounted.Weapon_LanceMounted_C");
		return ptr;
	}

}


