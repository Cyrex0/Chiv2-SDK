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
	 * 		Name   -> PredefindFunction UBC_DodgeBackFromShove_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBC_DodgeBackFromShove_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BC_DodgeBackFromShove.BC_DodgeBackFromShove_C");
		return ptr;
	}

}


