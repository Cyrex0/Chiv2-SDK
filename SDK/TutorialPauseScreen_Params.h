#pragma once

/**
 * Name: chiv2
 * Version: 123456
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.OnKeyDown
	 */
	struct UTutorialPauseScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.SetupSteps
	 */
	struct UTutorialPauseScreen_C_SetupSteps_Params
	{
	public:
		TArray<struct FTutorialPauseScreenStep>                    Steps;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.VideoLoaded
	 */
	struct UTutorialPauseScreen_C_VideoLoaded_Params
	{
	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.PlayVideo
	 */
	struct UTutorialPauseScreen_C_PlayVideo_Params
	{
	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.Tick
	 */
	struct UTutorialPauseScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.OpenPauseScreen
	 */
	struct UTutorialPauseScreen_C_OpenPauseScreen_Params
	{
	public:
		class FText                                                StationTitle;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ChallengeIntro;                                          // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ChallengeTitle;                                          // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FTutorialPauseScreenStep>                    Steps;                                                   // 0x0048(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class FText                                                HintDesc;                                                // 0x0058(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UMediaSource*                                        Video;                                                   // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ContinueTIme;                                            // 0x0078(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.PreConstruct
	 */
	struct UTutorialPauseScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.SecondContinueClicked
	 */
	struct UTutorialPauseScreen_C_SecondContinueClicked_Params
	{
	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.GamepadInputChanged
	 */
	struct UTutorialPauseScreen_C_GamepadInputChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UTutorialPauseScreen_C_BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1
	 */
	struct UTutorialPauseScreen_C_WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.FirstContinueClicked
	 */
	struct UTutorialPauseScreen_C_FirstContinueClicked_Params
	{
	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.InitSecondScreen
	 */
	struct UTutorialPauseScreen_C_InitSecondScreen_Params
	{
	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UTutorialPauseScreen_C_BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{
	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.SetupContinueButton
	 */
	struct UTutorialPauseScreen_C_SetupContinueButton_Params
	{
	public:
		float                                                      TimeLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialPauseScreen.TutorialPauseScreen_C.ExecuteUbergraph_TutorialPauseScreen
	 */
	struct UTutorialPauseScreen_C_ExecuteUbergraph_TutorialPauseScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
