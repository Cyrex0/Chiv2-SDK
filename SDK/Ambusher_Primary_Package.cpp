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
	 * 		Name   -> PredefindFunction UAmbusher_Primary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbusher_Primary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ambusher_Primary.Ambusher_Primary_C");
		return ptr;
	}

}


