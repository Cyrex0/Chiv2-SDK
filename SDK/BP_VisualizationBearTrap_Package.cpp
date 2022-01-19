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
	 * 		Name   -> PredefindFunction ABP_VisualizationBearTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VisualizationBearTrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VisualizationBearTrap.BP_VisualizationBearTrap_C");
		return ptr;
	}

}


