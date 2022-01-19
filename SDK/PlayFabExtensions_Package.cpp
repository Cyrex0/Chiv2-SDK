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
	 * 		Name   -> PredefindFunction UPlayfabExtensionsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayfabExtensionsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PlayFabExtensions.PlayfabExtensionsSettings");
		return ptr;
	}

}


