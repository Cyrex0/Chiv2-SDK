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
	 * 		Name   -> Function TutorialCalloutModifierEntry.TutorialCalloutModifierEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTutorialCalloutModifierEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialCalloutModifierEntry.TutorialCalloutModifierEntry_C.Construct");
		
		UTutorialCalloutModifierEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialCalloutModifierEntry.TutorialCalloutModifierEntry_C.ExecuteUbergraph_TutorialCalloutModifierEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialCalloutModifierEntry_C::ExecuteUbergraph_TutorialCalloutModifierEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialCalloutModifierEntry.TutorialCalloutModifierEntry_C.ExecuteUbergraph_TutorialCalloutModifierEntry");
		
		UTutorialCalloutModifierEntry_C_ExecuteUbergraph_TutorialCalloutModifierEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialCalloutModifierEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialCalloutModifierEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialCalloutModifierEntry.TutorialCalloutModifierEntry_C");
		return ptr;
	}

}


