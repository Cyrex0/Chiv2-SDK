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
	 * 		Name   -> PredefindFunction AWeapon_BattleAxe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_BattleAxe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_BattleAxe.Weapon_BattleAxe_C");
		return ptr;
	}

}


