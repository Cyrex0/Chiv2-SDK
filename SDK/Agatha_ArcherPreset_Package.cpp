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
	 * 		Name   -> PredefindFunction UAgatha_ArcherPreset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgatha_ArcherPreset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Agatha_ArcherPreset.Agatha_ArcherPreset_C");
		return ptr;
	}

}


