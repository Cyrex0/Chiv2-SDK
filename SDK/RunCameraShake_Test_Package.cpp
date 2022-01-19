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
	 * 		Name   -> PredefindFunction URunCameraShake_Test_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URunCameraShake_Test_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RunCameraShake_Test.RunCameraShake_Test_C");
		return ptr;
	}

}


