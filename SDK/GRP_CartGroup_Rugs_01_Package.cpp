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
	 * 		Name   -> PredefindFunction AGRP_CartGroup_Rugs_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGRP_CartGroup_Rugs_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GRP_CartGroup_Rugs_01.GRP_CartGroup_Rugs_01_C");
		return ptr;
	}

}


