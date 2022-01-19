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
	 * 		Name   -> PredefindFunction UTG_InsideCombatZone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTG_InsideCombatZone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TG_InsideCombatZone.TG_InsideCombatZone_C");
		return ptr;
	}

}


