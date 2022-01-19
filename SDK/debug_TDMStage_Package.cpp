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
	 * 		Name   -> PredefindFunction Udebug_TDMStage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Udebug_TDMStage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass debug_TDMStage.debug_TDMStage_C");
		return ptr;
	}

}


