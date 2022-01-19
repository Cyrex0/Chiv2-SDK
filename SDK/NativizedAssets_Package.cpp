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
	 * 		Name   -> PredefindFunction U__Delegates__ABaseCharacter_C__pf4110416193.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U__Delegates__ABaseCharacter_C__pf4110416193::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NativizedAssets.__Delegates__ABaseCharacter_C__pf4110416193");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction U__Delegates__ABaseInventoryItem_C__pf1227878553.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U__Delegates__ABaseInventoryItem_C__pf1227878553::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NativizedAssets.__Delegates__ABaseInventoryItem_C__pf1227878553");
		return ptr;
	}

}


