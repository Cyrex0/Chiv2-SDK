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
	 * 		Name   -> PredefindFunction UB_CloseRangeEscapeHeat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UB_CloseRangeEscapeHeat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_CloseRangeEscapeHeat.B_CloseRangeEscapeHeat_C");
		return ptr;
	}

}


