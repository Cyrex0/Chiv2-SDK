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
	 * Function MainMenuManager.MainMenuManager_C.K2_GetFocusWidget
	 */
	struct UMainMenuManager_C_K2_GetFocusWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.GetFadeDuration
	 */
	struct UMainMenuManager_C_GetFadeDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Push Cinematic Widget
	 */
	struct UMainMenuManager_C_Push_Cinematic_Widget_Params
	{
	public:
		class UClass*                                              Widget_class;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.OnFreeWeekendCapsuleClick
	 */
	struct UMainMenuManager_C_OnFreeWeekendCapsuleClick_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.UpdatePromoCapsule
	 */
	struct UMainMenuManager_C_UpdatePromoCapsule_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.ShowGameUpdateTakeoverScreenIfNeeded
	 */
	struct UMainMenuManager_C_ShowGameUpdateTakeoverScreenIfNeeded_Params
	{
	public:
		bool                                                       bWasShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.GetKeymapWidget
	 */
	struct UMainMenuManager_C_GetKeymapWidget_Params
	{
	public:
		class UTBLKeymapWidget*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.AddAlphaBlockingScreen
	 */
	struct UMainMenuManager_C_AddAlphaBlockingScreen_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.OnPreviewKeyDown
	 */
	struct UMainMenuManager_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.OnKeyUp
	 */
	struct UMainMenuManager_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.OnKeyDown
	 */
	struct UMainMenuManager_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Camera event
	 */
	struct UMainMenuManager_C_Camera_event_Params
	{
	public:
		class FString                                              CameraName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                FrontendEvent;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Snap Fade In
	 */
	struct UMainMenuManager_C_Snap_Fade_In_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.CustomEvent_1
	 */
	struct UMainMenuManager_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Add Cinematic Mode Change Listener
	 */
	struct UMainMenuManager_C_Add_Cinematic_Mode_Change_Listener_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Release fade out (fade in)
	 */
	struct UMainMenuManager_C_Release_fade_out__fade_in__Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Request fade out
	 */
	struct UMainMenuManager_C_Request_fade_out_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Release cinematic HUD mode
	 */
	struct UMainMenuManager_C_Release_cinematic_HUD_mode_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Request cinematic HUD mode
	 */
	struct UMainMenuManager_C_Request_cinematic_HUD_mode_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Accept the NDA
	 */
	struct UMainMenuManager_C_Accept_the_NDA_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Release cinematic bars
	 */
	struct UMainMenuManager_C_Release_cinematic_bars_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.ShowPlayingWidgets
	 */
	struct UMainMenuManager_C_ShowPlayingWidgets_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.ShowMainMenuWidgets
	 */
	struct UMainMenuManager_C_ShowMainMenuWidgets_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.YesExitTutorial
	 */
	struct UMainMenuManager_C_YesExitTutorial_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.NoExitTutorial
	 */
	struct UMainMenuManager_C_NoExitTutorial_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Navigation Back Button Pressed
	 */
	struct UMainMenuManager_C_Navigation_Back_Button_Pressed_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Request cinematic bars
	 */
	struct UMainMenuManager_C_Request_cinematic_bars_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicBarsMode_ECinematicBarsMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.OnInitialized
	 */
	struct UMainMenuManager_C_OnInitialized_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Remove Cinematic Widget
	 */
	struct UMainMenuManager_C_Remove_Cinematic_Widget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.RequestRandomHint
	 */
	struct UMainMenuManager_C_RequestRandomHint_Params
	{
	public:
		float                                                      Chance;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintType                                              HintKey;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintInputType                                         HintInputType;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.On Gamepad Input Mode Changed
	 */
	struct UMainMenuManager_C_On_Gamepad_Input_Mode_Changed_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Update Mouse Cursor Stack
	 */
	struct UMainMenuManager_C_Update_Mouse_Cursor_Stack_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.ToggleKeymap
	 */
	struct UMainMenuManager_C_ToggleKeymap_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.RequestSpecificHint
	 */
	struct UMainMenuManager_C_RequestSpecificHint_Params
	{
	public:
		class FName                                                HintKey;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.Show Debug Menu
	 */
	struct UMainMenuManager_C_Show_Debug_Menu_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.OnMenuChanged
	 */
	struct UMainMenuManager_C_OnMenuChanged_Params
	{
	public:
		bool                                                       Changed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.OnProfileDataLoaded
	 */
	struct UMainMenuManager_C_OnProfileDataLoaded_Params
	{
	};

	/**
	 * Function MainMenuManager.MainMenuManager_C.ExecuteUbergraph_MainMenuManager
	 */
	struct UMainMenuManager_C_ExecuteUbergraph_MainMenuManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
