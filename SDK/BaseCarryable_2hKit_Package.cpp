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
	 * 		Name   -> PredefindFunction ABaseCarryable_2hKit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseCarryable_2hKit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseCarryable_2hKit.BaseCarryable_2hKit_C");
		return ptr;
	}

}


