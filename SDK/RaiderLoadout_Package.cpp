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
	 * 		Name   -> PredefindFunction URaiderLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaiderLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RaiderLoadout.RaiderLoadout_C");
		return ptr;
	}

}


