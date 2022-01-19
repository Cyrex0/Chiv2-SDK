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
	 * 		Name   -> PredefindFunction UVanguard_Primary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVanguard_Primary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Vanguard_Primary.Vanguard_Primary_C");
		return ptr;
	}

}


