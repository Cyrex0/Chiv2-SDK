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
	 * 		Name   -> PredefindFunction UKnightLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnightLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KnightLoadout.KnightLoadout_C");
		return ptr;
	}

}


