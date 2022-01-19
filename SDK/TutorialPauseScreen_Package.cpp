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
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UTutorialPauseScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.OnKeyDown");
		
		UTutorialPauseScreen_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.SetupSteps
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTutorialPauseScreenStep>            Steps                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UTutorialPauseScreen_C::SetupSteps(TArray<struct FTutorialPauseScreenStep>* Steps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.SetupSteps");
		
		UTutorialPauseScreen_C_SetupSteps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Steps != nullptr)
			*Steps = params.Steps;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.VideoLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialPauseScreen_C::VideoLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.VideoLoaded");
		
		UTutorialPauseScreen_C_VideoLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.PlayVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialPauseScreen_C::PlayVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.PlayVideo");
		
		UTutorialPauseScreen_C_PlayVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialPauseScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.Tick");
		
		UTutorialPauseScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.OpenPauseScreen
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StationTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ChallengeIntro                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ChallengeTitle                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FTutorialPauseScreenStep>            Steps                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class FText                                        HintDesc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UMediaSource*                                Video                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ContinueTIme                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialPauseScreen_C::OpenPauseScreen(const class FText& StationTitle, const class FText& ChallengeIntro, const class FText& ChallengeTitle, TArray<struct FTutorialPauseScreenStep> Steps, const class FText& HintDesc, class UMediaSource* Video, float ContinueTIme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.OpenPauseScreen");
		
		UTutorialPauseScreen_C_OpenPauseScreen_Params params {};
		params.StationTitle = StationTitle;
		params.ChallengeIntro = ChallengeIntro;
		params.ChallengeTitle = ChallengeTitle;
		params.Steps = Steps;
		params.HintDesc = HintDesc;
		params.Video = Video;
		params.ContinueTIme = ContinueTIme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialPauseScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.PreConstruct");
		
		UTutorialPauseScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.SecondContinueClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialPauseScreen_C::SecondContinueClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.SecondContinueClicked");
		
		UTutorialPauseScreen_C_SecondContinueClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.GamepadInputChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialPauseScreen_C::GamepadInputChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.GamepadInputChanged");
		
		UTutorialPauseScreen_C_GamepadInputChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialPauseScreen_C::BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UTutorialPauseScreen_C_BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTutorialPauseScreen_C::WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1");
		
		UTutorialPauseScreen_C_WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.FirstContinueClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialPauseScreen_C::FirstContinueClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.FirstContinueClicked");
		
		UTutorialPauseScreen_C_FirstContinueClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.InitSecondScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialPauseScreen_C::InitSecondScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.InitSecondScreen");
		
		UTutorialPauseScreen_C_InitSecondScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTutorialPauseScreen_C::BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UTutorialPauseScreen_C_BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.SetupContinueButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialPauseScreen_C::SetupContinueButton(float TimeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.SetupContinueButton");
		
		UTutorialPauseScreen_C_SetupContinueButton_Params params {};
		params.TimeLeft = TimeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialPauseScreen.TutorialPauseScreen_C.ExecuteUbergraph_TutorialPauseScreen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialPauseScreen_C::ExecuteUbergraph_TutorialPauseScreen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialPauseScreen.TutorialPauseScreen_C.ExecuteUbergraph_TutorialPauseScreen");
		
		UTutorialPauseScreen_C_ExecuteUbergraph_TutorialPauseScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialPauseScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialPauseScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialPauseScreen.TutorialPauseScreen_C");
		return ptr;
	}

}


