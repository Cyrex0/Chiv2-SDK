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
	 * Function OverviewScreen.OverviewScreen_C.K2_GetFocusWidget
	 */
	struct UOverviewScreen_C_K2_GetFocusWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.GetMenuTakeOverActionName
	 */
	struct UOverviewScreen_C_GetMenuTakeOverActionName_Params
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.StopListeningForMenuTakeOver
	 */
	struct UOverviewScreen_C_StopListeningForMenuTakeOver_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.StartListeningForMenuTakeOver
	 */
	struct UOverviewScreen_C_StartListeningForMenuTakeOver_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.OnKeyDown
	 */
	struct UOverviewScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.DisplayNavigationMenu
	 */
	struct UOverviewScreen_C_DisplayNavigationMenu_Params
	{
	public:
		OverviewScreenState_EOverviewScreenState                   State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		OverviewScreenState_EOverviewScreenState                   PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Set Keyboard Focus
	 */
	struct UOverviewScreen_C_Set_Keyboard_Focus_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Get Widget For Current State
	 */
	struct UOverviewScreen_C_Get_Widget_For_Current_State_Params
	{
	public:
		class UWidget*                                             Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Set cinematics UI state
	 */
	struct UOverviewScreen_C_Set_cinematics_UI_state_Params
	{
	public:
		struct FGameplayTag                                        State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Get Loadout Toggle Button Text
	 */
	struct UOverviewScreen_C_Get_Loadout_Toggle_Button_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.IsInEditor
	 */
	struct UOverviewScreen_C_IsInEditor_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Toggle Cinematic Mode
	 */
	struct UOverviewScreen_C_Toggle_Cinematic_Mode_Params
	{
	public:
		bool                                                       Enable_Cinematic_Mode;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.IsPlayerInSpawnWave
	 */
	struct UOverviewScreen_C_IsPlayerInSpawnWave_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSpawnWave;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.InitNavigationMenu
	 */
	struct UOverviewScreen_C_InitNavigationMenu_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Hide Overview Screen If In Scoreboard Mode
	 */
	struct UOverviewScreen_C_Hide_Overview_Screen_If_In_Scoreboard_Mode_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Set Overview Screen Mode
	 */
	struct UOverviewScreen_C_Set_Overview_Screen_Mode_Params
	{
	public:
		OverviewScreenState_EOverviewScreenState                   New_mode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Init Subwidgets
	 */
	struct UOverviewScreen_C_Init_Subwidgets_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Construct
	 */
	struct UOverviewScreen_C_Construct_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameAndUIInput
	 */
	struct UOverviewScreen_C_BindVIewportFocus_GameAndUIInput_Params
	{
	public:
		class ATBLPlayerController*                                TBLPlayerController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_1
	 */
	struct UOverviewScreen_C_OnGameViewportReceivedFocus_Event_1_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameInput
	 */
	struct UOverviewScreen_C_BindVIewportFocus_GameInput_Params
	{
	public:
		class ATBLPlayerController*                                TBLPlayerController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_2
	 */
	struct UOverviewScreen_C_OnGameViewportReceivedFocus_Event_2_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature
	 */
	struct UOverviewScreen_C_BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature
	 */
	struct UOverviewScreen_C_BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOverviewScreen_C_BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.RequestedToJoinSpawnWave_Event_1
	 */
	struct UOverviewScreen_C_RequestedToJoinSpawnWave_Event_1_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1
	 */
	struct UOverviewScreen_C_OnReceivedSpawnWaveJoinResponse_Event_1_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bJoinWaveSuccess;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Bind navigation widget
	 */
	struct UOverviewScreen_C_Bind_navigation_widget_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Resume Clicked_Event_1
	 */
	struct UOverviewScreen_C_Resume_Clicked_Event_1_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Toggle ingame menu
	 */
	struct UOverviewScreen_C_Toggle_ingame_menu_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.Fired Button Action_Event_1
	 */
	struct UOverviewScreen_C_Fired_Button_Action_Event_1_Params
	{
	public:
		class FName                                                Button_ID;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.CustomEvent_2
	 */
	struct UOverviewScreen_C_CustomEvent_2_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.BP_ShowLoadout
	 */
	struct UOverviewScreen_C_BP_ShowLoadout_Params
	{
	public:
		bool                                                       bReset;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.PlayerListFocused
	 */
	struct UOverviewScreen_C_PlayerListFocused_Params
	{
	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.GamepadInputChanged
	 */
	struct UOverviewScreen_C_GamepadInputChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.ExecuteUbergraph_OverviewScreen
	 */
	struct UOverviewScreen_C_ExecuteUbergraph_OverviewScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OverviewScreen.OverviewScreen_C.OverviewScreenStateChanged__DelegateSignature
	 */
	struct UOverviewScreen_C_OverviewScreenStateChanged__DelegateSignature_Params
	{
	public:
		OverviewScreenState_EOverviewScreenState                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		OverviewScreenState_EOverviewScreenState                   PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
