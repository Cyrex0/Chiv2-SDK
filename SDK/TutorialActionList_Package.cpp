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
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.GetActionEntry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTutorialActionEntry_C*                      Action_Entry                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionList_C::GetActionEntry(class UTutorialActionEntry_C** Action_Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.GetActionEntry");
		
		UTutorialActionList_C_GetActionEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Action_Entry != nullptr)
			*Action_Entry = params.Action_Entry;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.EntryFailed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        EntryText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTutorialActionList_C::EntryFailed(const class FText& EntryText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.EntryFailed");
		
		UTutorialActionList_C_EntryFailed_Params params {};
		params.EntryText = EntryText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.ResetEntries
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialActionList_C::ResetEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.ResetEntries");
		
		UTutorialActionList_C_ResetEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.GetPercentTasksDone
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ProgressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionList_C::GetPercentTasksDone(float* ProgressPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.GetPercentTasksDone");
		
		UTutorialActionList_C_GetPercentTasksDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProgressPercent != nullptr)
			*ProgressPercent = params.ProgressPercent;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.ClearEntries
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialActionList_C::ClearEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.ClearEntries");
		
		UTutorialActionList_C_ClearEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.UpdateEntryCount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      EntryText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int                                                NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionList_C::UpdateEntryCount(const class FString& EntryText, int NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.UpdateEntryCount");
		
		UTutorialActionList_C_UpdateEntryCount_Params params {};
		params.EntryText = EntryText;
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.AddEntry
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      EntryText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ControllerEntryText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      EntryKeyboardCallout                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      EntryControllerCallout                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        EntryDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                EntryCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionList_C::AddEntry(const class FString& EntryText, const class FString& ControllerEntryText, const class FString& EntryKeyboardCallout, const class FString& EntryControllerCallout, const class FText& EntryDesc, int EntryCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.AddEntry");
		
		UTutorialActionList_C_AddEntry_Params params {};
		params.EntryText = EntryText;
		params.ControllerEntryText = ControllerEntryText;
		params.EntryKeyboardCallout = EntryKeyboardCallout;
		params.EntryControllerCallout = EntryControllerCallout;
		params.EntryDesc = EntryDesc;
		params.EntryCount = EntryCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTutorialActionList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.Construct");
		
		UTutorialActionList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialActionList.TutorialActionList_C.ExecuteUbergraph_TutorialActionList
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialActionList_C::ExecuteUbergraph_TutorialActionList(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialActionList.TutorialActionList_C.ExecuteUbergraph_TutorialActionList");
		
		UTutorialActionList_C_ExecuteUbergraph_TutorialActionList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialActionList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialActionList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialActionList.TutorialActionList_C");
		return ptr;
	}

}


