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
	 * 		Name   -> PredefindFunction UFieldEngineer_Secondary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldEngineer_Secondary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FieldEngineer_Secondary.FieldEngineer_Secondary_C");
		return ptr;
	}

}


