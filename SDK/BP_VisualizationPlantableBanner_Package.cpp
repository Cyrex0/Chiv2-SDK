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
	 * 		Name   -> PredefindFunction ABP_VisualizationPlantableBanner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VisualizationPlantableBanner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VisualizationPlantableBanner.BP_VisualizationPlantableBanner_C");
		return ptr;
	}

}


