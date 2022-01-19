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
	 * 		Name   -> PredefindFunction UCS_DamageTaken_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_DamageTaken_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_DamageTaken.CS_DamageTaken_C");
		return ptr;
	}

}


