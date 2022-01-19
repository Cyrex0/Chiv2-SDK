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
	 * 		Name   -> PredefindFunction URevivalWorker_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevivalWorker_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RevivalWorker_BP.RevivalWorker_BP_C");
		return ptr;
	}

}


