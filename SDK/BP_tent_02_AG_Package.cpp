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
	 * 		Name   -> PredefindFunction ABP_tent_02_AG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_tent_02_AG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_tent_02_AG.BP_tent_02_AG_C");
		return ptr;
	}

}


