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
	 * 		Name   -> PredefindFunction USpecialItemAbility_Recharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecialItemAbility_Recharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpecialItemAbility_Recharge.SpecialItemAbility_Recharge_C");
		return ptr;
	}

}


