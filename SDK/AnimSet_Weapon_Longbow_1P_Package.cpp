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
	 * 		Name   -> PredefindFunction UAnimSet_Weapon_Longbow_1P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSet_Weapon_Longbow_1P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimSet_Weapon_Longbow_1P.AnimSet_Weapon_Longbow_1P_C");
		return ptr;
	}

}


