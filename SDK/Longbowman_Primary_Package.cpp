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
	 * 		Name   -> PredefindFunction ULongbowman_Primary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULongbowman_Primary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Longbowman_Primary.Longbowman_Primary_C");
		return ptr;
	}

}


