﻿/**
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
	 * 		Name   -> PredefindFunction UCrusader_Primary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrusader_Primary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Crusader_Primary.Crusader_Primary_C");
		return ptr;
	}

}


