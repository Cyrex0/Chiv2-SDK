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
	 * 		Name   -> PredefindFunction UCinematicAnimRemappings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicAnimRemappings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicAnimRemappings.CinematicAnimRemappings_C");
		return ptr;
	}

}


