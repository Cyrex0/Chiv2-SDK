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
	 * 		Name   -> PredefindFunction AActor_MainMenu_CU3_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActor_MainMenu_CU3_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Actor_MainMenu_CU3_01.Actor_MainMenu_CU3_01_C");
		return ptr;
	}

}


