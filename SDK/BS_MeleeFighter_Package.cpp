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
	 * 		Name   -> PredefindFunction UBS_MeleeFighter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBS_MeleeFighter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BS_MeleeFighter.BS_MeleeFighter_C");
		return ptr;
	}

}


