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
	 * 		Name   -> PredefindFunction UFieldEngineerLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldEngineerLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FieldEngineerLoadout.FieldEngineerLoadout_C");
		return ptr;
	}

}


