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
	 * 		Name   -> PredefindFunction UCS_Generic_str2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_Generic_str2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_Generic_str2.CS_Generic_str2_C");
		return ptr;
	}

}


