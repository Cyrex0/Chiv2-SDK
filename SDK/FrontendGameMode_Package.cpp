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
	 * 		Name   -> PredefindFunction AFrontendGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontendGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontendGameMode.FrontendGameMode_C");
		return ptr;
	}

}


