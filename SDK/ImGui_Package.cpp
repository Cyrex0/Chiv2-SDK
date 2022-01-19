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
	 * 		Name   -> PredefindFunction UImGuiInputHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImGuiInputHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImGui.ImGuiInputHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImGuiSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImGuiSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImGui.ImGuiSettings");
		return ptr;
	}

}


