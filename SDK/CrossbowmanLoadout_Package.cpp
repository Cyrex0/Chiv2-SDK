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
	 * 		Name   -> PredefindFunction UCrossbowmanLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrossbowmanLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrossbowmanLoadout.CrossbowmanLoadout_C");
		return ptr;
	}

}


