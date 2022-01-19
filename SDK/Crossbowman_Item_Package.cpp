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
	 * 		Name   -> PredefindFunction UCrossbowman_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrossbowman_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Crossbowman_Item.Crossbowman_Item_C");
		return ptr;
	}

}


