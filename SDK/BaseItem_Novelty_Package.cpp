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
	 * 		Name   -> PredefindFunction ABaseItem_Novelty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseItem_Novelty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseItem_Novelty.BaseItem_Novelty_C");
		return ptr;
	}

}


