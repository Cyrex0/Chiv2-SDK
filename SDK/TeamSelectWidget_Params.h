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
	 * Function TeamSelectWidget.TeamSelectWidget_C.OnKeyDown
	 */
	struct UTeamSelectWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.OnKeyUp
	 */
	struct UTeamSelectWidget_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.DetermineState
	 */
	struct UTeamSelectWidget_C_DetermineState_Params
	{
	public:
		TeamSelectButtonState_ETeamSelectButtonState               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.PreConstruct
	 */
	struct UTeamSelectWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.Tick
	 */
	struct UTeamSelectWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.UpdateState
	 */
	struct UTeamSelectWidget_C_UpdateState_Params
	{
	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTeamSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.K2_Unhighlight
	 */
	struct UTeamSelectWidget_C_K2_Unhighlight_Params
	{
	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.K2_Highlight
	 */
	struct UTeamSelectWidget_C_K2_Highlight_Params
	{
	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.InitTeamSelectWidget
	 */
	struct UTeamSelectWidget_C_InitTeamSelectWidget_Params
	{
	public:
		class UTeamSelectWidget_C*                                 OpposingFactionWidget;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               PlayerFaction;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.HighlightWidget
	 */
	struct UTeamSelectWidget_C_HighlightWidget_Params
	{
	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.UnhighlightWidget
	 */
	struct UTeamSelectWidget_C_UnhighlightWidget_Params
	{
	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.PlayTeamFullEvent
	 */
	struct UTeamSelectWidget_C_PlayTeamFullEvent_Params
	{
	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.SetTutorialMode
	 */
	struct UTeamSelectWidget_C_SetTutorialMode_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.ExecuteUbergraph_TeamSelectWidget
	 */
	struct UTeamSelectWidget_C_ExecuteUbergraph_TeamSelectWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.OnWidgetUnhighlight__DelegateSignature
	 */
	struct UTeamSelectWidget_C_OnWidgetUnhighlight__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectWidget.TeamSelectWidget_C.OnClicked__DelegateSignature
	 */
	struct UTeamSelectWidget_C_OnClicked__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
