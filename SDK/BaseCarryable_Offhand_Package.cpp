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
	 * 		Name   -> PredefindFunction ABaseCarryable_Offhand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseCarryable_Offhand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseCarryable_Offhand.BaseCarryable_Offhand_C");
		return ptr;
	}

}


