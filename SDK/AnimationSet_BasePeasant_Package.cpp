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
	 * 		Name   -> PredefindFunction UAnimationSet_BasePeasant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSet_BasePeasant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimationSet_BasePeasant.AnimationSet_BasePeasant_C");
		return ptr;
	}

}


