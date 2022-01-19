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
	 * 		Name   -> PredefindFunction UKillXSiegeWeaponWorkerBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillXSiegeWeaponWorkerBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KillXSiegeWeaponWorkerBP.KillXSiegeWeaponWorkerBP_C");
		return ptr;
	}

}


