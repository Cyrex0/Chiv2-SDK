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
	 * 		Name   -> PredefindFunction AAura_Spear_Charge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAura_Spear_Charge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Aura_Spear_Charge.Aura_Spear_Charge_C");
		return ptr;
	}

}


