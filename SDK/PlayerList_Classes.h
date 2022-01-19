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
	 * WidgetBlueprintGeneratedClass PlayerList.PlayerList_C
	 * Size -> 0x02A0 (FullSize[0x0650] - InheritedSize[0x03B0])
	 */
	class UPlayerList_C : public UTBLScreenWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    MenuFocusedFadeIn;                                       // 0x03B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ContextMenuFadeIn;                                       // 0x03C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UVerticalBox*                                        AgathaPlayerList;                                        // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerListBase_C*                                   AgathaTeamStatBase;                                      // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackButton_C*                                       BackButton_C_1;                                          // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     BackgroundBlur_38;                                       // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBotBlackActionBar_C*                                BotBlackActionBar;                                       // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              CloseButton;                                             // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ContextualMenuPopup;                                     // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DialogBoxBackground;                                     // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DialogBoxBorder;                                         // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoveredBackground;                                       // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoveredBackground_2;                                     // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoveredBackground_3;                                     // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_80;                                                // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MasonPanelSizeBox;                                       // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MasonPlayerList;                                         // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerListBase_C*                                   MasonTeamStatBase;                                       // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      MuteButton;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_84;                                              // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      ReportButton;                                            // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ReportOverlay;                                           // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResumeButton_C*                                     ResumeButton_87;                                         // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScoreboardWidget_C*                                 ScoreboardWidget_73;                                     // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedBackground;                                      // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedBackground_2;                                    // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedBackground_3;                                    // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       ServerName;                                              // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_5;                                               // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SpectatorContainerVerticalBox;                           // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            SpectatorWrapBox;                                        // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       TBLTextBlock_1;                                          // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       TBLTextBlock_77;                                         // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       TitleTextBlock;                                          // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleTextDivider;                                        // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniversalKeyBindingWidget_C*                        UniversalKeyBindingWidget;                               // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      UserInfoButton;                                          // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            UserInfoContainer;                                       // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      VoteKickButton;                                          // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsFFA;                                                   // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EX8C[0x3];                                   // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        MaxNumPlayersPerPage;                                    // 0x0504(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ATBLPlayerState*>                             LeftPagePlayers;                                         // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ATBLPlayerState*>                             PreviousLeftPagePlayers;                                 // 0x0518(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ATBLPlayerState*>                             PreviousRightPagePlayers;                                // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ATBLPlayerState*>                             RightPagePlayers;                                        // 0x0538(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ATBLPlayerState*>                             SpectatorPlayers;                                        // 0x0548(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ATBLPlayerState*>                             PreviousSpectatorPlayers;                                // 0x0558(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UPlayerListEntry_C*>                          LeftSidePlayerEntries;                                   // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UPlayerListEntry_C*>                          RightSidePlayerEntries;                                  // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UPlayerListEntry_C*>                          SpectatorPlayerEntries;                                  // 0x0588(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TMap<PlayerListPositionType_EPlayerListPositionType, int>  NumberOfInitialListEntryWidgets;                         // 0x0598(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<PlayerListPositionType_EPlayerListPositionType, class UPanelWidget*> PlayerListPanelMap;                                      // 0x05E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       bIsToggle;                                               // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DIVR[0x7];                                   // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLPlayerState*                                     ContextPopupPlayerState;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerReportWidget_C*                               ReportWidget;                                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMuteButton();
		void ShouldShowNativeProfileForHardwarePlatform(class ATBLPlayerState* PlayerState, bool* bShow);
		void ShouldShowNativeProfileForPlatform(TBL_EPlatformType Platform, bool* bShow);
		void ShowPlatformSpecificUser(class ATBLPlayerState* Player);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GetPositionViaPlayerList(class UPanelWidget* PlayerList, PlayerListPositionType_EPlayerListPositionType* Position);
		void GetPlayerListViaPosition(PlayerListPositionType_EPlayerListPositionType Position, class UPanelWidget** PlayerList);
		int GetRankIndex(int LoopIndex, class UPanelWidget* PlayerList);
		void IsRightSide(class UPanelWidget* PlayerList, bool* bReturnValue);
		class UPlayerListEntry_C* CreatePlayerListEntry(TArray<class UPlayerListEntry_C*> ExistingEntries, class UPanelWidget* PlayerList);
		class UPlayerListEntry_C* GetAvailablePlayerEntry(TArray<class UPlayerListEntry_C*>* ExistingEntries, class UPanelWidget* PlayerList, int Index);
		void UpdatePageEntries(TArray<class UPlayerListEntry_C*>* PageEntries, TArray<class ATBLPlayerState*>* Players, class UPanelWidget* PlayerList);
		void HavePlayerStatesChanged(TArray<class ATBLPlayerState*> OldPlayerStates, TArray<class ATBLPlayerState*> NewPlayerStates, bool* bReturnValue);
		void CheckIfPlayerStatesHaveChanged();
		void GetFactionsSet();
		void GetSortedPlayerStates(TArray<class ATBLPlayerState*>* LeftPagePlayers, TArray<class ATBLPlayerState*>* RightPagePlayers);
		void PopulatePlayerList(class UPanelWidget* PlayerList, TArray<class UPlayerListEntry_C*> PlayerListArray);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnOpenedScreen();
		void PreConstruct(bool IsDesignTime);
		void OnLeftPagePlayersChanged();
		void OnRightPagePlayersChanged();
		void OnSpectatorPlayersChanged();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void PlayerLeveledUp(TArray<struct FLevelUpResult> LevelUpResult);
		void OnInitialized();
		void OnInputModeChange(TBL_EGamepadInputMode GamepadInputMode);
		void FocusOnPlayerList();
		void OnPlayerListEntryClicked(class ATBLPlayerState* PlayerState);
		void EnableContextMenu(class ATBLPlayerState* PlayerState);
		void DisableContextMenu();
		void BndEvt__VoteKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__ReportButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void OnClosedScreen();
		void OnReportClosed();
		void MenuFocused(bool IsFocused, bool Instant);
		void GoToMainMenu();
		void BndEvt__UserInfoButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__MuteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__ResumeButton_86_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature();
		void ExecuteUbergraph_PlayerList(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
