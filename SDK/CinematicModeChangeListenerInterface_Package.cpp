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
	 * 		Name   -> Function CinematicModeChangeListenerInterface.CinematicModeChangeListenerInterface_C.Cinematic Mode Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicModeChangeListenerInterface_C::Cinematic_Mode_Changed(CinematicBarsMode_ECinematicBarsMode New_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicModeChangeListenerInterface.CinematicModeChangeListenerInterface_C.Cinematic Mode Changed");
		
		UCinematicModeChangeListenerInterface_C_Cinematic_Mode_Changed_Params params {};
		params.New_mode = New_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCinematicModeChangeListenerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicModeChangeListenerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicModeChangeListenerInterface.CinematicModeChangeListenerInterface_C");
		return ptr;
	}

}


