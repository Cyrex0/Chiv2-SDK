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
	 * 		Name   -> PredefindFunction UPlayFabAuthenticationContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayFabAuthenticationContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PlayFabCpp.PlayFabAuthenticationContext");
		return ptr;
	}

}


