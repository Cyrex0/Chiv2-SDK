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
	 * 		Name   -> PredefindFunction UFFA_FootmanPreset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFFA_FootmanPreset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FFA_FootmanPreset.FFA_FootmanPreset_C");
		return ptr;
	}

}


