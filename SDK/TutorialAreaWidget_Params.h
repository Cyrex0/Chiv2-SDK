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
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.Construct
	 */
	struct UTutorialAreaWidget_C_Construct_Params
	{
	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateTitleText
	 */
	struct UTutorialAreaWidget_C_UpdateTitleText_Params
	{
	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateEntryCount
	 */
	struct UTutorialAreaWidget_C_UpdateEntryCount_Params
	{
	public:
		class FString                                              EntryText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int                                                        NewCount;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.AddActionEntry
	 */
	struct UTutorialAreaWidget_C_AddActionEntry_Params
	{
	public:
		class FString                                              EntryText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ControllerEntryText;                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              EntryKeyboardCallout;                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              EntryControllerCallout;                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                EntryDesc;                                               // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        EntryMaxCount;                                           // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.ClearActionList
	 */
	struct UTutorialAreaWidget_C_ClearActionList_Params
	{
	public:
		bool                                                       Fade;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarrator
	 */
	struct UTutorialAreaWidget_C_UpdateNarrator_Params
	{
	public:
		class FText                                                NarratorText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateNarratorText
	 */
	struct UTutorialAreaWidget_C_UpdateNarratorText_Params
	{
	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateProgress
	 */
	struct UTutorialAreaWidget_C_UpdateProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.UpdateAreaWidget
	 */
	struct UTutorialAreaWidget_C_UpdateAreaWidget_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                NarratorText;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.StationFinished
	 */
	struct UTutorialAreaWidget_C_StationFinished_Params
	{
	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeReset
	 */
	struct UTutorialAreaWidget_C_ChallengeReset_Params
	{
	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.ActionFailed
	 */
	struct UTutorialAreaWidget_C_ActionFailed_Params
	{
	public:
		class FText                                                Entry;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.FadeInActionList
	 */
	struct UTutorialAreaWidget_C_FadeInActionList_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.ChallengeComplete
	 */
	struct UTutorialAreaWidget_C_ChallengeComplete_Params
	{
	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.AttemptFade
	 */
	struct UTutorialAreaWidget_C_AttemptFade_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.OnTutorialComplete
	 */
	struct UTutorialAreaWidget_C_OnTutorialComplete_Params
	{
	};

	/**
	 * Function TutorialAreaWidget.TutorialAreaWidget_C.ExecuteUbergraph_TutorialAreaWidget
	 */
	struct UTutorialAreaWidget_C_ExecuteUbergraph_TutorialAreaWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
