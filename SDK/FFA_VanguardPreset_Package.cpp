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
	 * 		Name   -> PredefindFunction UFFA_VanguardPreset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFFA_VanguardPreset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FFA_VanguardPreset.FFA_VanguardPreset_C");
		return ptr;
	}

}


