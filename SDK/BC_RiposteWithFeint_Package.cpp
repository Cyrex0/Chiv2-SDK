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
	 * 		Name   -> PredefindFunction UBC_RiposteWithFeint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBC_RiposteWithFeint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BC_RiposteWithFeint.BC_RiposteWithFeint_C");
		return ptr;
	}

}


