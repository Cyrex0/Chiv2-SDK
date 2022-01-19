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
	 * 		Name   -> Function Weapon_Rapier.Weapon_Rapier_C.GetSpecialAttackWindupSwitchOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SwitchState                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AWeapon_Rapier_C::GetSpecialAttackWindupSwitchOverride(class FString* SwitchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Rapier.Weapon_Rapier_C.GetSpecialAttackWindupSwitchOverride");
		
		AWeapon_Rapier_C_GetSpecialAttackWindupSwitchOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SwitchState != nullptr)
			*SwitchState = params.SwitchState;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWeapon_Rapier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_Rapier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Rapier.Weapon_Rapier_C");
		return ptr;
	}

}


