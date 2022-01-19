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
	 * 		Name   -> PredefindFunction UMason_KnightPreset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMason_KnightPreset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mason_KnightPreset.Mason_KnightPreset_C");
		return ptr;
	}

}


