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
	 * 		Name   -> PredefindFunction ABP_SallyDoor_01_tint1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SallyDoor_01_tint1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SallyDoor_01_tint1.BP_SallyDoor_01_tint1_C");
		return ptr;
	}

}


