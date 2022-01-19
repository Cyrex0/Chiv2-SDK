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
	 * Function NavigationWidget.NavigationWidget_C.K2_GetFocusWidget
	 */
	struct UNavigationWidget_C_K2_GetFocusWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.SelectSiblingMenuItem
	 */
	struct UNavigationWidget_C_SelectSiblingMenuItem_Params
	{
	public:
		int                                                        IndexDelta;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallCameraEvent;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasChangedTab;                                           // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.IsFrontend
	 */
	struct UNavigationWidget_C_IsFrontend_Params
	{
	public:
		bool                                                       IsFrontend;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.UpdateNavigationForConsole
	 */
	struct UNavigationWidget_C_UpdateNavigationForConsole_Params
	{
	public:
		class FText                                                ScreenName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.UpdateNotifications
	 */
	struct UNavigationWidget_C_UpdateNotifications_Params
	{
	public:
		TArray<int>                                                NotificationCounts;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.UpdateMenuDataUI
	 */
	struct UNavigationWidget_C_UpdateMenuDataUI_Params
	{
	public:
		class UNavigationMenuData_C*                               NavigationMenuData;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.ShouldCallOnMenuClickedWithShoulderButtons
	 */
	struct UNavigationWidget_C_ShouldCallOnMenuClickedWithShoulderButtons_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.GamepadInGame
	 */
	struct UNavigationWidget_C_GamepadInGame_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FGeometry                                           Geomtry;                                                 // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.IsSameMenu
	 */
	struct UNavigationWidget_C_IsSameMenu_Params
	{
	public:
		class UNavigationMenuData_C*                               NavigationMenuData;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSame;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.GamepadInputFrontend
	 */
	struct UNavigationWidget_C_GamepadInputFrontend_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FGeometry                                           Geomtry;                                                 // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.UpdateButtonIndex
	 */
	struct UNavigationWidget_C_UpdateButtonIndex_Params
	{
	public:
		int                                                        IncrementValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNavigationMenuData_C*                               NewSubMenu;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.OnKeyDown
	 */
	struct UNavigationWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.ChangeMenu
	 */
	struct UNavigationWidget_C_ChangeMenu_Params
	{
	public:
		class UNavigationMenuData_C*                               MenuData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCallCameraEvent;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MenuChanged;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.Focus on first menu button
	 */
	struct UNavigationWidget_C_Focus_on_first_menu_button_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.ChangeButtonStyle
	 */
	struct UNavigationWidget_C_ChangeButtonStyle_Params
	{
	public:
		class UNavigationButton_C*                                 Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Index;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.HoverChivalryButton
	 */
	struct UNavigationWidget_C_HoverChivalryButton_Params
	{
	public:
		class UChivalryButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.InitChivalryButton
	 */
	struct UNavigationWidget_C_InitChivalryButton_Params
	{
	public:
		class UChivalryButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Normal;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Highlight;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Width;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.GetWidgetFromClass
	 */
	struct UNavigationWidget_C_GetWidgetFromClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTBLScreenWidget*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.ChangeCameraSubMenu
	 */
	struct UNavigationWidget_C_ChangeCameraSubMenu_Params
	{
	public:
		int                                                        SubMenuIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.ChangeCamera
	 */
	struct UNavigationWidget_C_ChangeCamera_Params
	{
	public:
		class FString                                              CameraName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.OnMenuClicked
	 */
	struct UNavigationWidget_C_OnMenuClicked_Params
	{
	public:
		int                                                        ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCallCamera;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.UpdateNavigationButtonsFromMenuStack
	 */
	struct UNavigationWidget_C_UpdateNavigationButtonsFromMenuStack_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.Construct
	 */
	struct UNavigationWidget_C_Construct_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.LoadScreen
	 */
	struct UNavigationWidget_C_LoadScreen_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UNavigationWidget_C_BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.OnUpdate
	 */
	struct UNavigationWidget_C_OnUpdate_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.Yes Exit
	 */
	struct UNavigationWidget_C_Yes_Exit_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.No Do Not
	 */
	struct UNavigationWidget_C_No_Do_Not_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.OnPlayerStateReplicated_Event_1
	 */
	struct UNavigationWidget_C_OnPlayerStateReplicated_Event_1_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.Pop Current Menu
	 */
	struct UNavigationWidget_C_Pop_Current_Menu_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UNavigationWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.ReselectFirstMenuItem
	 */
	struct UNavigationWidget_C_ReselectFirstMenuItem_Params
	{
	public:
		bool                                                       bCallCameraEvent;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.OpenFriends
	 */
	struct UNavigationWidget_C_OpenFriends_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.TryQuitting
	 */
	struct UNavigationWidget_C_TryQuitting_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.HighlightItem
	 */
	struct UNavigationWidget_C_HighlightItem_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.FocusOnCurrentScreen
	 */
	struct UNavigationWidget_C_FocusOnCurrentScreen_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
	 */
	struct UNavigationWidget_C_BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
	 */
	struct UNavigationWidget_C_BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.On Is Matchmaking Changed
	 */
	struct UNavigationWidget_C_On_Is_Matchmaking_Changed_Params
	{
	public:
		bool                                                       bIsMatchmaking;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.TurnOnNotfication
	 */
	struct UNavigationWidget_C_TurnOnNotfication_Params
	{
	public:
		class FText                                                ButtonID;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bTurnOn;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.OnNativeSessionStatusChanged_Event_1
	 */
	struct UNavigationWidget_C_OnNativeSessionStatusChanged_Event_1_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.OnChiv2MainButtonClicked
	 */
	struct UNavigationWidget_C_OnChiv2MainButtonClicked_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.Destruct
	 */
	struct UNavigationWidget_C_Destruct_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.PreConstruct
	 */
	struct UNavigationWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UNavigationWidget_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UNavigationWidget_C_BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UNavigationWidget_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature
	 */
	struct UNavigationWidget_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.DirectOpenServerBrowser
	 */
	struct UNavigationWidget_C_DirectOpenServerBrowser_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.SelectMenuItem
	 */
	struct UNavigationWidget_C_SelectMenuItem_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallCameraEvent;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.ExecuteUbergraph_NavigationWidget
	 */
	struct UNavigationWidget_C_ExecuteUbergraph_NavigationWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.OnMenuChanged__DelegateSignature
	 */
	struct UNavigationWidget_C_OnMenuChanged__DelegateSignature_Params
	{
	public:
		bool                                                       Changed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.Fired Button Action__DelegateSignature
	 */
	struct UNavigationWidget_C_Fired_Button_Action__DelegateSignature_Params
	{
	public:
		class FName                                                Button_ID;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.Resume Clicked__DelegateSignature
	 */
	struct UNavigationWidget_C_Resume_Clicked__DelegateSignature_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.DeselectMenus__DelegateSignature
	 */
	struct UNavigationWidget_C_DeselectMenus__DelegateSignature_Params
	{
	};

	/**
	 * Function NavigationWidget.NavigationWidget_C.ChangeCameraEvent__DelegateSignature
	 */
	struct UNavigationWidget_C_ChangeCameraEvent__DelegateSignature_Params
	{
	public:
		class FString                                              CameraName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                FrontendEvent;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
