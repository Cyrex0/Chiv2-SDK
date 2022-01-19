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
	 * 		Name   -> PredefindFunction UManAtArms_Shield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManAtArms_Shield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ManAtArms_Shield.ManAtArms_Shield_C");
		return ptr;
	}

}


