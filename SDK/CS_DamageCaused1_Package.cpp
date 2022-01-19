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
	 * 		Name   -> PredefindFunction UCS_DamageCaused1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_DamageCaused1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_DamageCaused1.CS_DamageCaused1_C");
		return ptr;
	}

}


