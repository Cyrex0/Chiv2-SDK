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
	 * 		Name   -> PredefindFunction ACarryable_BallistaBolt_Mounted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarryable_BallistaBolt_Mounted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Carryable_BallistaBolt_Mounted.Carryable_BallistaBolt_Mounted_C");
		return ptr;
	}

}


