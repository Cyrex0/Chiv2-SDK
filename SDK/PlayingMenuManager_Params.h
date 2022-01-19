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
	 * Function PlayingMenuManager.PlayingMenuManager_C.GetFadeDuration
	 */
	struct UPlayingMenuManager_C_GetFadeDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Push Cinematic Widget
	 */
	struct UPlayingMenuManager_C_Push_Cinematic_Widget_Params
	{
	public:
		class UClass*                                              Widget_class;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.GetKeymapWidget
	 */
	struct UPlayingMenuManager_C_GetKeymapWidget_Params
	{
	public:
		class UTBLKeymapWidget*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.DetermineScoreEventType
	 */
	struct UPlayingMenuManager_C_DetermineScoreEventType_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEventStruct;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       _;                                                       // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.IsVisibleCinematicWidget
	 */
	struct UPlayingMenuManager_C_IsVisibleCinematicWidget_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsVisible;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnKeyDown
	 */
	struct UPlayingMenuManager_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.EnableFocusMode
	 */
	struct UPlayingMenuManager_C_EnableFocusMode_Params
	{
	public:
		bool                                                       Enable_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecap
	 */
	struct UPlayingMenuManager_C_OnDeathRecap_Params
	{
	public:
		float                                                      Timer;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTimerHandle                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.UpdateSpectatorHudVisibility
	 */
	struct UPlayingMenuManager_C_UpdateSpectatorHudVisibility_Params
	{
	public:
		class UObject*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Handle Cinematic HUD Requests Changed
	 */
	struct UPlayingMenuManager_C_Handle_Cinematic_HUD_Requests_Changed_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ResetGuiBackgroundCount
	 */
	struct UPlayingMenuManager_C_ResetGuiBackgroundCount_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.AddWidgetToScreen
	 */
	struct UPlayingMenuManager_C_AddWidgetToScreen_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SlateCore_EHorizontalAlignment                             HAlign;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SlateCore_EVerticalAlignment                               VAlign;                                                  // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UOverlay*                                            Overlay;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Get Faction
	 */
	struct UPlayingMenuManager_C_Get_Faction_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Construct
	 */
	struct UPlayingMenuManager_C_Construct_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Toggle Loadout Screen
	 */
	struct UPlayingMenuManager_C_Toggle_Loadout_Screen_Params
	{
	public:
		bool                                                       bScoreboardMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Show InGame Menu
	 */
	struct UPlayingMenuManager_C_Show_InGame_Menu_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Start of game actions
	 */
	struct UPlayingMenuManager_C_Start_of_game_actions_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ShowVOPersonalMenu
	 */
	struct UPlayingMenuManager_C_ShowVOPersonalMenu_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ShowVOTacticalMenu
	 */
	struct UPlayingMenuManager_C_ShowVOTacticalMenu_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ShowHudLayer
	 */
	struct UPlayingMenuManager_C_ShowHudLayer_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.HideHudLayer
	 */
	struct UPlayingMenuManager_C_HideHudLayer_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.HideVOMenu
	 */
	struct UPlayingMenuManager_C_HideVOMenu_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Hide Overview Screen
	 */
	struct UPlayingMenuManager_C_Hide_Overview_Screen_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OpenDebugMenu
	 */
	struct UPlayingMenuManager_C_OpenDebugMenu_Params
	{
	public:
		class UBlueprintDebugMenuComponent*                        DebugMenuComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Remove Debug Menu
	 */
	struct UPlayingMenuManager_C_Remove_Debug_Menu_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Remove Cinematic Widget
	 */
	struct UPlayingMenuManager_C_Remove_Cinematic_Widget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Show Overview Screen
	 */
	struct UPlayingMenuManager_C_Show_Overview_Screen_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic bars
	 */
	struct UPlayingMenuManager_C_Request_cinematic_bars_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicBarsMode_ECinematicBarsMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic bars
	 */
	struct UPlayingMenuManager_C_Release_cinematic_bars_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Open Loadout
	 */
	struct UPlayingMenuManager_C_Open_Loadout_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On Mode Changed__DelegateSignature
	 */
	struct UPlayingMenuManager_C_BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On_Mode_Changed__DelegateSignature_Params
	{
	public:
		CinematicBarsMode_ECinematicBarsMode                       Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic HUD mode
	 */
	struct UPlayingMenuManager_C_Request_cinematic_HUD_mode_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic HUD mode
	 */
	struct UPlayingMenuManager_C_Release_cinematic_HUD_mode_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Update cinematic requests soon
	 */
	struct UPlayingMenuManager_C_Update_cinematic_requests_soon_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Request fade out
	 */
	struct UPlayingMenuManager_C_Request_fade_out_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Release fade out (fade in)
	 */
	struct UPlayingMenuManager_C_Release_fade_out__fade_in__Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics Mode Changed__DelegateSignature
	 */
	struct UPlayingMenuManager_C_BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics_Mode_Changed__DelegateSignature_Params
	{
	public:
		CinematicMenuMode_ECinematicMenuMode                       New_mode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Previous_mode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ShowVOEmoteMenu
	 */
	struct UPlayingMenuManager_C_ShowVOEmoteMenu_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnClientPossessedPawn_Event_1
	 */
	struct UPlayingMenuManager_C_OnClientPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn
	 */
	struct UPlayingMenuManager_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn_Event_1
	 */
	struct UPlayingMenuManager_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged_Event_1
	 */
	struct UPlayingMenuManager_C_OnTeamChanged_Event_1_Params
	{
	public:
		class ATBLTeam*                                            NewTeam;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged
	 */
	struct UPlayingMenuManager_C_OnTeamChanged_Params
	{
	public:
		class ATBLTeam*                                            NewTeam;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Add Cinematic Mode Change Listener
	 */
	struct UPlayingMenuManager_C_Add_Cinematic_Mode_Change_Listener_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecapReplicated_Local
	 */
	struct UPlayingMenuManager_C_OnDeathRecapReplicated_Local_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.HidePostDeath
	 */
	struct UPlayingMenuManager_C_HidePostDeath_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Post Death Possessed New Pawn
	 */
	struct UPlayingMenuManager_C_Post_Death_Possessed_New_Pawn_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Snap Fade In
	 */
	struct UPlayingMenuManager_C_Snap_Fade_In_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Toggle Team Select Screen
	 */
	struct UPlayingMenuManager_C_Toggle_Team_Select_Screen_Params
	{
	public:
		bool                                                       bScoreboardMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Event Open Team Select Screen
	 */
	struct UPlayingMenuManager_C_Event_Open_Team_Select_Screen_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnMatchEnded_Event_1
	 */
	struct UPlayingMenuManager_C_OnMatchEnded_Event_1_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.FadeOutCinematicLayer
	 */
	struct UPlayingMenuManager_C_FadeOutCinematicLayer_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.FadeInCinematicLayer
	 */
	struct UPlayingMenuManager_C_FadeInCinematicLayer_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature
	 */
	struct UPlayingMenuManager_C_BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature_Params
	{
	public:
		OverviewScreenState_EOverviewScreenState                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		OverviewScreenState_EOverviewScreenState                   PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnZoomDisabled_Event_1
	 */
	struct UPlayingMenuManager_C_OnZoomDisabled_Event_1_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnZoomEnabled_Event_1
	 */
	struct UPlayingMenuManager_C_OnZoomEnabled_Event_1_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Toggle Player List Screen
	 */
	struct UPlayingMenuManager_C_Toggle_Player_List_Screen_Params
	{
	public:
		bool                                                       bShowHide;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.FadeOutFinished
	 */
	struct UPlayingMenuManager_C_FadeOutFinished_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStart
	 */
	struct UPlayingMenuManager_C_FadeOutStart_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.SetHudVisibility
	 */
	struct UPlayingMenuManager_C_SetHudVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Force HUD Visible
	 */
	struct UPlayingMenuManager_C_Force_HUD_Visible_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Show Radial Inventory Screen
	 */
	struct UPlayingMenuManager_C_Show_Radial_Inventory_Screen_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Hide Radial Inventory Screen
	 */
	struct UPlayingMenuManager_C_Hide_Radial_Inventory_Screen_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ShowLoadoutOnFirstDeath
	 */
	struct UPlayingMenuManager_C_ShowLoadoutOnFirstDeath_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidgetEvent
	 */
	struct UPlayingMenuManager_C_OnPushCinematicWidgetEvent_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeOut
	 */
	struct UPlayingMenuManager_C_BP_FadeOut_Params
	{
	public:
		float                                                      PlaybackSpeed;                                           // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeIn
	 */
	struct UPlayingMenuManager_C_BP_FadeIn_Params
	{
	public:
		float                                                      PlaybackSpeed;                                           // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Destruct
	 */
	struct UPlayingMenuManager_C_Destruct_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnSavedClassUnavailable
	 */
	struct UPlayingMenuManager_C_OnSavedClassUnavailable_Params
	{
	public:
		class UClass*                                              RequestedSubclass;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.InitializeScoreEvents
	 */
	struct UPlayingMenuManager_C_InitializeScoreEvents_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnScoreEvent_Event_1
	 */
	struct UPlayingMenuManager_C_OnScoreEvent_Event_1_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Team Select Input Pressed
	 */
	struct UPlayingMenuManager_C_Team_Select_Input_Pressed_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.SpawnWaveJoined
	 */
	struct UPlayingMenuManager_C_SpawnWaveJoined_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bJoinWaveSuccess;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialAreaWidget
	 */
	struct UPlayingMenuManager_C_ShowTutorialAreaWidget_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.HideTutorialAreaWidget
	 */
	struct UPlayingMenuManager_C_HideTutorialAreaWidget_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialArea
	 */
	struct UPlayingMenuManager_C_UpdateTutorialArea_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                NarratorText;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.AddTutorialAction
	 */
	struct UPlayingMenuManager_C_AddTutorialAction_Params
	{
	public:
		class FText                                                ActionText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ControllerActionText;                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ActionKeyboardCallout;                                   // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ActionControllerCallout;                                 // 0x0048(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ActionDesc;                                              // 0x0060(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        ActionMaxCount;                                          // 0x0078(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SkipAfterTime;                                           // 0x007C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ClearTutorialActionList
	 */
	struct UPlayingMenuManager_C_ClearTutorialActionList_Params
	{
	public:
		bool                                                       Fade;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialActionCount
	 */
	struct UPlayingMenuManager_C_UpdateTutorialActionCount_Params
	{
	public:
		class FText                                                ActionText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        NewCount;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.UpdateNarratorText
	 */
	struct UPlayingMenuManager_C_UpdateNarratorText_Params
	{
	public:
		class FText                                                NarratorText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialProgress
	 */
	struct UPlayingMenuManager_C_UpdateTutorialProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFade
	 */
	struct UPlayingMenuManager_C_ForwardSpawnFade_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFadeIn
	 */
	struct UPlayingMenuManager_C_ForwardSpawnFadeIn_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.RequestRandomHint
	 */
	struct UPlayingMenuManager_C_RequestRandomHint_Params
	{
	public:
		float                                                      Chance;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintType                                              HintKey;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintInputType                                         HintInputType;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.EnableTutorialTimer
	 */
	struct UPlayingMenuManager_C_EnableTutorialTimer_Params
	{
	public:
		float                                                      TimerLength;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.DisableTutorialTimer
	 */
	struct UPlayingMenuManager_C_DisableTutorialTimer_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialTimer
	 */
	struct UPlayingMenuManager_C_ResetTutorialTimer_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.TimerSuccess
	 */
	struct UPlayingMenuManager_C_TimerSuccess_Params
	{
	public:
		bool                                                       ShouldDisable;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnPlayerSelectedSpectatorMode_Event_1
	 */
	struct UPlayingMenuManager_C_OnPlayerSelectedSpectatorMode_Event_1_Params
	{
	public:
		bool                                                       IsPlayerSpectator;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On Entered Input Mode__DelegateSignature
	 */
	struct UPlayingMenuManager_C_BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On_Entered_Input_Mode__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On Left Input Mode__DelegateSignature
	 */
	struct UPlayingMenuManager_C_BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On_Left_Input_Mode__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.InitWithCallouts
	 */
	struct UPlayingMenuManager_C_InitWithCallouts_Params
	{
	public:
		TArray<struct FTutorialCalloutActionStruct>                KeyboardCallouts;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<struct FTutorialCalloutActionStruct>                ControllerCallouts;                                      // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ClearCallouts
	 */
	struct UPlayingMenuManager_C_ClearCallouts_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.NextCallout
	 */
	struct UPlayingMenuManager_C_NextCallout_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.RestartCallouts
	 */
	struct UPlayingMenuManager_C_RestartCallouts_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialChallenges
	 */
	struct UPlayingMenuManager_C_ResetTutorialChallenges_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.TutorialStationComplete
	 */
	struct UPlayingMenuManager_C_TutorialStationComplete_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.TutorialActionFailed
	 */
	struct UPlayingMenuManager_C_TutorialActionFailed_Params
	{
	public:
		class FText                                                Action;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialSkipMessage
	 */
	struct UPlayingMenuManager_C_ShowTutorialSkipMessage_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnPromptPlayerMessageReply_Event_1
	 */
	struct UPlayingMenuManager_C_OnPromptPlayerMessageReply_Event_1_Params
	{
	public:
		int                                                        MessageId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Response;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ATBLPlayerController*                                Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.AutoHideVOTimerStarted
	 */
	struct UPlayingMenuManager_C_AutoHideVOTimerStarted_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OpenTutorialPauseScreen
	 */
	struct UPlayingMenuManager_C_OpenTutorialPauseScreen_Params
	{
	public:
		class FText                                                StationTitle;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ChallengeIntro;                                          // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ChallengeTitle;                                          // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FTutorialPauseScreenStep>                    Steps;                                                   // 0x0048(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class FText                                                HintDesc;                                                // 0x0058(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UMediaSource*                                        Video;                                                   // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ContinueTIme;                                            // 0x0078(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.HideChat
	 */
	struct UPlayingMenuManager_C_HideChat_Params
	{
	public:
		bool                                                       ShouldHide;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ToggleKeymap
	 */
	struct UPlayingMenuManager_C_ToggleKeymap_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.CancelSkipChallenge
	 */
	struct UPlayingMenuManager_C_CancelSkipChallenge_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.FadeCalloutUsableAtIndex
	 */
	struct UPlayingMenuManager_C_FadeCalloutUsableAtIndex_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Fade;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.CompleteTutorial
	 */
	struct UPlayingMenuManager_C_CompleteTutorial_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Show Loadout First Time Only
	 */
	struct UPlayingMenuManager_C_Show_Loadout_First_Time_Only_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.RequestSpecificHint
	 */
	struct UPlayingMenuManager_C_RequestSpecificHint_Params
	{
	public:
		class FName                                                HintKey;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.ExecuteUbergraph_PlayingMenuManager
	 */
	struct UPlayingMenuManager_C_ExecuteUbergraph_PlayingMenuManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnTutorialSkipStation__DelegateSignature
	 */
	struct UPlayingMenuManager_C_OnTutorialSkipStation__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidget__DelegateSignature
	 */
	struct UPlayingMenuManager_C_OnPushCinematicWidget__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.FadeOutComplete__DelegateSignature
	 */
	struct UPlayingMenuManager_C_FadeOutComplete__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStarted__DelegateSignature
	 */
	struct UPlayingMenuManager_C_FadeOutStarted__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Cinematic HUD mode changed__DelegateSignature
	 */
	struct UPlayingMenuManager_C_Cinematic_HUD_mode_changed__DelegateSignature_Params
	{
	public:
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Cinematic mode enabled changed__DelegateSignature
	 */
	struct UPlayingMenuManager_C_Cinematic_mode_enabled_changed__DelegateSignature_Params
	{
	public:
		bool                                                       Enabled_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayingMenuManager.PlayingMenuManager_C.Cinematic bars mode changed__DelegateSignature
	 */
	struct UPlayingMenuManager_C_Cinematic_bars_mode_changed__DelegateSignature_Params
	{
	public:
		CinematicBarsMode_ECinematicBarsMode                       Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
