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
	 * 		Name   -> PredefindFunction UAnimSet_BaseChar_1hMace_1p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSet_BaseChar_1hMace_1p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimSet_BaseChar_1hMace_1p.AnimSet_BaseChar_1hMace_1p_C");
		return ptr;
	}

}


