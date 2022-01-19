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
	 * 		Name   -> PredefindFunction UB_RevivePlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UB_RevivePlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_RevivePlayer.B_RevivePlayer_C");
		return ptr;
	}

}


