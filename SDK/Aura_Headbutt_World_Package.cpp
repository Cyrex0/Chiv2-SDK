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
	 * 		Name   -> PredefindFunction AAura_Headbutt_World_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAura_Headbutt_World_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Aura_Headbutt_World.Aura_Headbutt_World_C");
		return ptr;
	}

}


