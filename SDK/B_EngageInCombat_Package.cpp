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
	 * 		Name   -> PredefindFunction UB_EngageInCombat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UB_EngageInCombat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_EngageInCombat.B_EngageInCombat_C");
		return ptr;
	}

}


