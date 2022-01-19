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
	 * 		Name   -> Function CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C.On Fade Out Started
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicFadeOutListenerInterface_C::On_Fade_Out_Started()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C.On Fade Out Started");
		
		UCinematicFadeOutListenerInterface_C_On_Fade_Out_Started_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C.On Fade Out Finished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicFadeOutListenerInterface_C::On_Fade_Out_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C.On Fade Out Finished");
		
		UCinematicFadeOutListenerInterface_C_On_Fade_Out_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCinematicFadeOutListenerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicFadeOutListenerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicFadeOutListenerInterface.CinematicFadeOutListenerInterface_C");
		return ptr;
	}

}


