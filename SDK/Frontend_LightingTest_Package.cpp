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
	 * 		Name   -> PredefindFunction AFrontend_LightingTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontend_LightingTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_LightingTest.Frontend_LightingTest_C");
		return ptr;
	}

}


