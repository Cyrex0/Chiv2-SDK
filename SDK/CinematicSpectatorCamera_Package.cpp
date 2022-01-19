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
	 * 		Name   -> PredefindFunction UCinematicSpectatorCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicSpectatorCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicSpectatorCamera.CinematicSpectatorCamera_C");
		return ptr;
	}

}


