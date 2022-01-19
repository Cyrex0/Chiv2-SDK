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
	 * 		Name   -> PredefindFunction UBaseSpecialItemAbility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseSpecialItemAbility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseSpecialItemAbility.BaseSpecialItemAbility_C");
		return ptr;
	}

}


