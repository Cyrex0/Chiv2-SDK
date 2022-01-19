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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass MainMenuManager.MainMenuManager_C
	 * Size -> 0x0170 (FullSize[0x05B0] - InheritedSize[0x0440])
	 */
	class UMainMenuManager_C : public UTBLScreenManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAutoInvalidationBox*                                AutoInvalidationBox_4;                                   // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Capsule_BottomRight;                                     // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ChatLayer;                                               // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DebugLayer;                                              // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFrontendCapsule_OngoingEvent_C*                     FrontendCapsule_OngoingEvent;                            // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGlobalGameNotificationsContainer_C*                 GlobalGameNotificationsContainer;                        // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGlobalMessageWidget_C*                              GlobalMessageWidget;                                     // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUDWidget_C*                                        HUDWidget;                                               // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeymapWidget_C*                                     KeymapWidget;                                            // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MainMenuLayer;                                           // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MenuLayer;                                               // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNativePartyWidget_BP_C*                             NativePartyWidget_BP;                                    // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            NavigationOverlay;                                       // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            NDALayer;                                                // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialsLinkBar_C*                                   NewsletterSignupWidget;                                  // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPartyList_C*                                        PartyList_222;                                           // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PersistentElements;                                      // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ScreenLayer;                                             // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLSafeZone*                                        TBLSafeZone_1;                                           // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            TutorialHUDLayer;                                        // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLScreenWidget*                                    Frontend_Root;                                           // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UTBLScreenWidget*>                            Screens;                                                 // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UWidget*>                                     Widgest_To_Disable_In_Public_Testing;                    // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FText                                                Changelist;                                              // 0x0510(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Changelist_Format_String;                                // 0x0528(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Background_Is_Faded_Out;                                 // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E6Q7[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CustomizationClass[0x28];                                // 0x0541(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FDialogHandle                                       CustomizationLoadDialog;                                 // 0x0570(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       CustomizationLoading;                                    // 0x0574(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2PW1[0x3];                                   // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavigationWidget_C*                                 NavigationWidget;                                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNDASplashScreen_C*                                  NDASpashScreenWidget;                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        AutoCloseNDASeconds;                                     // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K2MY[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         NotificationWidget;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TutorialHUDLayerShowing;                                 // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GY3Q[0x3];                                   // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDialogHandle                                       EscapeTutorialDialogHandle;                              // 0x059C(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UGameUnavailableWidget_C*                            GameUnavailableScreen;                                   // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTBLDialogManager*                                   DialogManager;                                           // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UWidget* K2_GetFocusWidget();
		void GetFadeDuration(float* Duration);
		void Push_Cinematic_Widget(class UClass* Widget_class, class UWidget** Widget);
		void OnFreeWeekendCapsuleClick();
		void UpdatePromoCapsule();
		void ShowGameUpdateTakeoverScreenIfNeeded(bool* bWasShown);
		class UTBLKeymapWidget* GetKeymapWidget();
		void AddAlphaBlockingScreen();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Camera_event(const class FString& CameraName, const class FName& FrontendEvent);
		void Snap_Fade_In();
		void CustomEvent_1();
		void Add_Cinematic_Mode_Change_Listener();
		void Release_fade_out__fade_in_(class UObject* Requester);
		void Request_fade_out(class UObject* Requester);
		void Release_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode);
		void Request_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode);
		void Accept_the_NDA();
		void Release_cinematic_bars(class UObject* Requester);
		void ShowPlayingWidgets();
		void ShowMainMenuWidgets();
		void YesExitTutorial();
		void NoExitTutorial();
		void Navigation_Back_Button_Pressed();
		void Request_cinematic_bars(class UObject* Requester, CinematicBarsMode_ECinematicBarsMode Mode);
		void OnInitialized();
		void Remove_Cinematic_Widget(class UWidget* Widget);
		void RequestRandomHint(float Chance, TBL_EHintType HintKey, TBL_EHintInputType HintInputType);
		void On_Gamepad_Input_Mode_Changed(TBL_EGamepadInputMode GamepadInputMode);
		void Update_Mouse_Cursor_Stack();
		void ToggleKeymap();
		void RequestSpecificHint(const class FName& HintKey);
		void Show_Debug_Menu();
		void OnMenuChanged(bool Changed);
		void OnProfileDataLoaded();
		void ExecuteUbergraph_MainMenuManager(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
