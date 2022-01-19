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
	 * 		Name   -> PredefindFunction UGauntletTestController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestController");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGauntletTestControllerBootTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestControllerBootTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerBootTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGauntletTestControllerErrorTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestControllerErrorTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerErrorTest");
		return ptr;
	}

}


