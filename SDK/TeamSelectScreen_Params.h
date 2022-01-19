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
	 * Function TeamSelectScreen.TeamSelectScreen_C.K2_GetFocusWidget
	 */
	struct UTeamSelectScreen_C_K2_GetFocusWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OnPreviewKeyDown
	 */
	struct UTeamSelectScreen_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OnKeyDown
	 */
	struct UTeamSelectScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.TeamToSwitchTo
	 */
	struct UTeamSelectScreen_C_TeamToSwitchTo_Params
	{
	public:
		TBL_EFaction                                               TeamToSwitchTo;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.SendChatNotification
	 */
	struct UTeamSelectScreen_C_SendChatNotification_Params
	{
	public:
		TBL_EFaction                                               FactionToSwitchTo;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.Init Team Select Screen
	 */
	struct UTeamSelectScreen_C_Init_Team_Select_Screen_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.IsInSpectatorMode
	 */
	struct UTeamSelectScreen_C_IsInSpectatorMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.Close This Screen
	 */
	struct UTeamSelectScreen_C_Close_This_Screen_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.Open Loadout Menu
	 */
	struct UTeamSelectScreen_C_Open_Loadout_Menu_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__AgathaSelect_K2Node_ComponentBoundEvent_4_OnHighlightEvent__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__AgathaSelect_K2Node_ComponentBoundEvent_4_OnHighlightEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__MasonSelect_K2Node_ComponentBoundEvent_5_OnHighlightEvent__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__MasonSelect_K2Node_ComponentBoundEvent_5_OnHighlightEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.PreConstruct
	 */
	struct UTeamSelectScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OnAgathaUnhighlight
	 */
	struct UTeamSelectScreen_C_OnAgathaUnhighlight_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OnMasonUnhighlight
	 */
	struct UTeamSelectScreen_C_OnMasonUnhighlight_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.StartTimer
	 */
	struct UTeamSelectScreen_C_StartTimer_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.TimerAction
	 */
	struct UTeamSelectScreen_C_TimerAction_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OpenLoadout
	 */
	struct UTeamSelectScreen_C_OpenLoadout_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.Spectate
	 */
	struct UTeamSelectScreen_C_Spectate_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OnInitialized
	 */
	struct UTeamSelectScreen_C_OnInitialized_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OnAcknowledgedTeamRequest_Event_1
	 */
	struct UTeamSelectScreen_C_OnAcknowledgedTeamRequest_Event_1_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TBL_EFaction                                               Faction;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OnGamepadChange
	 */
	struct UTeamSelectScreen_C_OnGamepadChange_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.Construct
	 */
	struct UTeamSelectScreen_C_Construct_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.InterceptTutorialTeamSelect
	 */
	struct UTeamSelectScreen_C_InterceptTutorialTeamSelect_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.SetTutorialMode
	 */
	struct UTeamSelectScreen_C_SetTutorialMode_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.OnLoreVideoComplete
	 */
	struct UTeamSelectScreen_C_OnLoreVideoComplete_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.GoToInGameMenu
	 */
	struct UTeamSelectScreen_C_GoToInGameMenu_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UTeamSelectScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.ExecuteUbergraph_TeamSelectScreen
	 */
	struct UTeamSelectScreen_C_ExecuteUbergraph_TeamSelectScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.LoreVideoComplete__DelegateSignature
	 */
	struct UTeamSelectScreen_C_LoreVideoComplete__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.TutorialTeamSelected__DelegateSignature
	 */
	struct UTeamSelectScreen_C_TutorialTeamSelected__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.TeamChanged__DelegateSignature
	 */
	struct UTeamSelectScreen_C_TeamChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function TeamSelectScreen.TeamSelectScreen_C.SendToServerChatRequest__DelegateSignature
	 */
	struct UTeamSelectScreen_C_SendToServerChatRequest__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
