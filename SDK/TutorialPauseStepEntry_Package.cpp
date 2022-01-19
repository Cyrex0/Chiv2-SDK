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
	 * 		Name   -> Function TutorialPauseStepEntry.TutorialPauseStepEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTutorialPauseStepEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseStepEntry.TutorialPauseStepEntry_C.Construct");
		
		UTutorialPauseStepEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseStepEntry.TutorialPauseStepEntry_C.ExecuteUbergraph_TutorialPauseStepEntry
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialPauseStepEntry_C::ExecuteUbergraph_TutorialPauseStepEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseStepEntry.TutorialPauseStepEntry_C.ExecuteUbergraph_TutorialPauseStepEntry");
		
		UTutorialPauseStepEntry_C_ExecuteUbergraph_TutorialPauseStepEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialPauseStepEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialPauseStepEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialPauseStepEntry.TutorialPauseStepEntry_C");
		return ptr;
	}

}


