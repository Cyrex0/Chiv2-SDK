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
	 * 		Name   -> PredefindFunction ABPA_prop_noCollision_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_prop_noCollision_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPA_prop_noCollision.BPA_prop_noCollision_C");
		return ptr;
	}

}


