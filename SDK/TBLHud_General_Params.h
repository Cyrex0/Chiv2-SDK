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
	 * Function TBLHud_General.TBLHud_General_C.IsScoreboardOpen
	 */
	struct ATBLHud_General_C_IsScoreboardOpen_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.CanHideRadialVoImmediately
	 */
	struct ATBLHud_General_C_CanHideRadialVoImmediately_Params
	{
	public:
		bool                                                       IsGamePad;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Return_Value;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.ShouldShowRadialMenus
	 */
	struct ATBLHud_General_C_ShouldShowRadialMenus_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.DismissRadials
	 */
	struct ATBLHud_General_C_DismissRadials_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.ConvertDoubleKeyToVOOption
	 */
	struct ATBLHud_General_C_ConvertDoubleKeyToVOOption_Params
	{
	public:
		int                                                        Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        NewKey;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.VOOptionExpired
	 */
	struct ATBLHud_General_C_VOOptionExpired_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.HandleVOOption
	 */
	struct ATBLHud_General_C_HandleVOOption_Params
	{
	public:
		int                                                        VOOption;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16
	 */
	struct ATBLHud_General_C_InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15
	 */
	struct ATBLHud_General_C_InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_SelectClass_K2Node_InputActionEvent_14
	 */
	struct ATBLHud_General_C_InpActEvt_SelectClass_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Five_K2Node_InputKeyEvent_12
	 */
	struct ATBLHud_General_C_InpActEvt_Five_K2Node_InputKeyEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Six_K2Node_InputKeyEvent_11
	 */
	struct ATBLHud_General_C_InpActEvt_Six_K2Node_InputKeyEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Seven_K2Node_InputKeyEvent_10
	 */
	struct ATBLHud_General_C_InpActEvt_Seven_K2Node_InputKeyEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Eight_K2Node_InputKeyEvent_9
	 */
	struct ATBLHud_General_C_InpActEvt_Eight_K2Node_InputKeyEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Nine_K2Node_InputKeyEvent_8
	 */
	struct ATBLHud_General_C_InpActEvt_Nine_K2Node_InputKeyEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Zero_K2Node_InputKeyEvent_7
	 */
	struct ATBLHud_General_C_InpActEvt_Zero_K2Node_InputKeyEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Three_K2Node_InputKeyEvent_6
	 */
	struct ATBLHud_General_C_InpActEvt_Three_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Four_K2Node_InputKeyEvent_5
	 */
	struct ATBLHud_General_C_InpActEvt_Four_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13
	 */
	struct ATBLHud_General_C_InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12
	 */
	struct ATBLHud_General_C_InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11
	 */
	struct ATBLHud_General_C_InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10
	 */
	struct ATBLHud_General_C_InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_One_K2Node_InputKeyEvent_4
	 */
	struct ATBLHud_General_C_InpActEvt_One_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_Two_K2Node_InputKeyEvent_3
	 */
	struct ATBLHud_General_C_InpActEvt_Two_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9
	 */
	struct ATBLHud_General_C_InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8
	 */
	struct ATBLHud_General_C_InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7
	 */
	struct ATBLHud_General_C_InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6
	 */
	struct ATBLHud_General_C_InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_5
	 */
	struct ATBLHud_General_C_InpActEvt_DebugMacros_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_4
	 */
	struct ATBLHud_General_C_InpActEvt_DebugMacros_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_2
	 */
	struct ATBLHud_General_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1
	 */
	struct ATBLHud_General_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowControlMap_K2Node_InputActionEvent_3
	 */
	struct ATBLHud_General_C_InpActEvt_ShowControlMap_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_2
	 */
	struct ATBLHud_General_C_InpActEvt_RadialInventory_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_1
	 */
	struct ATBLHud_General_C_InpActEvt_RadialInventory_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.ReceiveBeginPlay
	 */
	struct ATBLHud_General_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.ShowTeamSelectScreen
	 */
	struct ATBLHud_General_C_ShowTeamSelectScreen_Params
	{
	public:
		bool                                                       bGameStart;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.ShowIngameMenu
	 */
	struct ATBLHud_General_C_ShowIngameMenu_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.ShowLoadoutScreen
	 */
	struct ATBLHud_General_C_ShowLoadoutScreen_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.OnTeamChanged_Event_1
	 */
	struct ATBLHud_General_C_OnTeamChanged_Event_1_Params
	{
	public:
		class ATBLTeam*                                            NewTeam;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.OnPossessedPawn
	 */
	struct ATBLHud_General_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.OnDeathRecapReplicated_Event_1
	 */
	struct ATBLHud_General_C_OnDeathRecapReplicated_Event_1_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.OnMatchWonBy_Event_1
	 */
	struct ATBLHud_General_C_OnMatchWonBy_Event_1_Params
	{
	public:
		TBL_EFaction                                               Victor;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Released
	 */
	struct ATBLHud_General_C_Emote_Gamepad_Released_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.CloseEmoteMenu
	 */
	struct ATBLHud_General_C_CloseEmoteMenu_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Pressed
	 */
	struct ATBLHud_General_C_Emote_Gamepad_Pressed_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       Personal;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.SpectateAndHideHUD
	 */
	struct ATBLHud_General_C_SpectateAndHideHUD_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.CloseRadialInventory
	 */
	struct ATBLHud_General_C_CloseRadialInventory_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InGameMenuReleased
	 */
	struct ATBLHud_General_C_InGameMenuReleased_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.AfterTimerShowMenu
	 */
	struct ATBLHud_General_C_AfterTimerShowMenu_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.PS4TouchpadPressed
	 */
	struct ATBLHud_General_C_PS4TouchpadPressed_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.StartRadialVOTimer_PC
	 */
	struct ATBLHud_General_C_StartRadialVOTimer_PC_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.CustomEvent_1
	 */
	struct ATBLHud_General_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.GamepadShowEmoteWheel
	 */
	struct ATBLHud_General_C_GamepadShowEmoteWheel_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.GamepadHideEmoteWheel
	 */
	struct ATBLHud_General_C_GamepadHideEmoteWheel_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InventoryPressedTimerFinished
	 */
	struct ATBLHud_General_C_InventoryPressedTimerFinished_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.HideEmoteMenu
	 */
	struct ATBLHud_General_C_HideEmoteMenu_Params
	{
	public:
		bool                                                       IsGamePad;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.OnGamepadShowKeymapInputComplete
	 */
	struct ATBLHud_General_C_OnGamepadShowKeymapInputComplete_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.Scoreboard Input Timer Finished
	 */
	struct ATBLHud_General_C_Scoreboard_Input_Timer_Finished_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.InGameMenuPressed
	 */
	struct ATBLHud_General_C_InGameMenuPressed_Params
	{
	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.ExecuteUbergraph_TBLHud_General
	 */
	struct ATBLHud_General_C_ExecuteUbergraph_TBLHud_General_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TBLHud_General.TBLHud_General_C.NumRowKeyUp__DelegateSignature
	 */
	struct ATBLHud_General_C_NumRowKeyUp__DelegateSignature_Params
	{
	public:
		int                                                        Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
