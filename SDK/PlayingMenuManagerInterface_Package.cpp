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
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManagerInterface.PlayingMenuManagerInterface_C.Show Loadout First Time Only
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManagerInterface_C::Show_Loadout_First_Time_Only()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManagerInterface.PlayingMenuManagerInterface_C.Show Loadout First Time Only");
		
		UPlayingMenuManagerInterface_C_Show_Loadout_First_Time_Only_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManagerInterface.PlayingMenuManagerInterface_C.Open Loadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManagerInterface_C::Open_Loadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManagerInterface.PlayingMenuManagerInterface_C.Open Loadout");
		
		UPlayingMenuManagerInterface_C_Open_Loadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayingMenuManagerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayingMenuManagerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayingMenuManagerInterface.PlayingMenuManagerInterface_C");
		return ptr;
	}

}


