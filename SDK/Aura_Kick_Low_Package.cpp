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
	 * 		Name   -> PredefindFunction AAura_Kick_Low_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAura_Kick_Low_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Aura_Kick_Low.Aura_Kick_Low_C");
		return ptr;
	}

}


