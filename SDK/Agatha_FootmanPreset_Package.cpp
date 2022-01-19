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
	 * 		Name   -> PredefindFunction UAgatha_FootmanPreset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgatha_FootmanPreset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Agatha_FootmanPreset.Agatha_FootmanPreset_C");
		return ptr;
	}

}


