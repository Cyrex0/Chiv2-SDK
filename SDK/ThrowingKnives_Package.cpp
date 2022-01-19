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
	 * 		Name   -> PredefindFunction UThrowingKnives_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrowingKnives_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ThrowingKnives.ThrowingKnives_C");
		return ptr;
	}

}


