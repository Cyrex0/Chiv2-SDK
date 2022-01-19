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
	 * WidgetBlueprintGeneratedClass PlayingMenuManager.PlayingMenuManager_C
	 * Size -> 0x0360 (FullSize[0x07A0] - InheritedSize[0x0440])
	 */
	class UPlayingMenuManager_C : public UTBLScreenManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ChatMaximize;                                            // 0x0448(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowTheHud;                                              // 0x0450(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HideTheHud;                                              // 0x0458(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CinematicLayerFadeIn;                                    // 0x0460(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CinematicLayerFadeOut;                                   // 0x0468(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CinematicsFadeIn;                                        // 0x0470(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CinematicsFadeOut;                                       // 0x0478(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UAutoBalance_Warning_C*                              AutoBalance_Warning;                                     // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAutoInvalidationBox*                                AutoInvalidationBox_4;                                   // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ChatLayer;                                               // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatWithInput_C*                                    ChatWithInput;                                           // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCinematicBars_C*                                    CinematicBars;                                           // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            CinematicLayer;                                          // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCombatZone_Warning_C*                               CombatZone_Warning;                                      // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DebugLayer;                                              // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFadeWidget_C*                                       FadeWidget;                                              // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            GameAddedLayer;                                          // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameModeMessageContainer_C*                         GameModeMessageContainer;                                // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameStatusNotificationWidget_C*                     GameStatusNotificationWidget;                            // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGlobalGameNotificationsContainer_C*                 GlobalGameNotificationsContainer;                        // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Hud_Layer;                                               // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUDWidget_C*                                        HUDWidget;                                               // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeymapWidget_C*                                     KeymapWidget;                                            // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKillFeed_C*                                         KillFeed;                                                // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MainOverlay;                                             // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Menu_Layer;                                              // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNextSpawnWaveWidget_C*                              NextSpawnWaveWidget;                                     // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameModeWidgetContainer_C*                          ObjectiveBar;                                            // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OverCinematicBarsLayer;                                  // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OverHUDLayer;                                            // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverviewScreen_C*                                   OverviewScreen;                                          // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPartyList_C*                                        PartyList;                                               // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Persistent;                                              // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPostDeathScreen_C*                                  PostDeathScreen;                                         // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PostGameLayer;                                           // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpectatorHudWidget_C*                               SpectatorHudWidget;                                      // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLSafeZone*                                        TBLSafeZone_1;                                           // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       TBLTextBlock_67;                                         // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTutorialAreaWidget_C*                               TutorialAreaWidget;                                      // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTutorialPauseScreen_C*                              TutorialPauseScreen;                                     // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWarningsWidget_C*                                   WarningsWidget;                                          // 0x0590(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerList_C*                                       ScoreboardWidget;                                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             Legacy_Class_Select;                                     // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             TeamSelectWidget;                                        // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             LoadoutWidget;                                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTBLScreenWidget*                                    Post_Game_Widget;                                        // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         Debug_Menu;                                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UClass*, class UWidget*>                        Cinematic_Widgets;                                       // 0x05C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       Cinematic_Mode_Enabled_;                                 // 0x0618(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Pending_cinematic_mode;                                  // 0x0619(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DBDE[0x6];                                   // 0x061A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Cinematic_bars_mode_changed;                             // 0x0620(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Cinematic_mode_enabled_changed;                          // 0x0630(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Cinematic_HUD_mode_changed;                              // 0x0640(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              Cinematic_Partial_requesters[0x50];                      // 0x0650(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              Cinematic_Full_requesters[0x50];                         // 0x06A0(0x0050) UNKNOWN PROPERTY: SetProperty
		CinematicMenuMode_ECinematicMenuMode                       Current_cinematic_mode;                                  // 0x06F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3026[0x7];                                   // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Cinematic_Mode_Change_Listeners[0x10];                   // 0x06F1(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class UTeamSelectScreen_C*                                 NewVar_1;                                                // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        NewVar_2;                                                // 0x0710(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeStampOfPostDeathScreen;                              // 0x0714(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostDeathDuration;                                       // 0x0718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YRUN[0x4];                                   // 0x071C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             FadeOutStarted;                                          // 0x0720(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             FadeOutComplete;                                         // 0x0730(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Still_Needs_to_Show_Loadout_First_Time;                  // 0x0740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E0MI[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPushCinematicWidget;                                   // 0x0748(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       CinematicLayerFadedIn;                                   // 0x0758(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8QN3[0x7];                                   // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASpawnWave*                                          JoinedSpawnWave;                                         // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PostDeathTimerHandle;                                    // 0x0768(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       HasDied;                                                 // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0BX4[0x7];                                   // 0x0771(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVotekickWidget_C*                                   VotekickWidget_1;                                        // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SkipTutorialTimerHandler;                                // 0x0780(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int                                                        SkipMessageId;                                           // 0x0788(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_00ZB[0x4];                                   // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTutorialSkipStation;                                   // 0x0790(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetFadeDuration(float* Duration);
		void Push_Cinematic_Widget(class UClass* Widget_class, class UWidget** Widget);
		class UTBLKeymapWidget* GetKeymapWidget();
		void DetermineScoreEventType(const struct FScoreEventStruct& ScoreEventStruct, bool* _);
		void IsVisibleCinematicWidget(class UClass* WidgetClass, bool* bIsVisible);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void EnableFocusMode(bool Enable_);
		struct FTimerHandle OnDeathRecap(float Timer);
		void UpdateSpectatorHudVisibility(class UObject* Pawn);
		void Handle_Cinematic_HUD_Requests_Changed();
		void ResetGuiBackgroundCount();
		void AddWidgetToScreen(class UWidget* Widget, SlateCore_EHorizontalAlignment HAlign, SlateCore_EVerticalAlignment VAlign, class UOverlay* Overlay);
		void Get_Faction(TBL_EFaction* Faction);
		void Construct();
		void Toggle_Loadout_Screen(bool bScoreboardMode);
		void Show_InGame_Menu();
		void Start_of_game_actions();
		void ShowVOPersonalMenu(const struct FKey& Key);
		void ShowVOTacticalMenu(const struct FKey& Key);
		void ShowHudLayer();
		void HideHudLayer();
		void HideVOMenu();
		void Hide_Overview_Screen();
		void OpenDebugMenu(class UBlueprintDebugMenuComponent* DebugMenuComponent);
		void Remove_Debug_Menu();
		void Remove_Cinematic_Widget(class UWidget* Widget);
		void Show_Overview_Screen();
		void Request_cinematic_bars(class UObject* Requester, CinematicBarsMode_ECinematicBarsMode Mode);
		void Release_cinematic_bars(class UObject* Requester);
		void Open_Loadout();
		void BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On_Mode_Changed__DelegateSignature(CinematicBarsMode_ECinematicBarsMode Mode);
		void Request_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode);
		void Release_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode);
		void Update_cinematic_requests_soon();
		void Request_fade_out(class UObject* Requester);
		void Release_fade_out__fade_in_(class UObject* Requester);
		void BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics_Mode_Changed__DelegateSignature(CinematicMenuMode_ECinematicMenuMode New_mode, CinematicMenuMode_ECinematicMenuMode Previous_mode);
		void ShowVOEmoteMenu(const struct FKey& Key);
		void OnClientPossessedPawn_Event_1(class APawn* NewPawn);
		void OnPossessedPawn(class APawn* Pawn);
		void OnPossessedPawn_Event_1(class APawn* NewPawn);
		void OnTeamChanged_Event_1(class ATBLTeam* NewTeam);
		void OnTeamChanged(class ATBLTeam* NewTeam);
		void Add_Cinematic_Mode_Change_Listener();
		void OnDeathRecapReplicated_Local();
		void HidePostDeath();
		void Post_Death_Possessed_New_Pawn();
		void Snap_Fade_In();
		void Toggle_Team_Select_Screen(bool bScoreboardMode);
		void Event_Open_Team_Select_Screen();
		void OnMatchEnded_Event_1();
		void FadeOutCinematicLayer();
		void FadeInCinematicLayer();
		void BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature(OverviewScreenState_EOverviewScreenState NewState, OverviewScreenState_EOverviewScreenState PreviousState);
		void OnZoomDisabled_Event_1();
		void OnZoomEnabled_Event_1();
		void Toggle_Player_List_Screen(bool bShowHide);
		void FadeOutFinished();
		void FadeOutStart();
		void SetHudVisibility(bool bVisible);
		void Force_HUD_Visible();
		void Show_Radial_Inventory_Screen();
		void Hide_Radial_Inventory_Screen();
		void ShowLoadoutOnFirstDeath();
		void OnPushCinematicWidgetEvent(class UWidget* Widget);
		void BP_FadeOut(float PlaybackSpeed);
		void BP_FadeIn(float PlaybackSpeed);
		void Destruct();
		void OnSavedClassUnavailable(class UClass* RequestedSubclass);
		void InitializeScoreEvents();
		void OnScoreEvent_Event_1(const struct FScoreEventStruct& ScoreEvent);
		void Team_Select_Input_Pressed();
		void SpawnWaveJoined(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess);
		void ShowTutorialAreaWidget();
		void HideTutorialAreaWidget();
		void UpdateTutorialArea(const class FText& Title, const class FText& NarratorText);
		void AddTutorialAction(const class FText& ActionText, const class FText& ControllerActionText, const class FText& ActionKeyboardCallout, const class FText& ActionControllerCallout, const class FText& ActionDesc, int ActionMaxCount, float SkipAfterTime);
		void ClearTutorialActionList(bool Fade);
		void UpdateTutorialActionCount(const class FText& ActionText, int NewCount);
		void UpdateNarratorText(const class FText& NarratorText);
		void UpdateTutorialProgress(float Progress);
		void ForwardSpawnFade();
		void ForwardSpawnFadeIn();
		void RequestRandomHint(float Chance, TBL_EHintType HintKey, TBL_EHintInputType HintInputType);
		void EnableTutorialTimer(float TimerLength);
		void DisableTutorialTimer();
		void ResetTutorialTimer();
		void TimerSuccess(bool ShouldDisable);
		void OnPlayerSelectedSpectatorMode_Event_1(bool IsPlayerSpectator);
		void BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On_Entered_Input_Mode__DelegateSignature();
		void BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On_Left_Input_Mode__DelegateSignature();
		void InitWithCallouts(TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts, TArray<struct FTutorialCalloutActionStruct> ControllerCallouts);
		void ClearCallouts();
		void NextCallout();
		void RestartCallouts();
		void ResetTutorialChallenges();
		void TutorialStationComplete();
		void TutorialActionFailed(const class FText& Action);
		void ShowTutorialSkipMessage();
		void OnPromptPlayerMessageReply_Event_1(int MessageId, bool Response, class ATBLPlayerController* Player);
		void AutoHideVOTimerStarted();
		void OpenTutorialPauseScreen(const class FText& StationTitle, const class FText& ChallengeIntro, const class FText& ChallengeTitle, TArray<struct FTutorialPauseScreenStep> Steps, const class FText& HintDesc, class UMediaSource* Video, float ContinueTIme);
		void HideChat(bool ShouldHide);
		void ToggleKeymap();
		void CancelSkipChallenge();
		void FadeCalloutUsableAtIndex(int Index, bool Fade);
		void CompleteTutorial();
		void Show_Loadout_First_Time_Only();
		void RequestSpecificHint(const class FName& HintKey);
		void ExecuteUbergraph_PlayingMenuManager(int EntryPoint);
		void OnTutorialSkipStation__DelegateSignature();
		void OnPushCinematicWidget__DelegateSignature(class UWidget* Widget);
		void FadeOutComplete__DelegateSignature();
		void FadeOutStarted__DelegateSignature();
		void Cinematic_HUD_mode_changed__DelegateSignature(CinematicMenuMode_ECinematicMenuMode Mode);
		void Cinematic_mode_enabled_changed__DelegateSignature(bool Enabled_);
		void Cinematic_bars_mode_changed__DelegateSignature(CinematicBarsMode_ECinematicBarsMode Mode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
