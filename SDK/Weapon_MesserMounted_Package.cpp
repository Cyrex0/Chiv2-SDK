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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWeapon_MesserMounted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_MesserMounted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_MesserMounted.Weapon_MesserMounted_C");
		return ptr;
	}

}


