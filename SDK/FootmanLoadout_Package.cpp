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
	 * 		Name   -> PredefindFunction UFootmanLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootmanLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FootmanLoadout.FootmanLoadout_C");
		return ptr;
	}

}


