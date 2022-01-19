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
	 * 		Name   -> PredefindFunction UBC_CounterWithShove_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBC_CounterWithShove_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BC_CounterWithShove.BC_CounterWithShove_C");
		return ptr;
	}

}


