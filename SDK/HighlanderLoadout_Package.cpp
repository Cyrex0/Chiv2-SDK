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
	 * 		Name   -> PredefindFunction UHighlanderLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlanderLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HighlanderLoadout.HighlanderLoadout_C");
		return ptr;
	}

}


