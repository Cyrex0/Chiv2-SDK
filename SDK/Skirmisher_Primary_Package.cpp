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
	 * 		Name   -> PredefindFunction USkirmisher_Primary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkirmisher_Primary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Skirmisher_Primary.Skirmisher_Primary_C");
		return ptr;
	}

}


