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
	 * WidgetBlueprintGeneratedClass NavigationWidget.NavigationWidget_C
	 * Size -> 0x0270 (FullSize[0x0590] - InheritedSize[0x0320])
	 */
	class UNavigationWidget_C : public UTBLUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBackgroundBlur*                                     Blur;                                                    // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBotBlackActionBar_C*                                BotBlackActionBar;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              CancelMatchmaking;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              FriendsButton;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadSelectButton_C*                              GamepadSelectButton;                                     // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              InviteButton;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              LeaveSessionButton;                                      // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMatchmakingStatus_C*                                MatchmakingStatus;                                       // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationTopBar_C*                                 NavigationTopBar;                                        // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_9;                                               // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           PlayerProgressBarScaleBox;                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              QuitButton;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            QuitButtonOverlay;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResumeButton_C*                                     ResumeButton;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SubMenuOverlay;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SubOverlaySizeBox;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       VersionTextBlock;                                        // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FNavigationMenuStack                                MenuStack;                                               // 0x03B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ChangeCameraEvent;                                       // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DeselectMenus;                                           // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int                                                        CurrentTabIndex;                                         // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U5UO[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavigationMenuData_C*                               MenuTreeHead;                                            // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bHideLogo;                                               // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_P3XP[0x3];                                   // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        PlayerInputIdNum;                                        // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Request_Input;                                           // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_NCM9[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, class UTBLScreenWidget*>               WidgetsByClass;                                          // 0x0420(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       Show_Resume_Button_;                                     // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_Q4TU[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Resume_Clicked;                                          // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Fired_Button_Action;                                     // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UNavigationButton_C*>                         NavigationButtonArray;                                   // 0x0498(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FDialogHandle                                       QuitDialogueHandle;                                      // 0x04A8(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       Had_Focus_Before_PIE_hack;                               // 0x04AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bReselectFirstMenuItem;                                  // 0x04AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_HT6S[0x2];                                   // 0x04AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        PrevTabIndex;                                            // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_24AL[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavigationMenuData_C*                               TempNavigationData;                                      // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        TempButtonIndex;                                         // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        ParentButtonIndex;                                       // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ButtonIDsToCallOnMenuClicked[0x50];                      // 0x04C8(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class FString, int>                                   NotificationCountMap;                                    // 0x0518(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bConsoleActionsActive;                                   // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HLXZ[0x3];                                   // 0x0569(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        ParentIndex;                                             // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerProgressBar_C*                                PlayerProgressBar;                                       // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        ActiveButtonCount;                                       // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BEQR[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMenuChanged;                                           // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class UWidget* K2_GetFocusWidget();
		void SelectSiblingMenuItem(int IndexDelta, bool CallCameraEvent, bool* HasChangedTab);
		void IsFrontend(bool* IsFrontend);
		void UpdateNavigationForConsole(const class FText& ScreenName);
		void UpdateNotifications(TArray<int>* NotificationCounts);
		void UpdateMenuDataUI(class UNavigationMenuData_C* NavigationMenuData);
		bool ShouldCallOnMenuClickedWithShoulderButtons();
		void GamepadInGame(const struct FKeyEvent& KeyEvent, const struct FGeometry& Geomtry);
		void IsSameMenu(class UNavigationMenuData_C* NavigationMenuData, bool* bIsSame);
		void GamepadInputFrontend(const struct FKeyEvent& KeyEvent, const struct FGeometry& Geomtry);
		void UpdateButtonIndex(int IncrementValue, class UNavigationMenuData_C** NewSubMenu);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ChangeMenu(class UNavigationMenuData_C* MenuData, bool bCallCameraEvent, bool* MenuChanged);
		void Focus_on_first_menu_button();
		void ChangeButtonStyle(class UNavigationButton_C* Button, const class FText& Index);
		void HoverChivalryButton(class UChivalryButton_C* Button, class UTexture2D* Icon);
		void InitChivalryButton(class UChivalryButton_C* Button, class UTexture2D* Normal, class UTexture2D* Highlight, float Width, float Height);
		class UTBLScreenWidget* GetWidgetFromClass(class UClass* Class);
		void ChangeCameraSubMenu(int SubMenuIndex);
		void ChangeCamera(const class FString& CameraName);
		void OnMenuClicked(int* ButtonIndex, bool bCallCamera);
		void UpdateNavigationButtonsFromMenuStack();
		void Construct();
		void LoadScreen();
		void BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void OnUpdate();
		void Yes_Exit();
		void No_Do_Not();
		void OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState);
		void Pop_Current_Menu();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void ReselectFirstMenuItem(bool bCallCameraEvent);
		void OpenFriends();
		void TryQuitting();
		void HighlightItem(int Index);
		void FocusOnCurrentScreen();
		void BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
		void BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature();
		void On_Is_Matchmaking_Changed(bool bIsMatchmaking);
		void TurnOnNotfication(const class FText& ButtonID, bool bTurnOn);
		void OnNativeSessionStatusChanged_Event_1();
		void OnChiv2MainButtonClicked(class UStatefulButton_C* Button);
		void Destruct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature();
		void DirectOpenServerBrowser();
		void SelectMenuItem(int Index, bool CallCameraEvent);
		void ExecuteUbergraph_NavigationWidget(int EntryPoint);
		void OnMenuChanged__DelegateSignature(bool Changed);
		void Fired_Button_Action__DelegateSignature(const class FName& Button_ID);
		void Resume_Clicked__DelegateSignature();
		void DeselectMenus__DelegateSignature();
		void ChangeCameraEvent__DelegateSignature(const class FString& CameraName, const class FName& FrontendEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
