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
	 * 		Name   -> PredefindFunction UDeathCamMod_1P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathCamMod_1P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeathCamMod_1P.DeathCamMod_1P_C");
		return ptr;
	}

}


