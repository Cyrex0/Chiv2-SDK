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
	 * 		Name   -> PredefindFunction UKillXAsClassWorkerBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillXAsClassWorkerBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KillXAsClassWorkerBP.KillXAsClassWorkerBP_C");
		return ptr;
	}

}


