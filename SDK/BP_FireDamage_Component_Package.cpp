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
	 * 		Name   -> PredefindFunction UBP_FireDamage_Component_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FireDamage_Component_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireDamage_Component.BP_FireDamage_Component_C");
		return ptr;
	}

}


