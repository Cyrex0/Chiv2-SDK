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
	 * Function TutorialActionEntry.TutorialActionEntry_C.InputModeChanged
	 */
	struct UTutorialActionEntry_C_InputModeChanged_Params
	{
	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.UpdateCallout
	 */
	struct UTutorialActionEntry_C_UpdateCallout_Params
	{
	public:
		TBL_EGamepadInputMode                                      InputMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.ClearEntry
	 */
	struct UTutorialActionEntry_C_ClearEntry_Params
	{
	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.UpdateCount
	 */
	struct UTutorialActionEntry_C_UpdateCount_Params
	{
	public:
		int                                                        NewCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.Construct
	 */
	struct UTutorialActionEntry_C_Construct_Params
	{
	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.InitNewEntry
	 */
	struct UTutorialActionEntry_C_InitNewEntry_Params
	{
	public:
		class FString                                              NewEntryText;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ControllerEntryText;                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              EntryKeyboardCallout;                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              EntryControllerCallout;                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                EntryDesc;                                               // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        NewMaxCount;                                             // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.FadeInEntry
	 */
	struct UTutorialActionEntry_C_FadeInEntry_Params
	{
	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.GamePadInputModeChanged
	 */
	struct UTutorialActionEntry_C_GamePadInputModeChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UTutorialActionEntry_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.PlayProgressTickAnim
	 */
	struct UTutorialActionEntry_C_PlayProgressTickAnim_Params
	{
	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.PlayChallengeCompleteAnim
	 */
	struct UTutorialActionEntry_C_PlayChallengeCompleteAnim_Params
	{
	};

	/**
	 * Function TutorialActionEntry.TutorialActionEntry_C.ExecuteUbergraph_TutorialActionEntry
	 */
	struct UTutorialActionEntry_C_ExecuteUbergraph_TutorialActionEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
