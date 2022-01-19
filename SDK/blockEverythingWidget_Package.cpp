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
	 * 		Name   -> PredefindFunction UblockEverythingWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UblockEverythingWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass blockEverythingWidget.blockEverythingWidget_C");
		return ptr;
	}

}


