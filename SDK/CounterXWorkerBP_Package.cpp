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
	 * 		Name   -> PredefindFunction UCounterXWorkerBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCounterXWorkerBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CounterXWorkerBP.CounterXWorkerBP_C");
		return ptr;
	}

}


