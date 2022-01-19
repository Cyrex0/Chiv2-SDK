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
	 * 		Name   -> PredefindFunction UInfluence_CombinedCrowding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInfluence_CombinedCrowding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Influence_CombinedCrowding.Influence_CombinedCrowding_C");
		return ptr;
	}

}


