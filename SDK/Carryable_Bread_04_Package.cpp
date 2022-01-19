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
	 * 		Name   -> PredefindFunction ACarryable_Bread_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarryable_Bread_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Carryable_Bread_04.Carryable_Bread_04_C");
		return ptr;
	}

}


