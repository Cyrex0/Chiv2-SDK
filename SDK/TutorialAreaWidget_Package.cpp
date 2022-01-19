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
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTutorialAreaWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.Construct");
		
		UTutorialAreaWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateTitleText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialAreaWidget_C::UpdateTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateTitleText");
		
		UTutorialAreaWidget_C_UpdateTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateEntryCount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      EntryText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int                                                NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialAreaWidget_C::UpdateEntryCount(const class FString& EntryText, int NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateEntryCount");
		
		UTutorialAreaWidget_C_UpdateEntryCount_Params params {};
		params.EntryText = EntryText;
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.AddActionEntry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      EntryText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ControllerEntryText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      EntryKeyboardCallout                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      EntryControllerCallout                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        EntryDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                EntryMaxCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialAreaWidget_C::AddActionEntry(const class FString& EntryText, const class FString& ControllerEntryText, const class FString& EntryKeyboardCallout, const class FString& EntryControllerCallout, const class FText& EntryDesc, int EntryMaxCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.AddActionEntry");
		
		UTutorialAreaWidget_C_AddActionEntry_Params params {};
		params.EntryText = EntryText;
		params.ControllerEntryText = ControllerEntryText;
		params.EntryKeyboardCallout = EntryKeyboardCallout;
		params.EntryControllerCallout = EntryControllerCallout;
		params.EntryDesc = EntryDesc;
		params.EntryMaxCount = EntryMaxCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.ClearActionList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Fade                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialAreaWidget_C::ClearActionList(bool Fade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.ClearActionList");
		
		UTutorialAreaWidget_C_ClearActionList_Params params {};
		params.Fade = Fade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarrator
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NarratorText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTutorialAreaWidget_C::UpdateNarrator(const class FText& NarratorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarrator");
		
		UTutorialAreaWidget_C_UpdateNarrator_Params params {};
		params.NarratorText = NarratorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarratorText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialAreaWidget_C::UpdateNarratorText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarratorText");
		
		UTutorialAreaWidget_C_UpdateNarratorText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialAreaWidget_C::UpdateProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateProgress");
		
		UTutorialAreaWidget_C_UpdateProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateAreaWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        NarratorText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTutorialAreaWidget_C::UpdateAreaWidget(const class FText& TitleText, const class FText& NarratorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateAreaWidget");
		
		UTutorialAreaWidget_C_UpdateAreaWidget_Params params {};
		params.TitleText = TitleText;
		params.NarratorText = NarratorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.StationFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialAreaWidget_C::StationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.StationFinished");
		
		UTutorialAreaWidget_C_StationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeReset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialAreaWidget_C::ChallengeReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeReset");
		
		UTutorialAreaWidget_C_ChallengeReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.ActionFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTutorialAreaWidget_C::ActionFailed(const class FText& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.ActionFailed");
		
		UTutorialAreaWidget_C_ActionFailed_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.FadeInActionList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialAreaWidget_C::FadeInActionList(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.FadeInActionList");
		
		UTutorialAreaWidget_C_FadeInActionList_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialAreaWidget_C::ChallengeComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeComplete");
		
		UTutorialAreaWidget_C_ChallengeComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.AttemptFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialAreaWidget_C::AttemptFade(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.AttemptFade");
		
		UTutorialAreaWidget_C_AttemptFade_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.OnTutorialComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialAreaWidget_C::OnTutorialComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.OnTutorialComplete");
		
		UTutorialAreaWidget_C_OnTutorialComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialAreaWidget.TutorialAreaWidget_C.ExecuteUbergraph_TutorialAreaWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialAreaWidget_C::ExecuteUbergraph_TutorialAreaWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialAreaWidget.TutorialAreaWidget_C.ExecuteUbergraph_TutorialAreaWidget");
		
		UTutorialAreaWidget_C_ExecuteUbergraph_TutorialAreaWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialAreaWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialAreaWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialAreaWidget.TutorialAreaWidget_C");
		return ptr;
	}

}


