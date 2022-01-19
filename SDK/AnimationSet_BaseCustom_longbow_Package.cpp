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
	 * 		Name   -> PredefindFunction UAnimationSet_BaseCustom_longbow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSet_BaseCustom_longbow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimationSet_BaseCustom_longbow.AnimationSet_BaseCustom_longbow_C");
		return ptr;
	}

}


