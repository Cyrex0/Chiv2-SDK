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
	 * 		Name   -> PredefindFunction AAura_HorseCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAura_HorseCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Aura_HorseCharge.Aura_HorseCharge_C");
		return ptr;
	}

}


