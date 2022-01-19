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
	 * 		Name   -> Function Weapon_BaseTwoHanded.Weapon_BaseTwoHanded_C.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AWeapon_BaseTwoHanded_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_BaseTwoHanded.Weapon_BaseTwoHanded_C.OnInitialize");
		
		AWeapon_BaseTwoHanded_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Weapon_BaseTwoHanded.Weapon_BaseTwoHanded_C.ExecuteUbergraph_Weapon_BaseTwoHanded
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_BaseTwoHanded_C::ExecuteUbergraph_Weapon_BaseTwoHanded(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_BaseTwoHanded.Weapon_BaseTwoHanded_C.ExecuteUbergraph_Weapon_BaseTwoHanded");
		
		AWeapon_BaseTwoHanded_C_ExecuteUbergraph_Weapon_BaseTwoHanded_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWeapon_BaseTwoHanded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_BaseTwoHanded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_BaseTwoHanded.Weapon_BaseTwoHanded_C");
		return ptr;
	}

}


