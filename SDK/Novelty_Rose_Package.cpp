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
	 * 		Name   -> PredefindFunction ANovelty_Rose_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANovelty_Rose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Novelty_Rose.Novelty_Rose_C");
		return ptr;
	}

}


