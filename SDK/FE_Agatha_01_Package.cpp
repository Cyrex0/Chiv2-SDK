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
	 * 		Name   -> PredefindFunction AFE_Agatha_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFE_Agatha_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FE_Agatha_01.FE_Agatha_01_C");
		return ptr;
	}

}


