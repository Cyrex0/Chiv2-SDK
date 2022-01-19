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
	 * 		Name   -> PredefindFunction UBS_Combat_Melee_Normal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBS_Combat_Melee_Normal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BS_Combat_Melee_Normal.BS_Combat_Melee_Normal_C");
		return ptr;
	}

}


