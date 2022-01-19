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
	 * 		Name   -> PredefindFunction UDefaultCharacterCustomizationsAll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultCharacterCustomizationsAll_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultCharacterCustomizationsAll.DefaultCharacterCustomizationsAll_C");
		return ptr;
	}

}


