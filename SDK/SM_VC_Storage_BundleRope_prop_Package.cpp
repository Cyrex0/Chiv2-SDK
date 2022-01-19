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
	 * 		Name   -> PredefindFunction ASM_VC_Storage_BundleRope_prop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_VC_Storage_BundleRope_prop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_VC_Storage_BundleRope_prop.SM_VC_Storage_BundleRope_prop_C");
		return ptr;
	}

}


