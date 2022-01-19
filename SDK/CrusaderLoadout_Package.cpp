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
	 * 		Name   -> PredefindFunction UCrusaderLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrusaderLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrusaderLoadout.CrusaderLoadout_C");
		return ptr;
	}

}


