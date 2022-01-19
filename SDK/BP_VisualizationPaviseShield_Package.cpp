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
	 * 		Name   -> PredefindFunction ABP_VisualizationPaviseShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VisualizationPaviseShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VisualizationPaviseShield.BP_VisualizationPaviseShield_C");
		return ptr;
	}

}


