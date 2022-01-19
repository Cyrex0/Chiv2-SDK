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
	 * 		Name   -> PredefindFunction UAnimationSet_BaseCustom_2HS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSet_BaseCustom_2HS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimationSet_BaseCustom_2HS.AnimationSet_BaseCustom_2HS_C");
		return ptr;
	}

}


