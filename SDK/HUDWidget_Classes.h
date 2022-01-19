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
	 * WidgetBlueprintGeneratedClass HUDWidget.HUDWidget_C
	 * Size -> 0x0189 (FullSize[0x0539] - InheritedSize[0x03B0])
	 */
	class UHUDWidget_C : public UTBLScreenWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Testing_In_anim;                                         // 0x03B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            ActorInCrosshairOverlay;                                 // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UActorInCrosshairText_C*                             ActorInCrosshairText_C_16;                               // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        AlwaysvisibleLayer;                                      // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        AlwaysvisibleLayer_2;                                    // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAutoInvalidationBox*                                AutoInvalidationBox_8;                                   // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCrosshair_C*                                        Crosshair_1;                                             // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameMode_FFA_C*                                     FFAProgressBar;                                          // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            HideinFULLcinematicsmodelayer;                           // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            HideinPARTIALcinematicsmodelayer;                        // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUDAlwaysVisibleContainer_C*                        HUDAlwaysVisibleContainer;                               // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUDMarkerContainer_C*                               HUDMarkerContainer;                                      // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInputHintsWidget_C*                                 InputHintsWidget;                                        // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_2;                                       // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInventoryWidget_C*                                  InventoryWidget_C_1;                                     // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InventoryWidgetOverlay;                                  // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULookAtContainer_C*                                  LookAtContainer;                                         // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStage_TO_C*                                         ObjectiveProgressBar;                                    // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     PinnedComponentWidgetSwitcher;                           // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPinnedInteractableWidget_C*                         PinnedInteractableWidget;                                // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPinnedStatsWidget_C*                                PinnedStatsWidget;                                       // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerScoreList*                                    PlayerScoreList_1;                                       // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAutoInvalidationBox*                                RadialInventoryInvalidationBox;                          // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadialInventoryWidget_C*                            RadialInventoryWidget;                                   // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadialVOMenu_C*                                     RadialVOMenu;                                            // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USiegeEngineHUD_C*                                   SiegeEngineHUD;                                          // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStatusbarContainer_C*                               StatusbarContainer_207;                                  // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTapOutWidget_C*                                     TapOutWidget;                                            // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStage_TDM_C*                                        TDMProgressBar;                                          // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Visible_only_when_pawn_alive_Layer;                      // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            VisibleonlywhenpawnaliveLayer_Crosshair;                 // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Visibleonlywhenpawndeadlayer;                            // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        VisibleWhenDowned;                                       // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        VisibleWhenSpectating;                                   // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAutoInvalidationBox*                                VORadialInvalidationBox;                                 // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUDMarkerContainer_C*                               ZoneMarkerContainer_74;                                  // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      LastPawnMaxHealth;                                       // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JTXX[0x4];                                   // 0x04DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        VOHideTimerHandle;                                       // 0x04E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		CinematicMenuMode_ECinematicMenuMode                       Cinematics_mode;                                         // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZJFG[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Cinematics_Mode_Changed;                                 // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		CinematicMenuMode_ECinematicMenuMode                       Previous_mode;                                           // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RMZK[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         GameModeWidget;                                          // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PostVoMenuWindow;                                        // 0x0510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XT79[0x7];                                   // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTBLScreenWidget*>                            RadialMenus;                                             // 0x0518(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       StatsComponentFocused;                                   // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S2WY[0x3];                                   // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FocusedHealthFadeTime;                                   // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DownedVisibilityTimerHandle;                             // 0x0530(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFocusDisabled;                                         // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		class UWidget* OnGenerateLevelUpRow_1(const struct FLevelUpResult& LevelUpEvent);
		class UWidget* OnGenerateRow_1(const struct FScoreEventStruct& ScoreEvent);
		bool BP_OnBlockKeyPress(TBL_EWeaponAbilitySlotKey WeaponAbilitySlotKey);
		void IsRadialInventoryOpen(bool* IsOpen);
		void IsVOPickerOpen(bool* IsVisible);
		void EnableFocusMode(bool Enable);
		void GetCurrentTeam(class ATBLTeam** Team);
		void UpdateLayersVisibility(bool IsPawnValid, bool IsSpectatorPawn, bool IsPlayerSelectedSpectatorMode, bool IsTeamValid);
		void CanPlayEmoteMenu(bool* Return_Value);
		void OnLoaded_B028355C46F5520A2991C6947E015364(class UClass* Loaded);
		void OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent);
		void On_My_Pawn_Died();
		void On_Possessed_New_Pawn(class APawn* Pawn);
		void OnPossessedPawn_Event_2(class APawn* NewPawn);
		void ShowVOTacticalMenu(const struct FKey& Key);
		void ShowVOPersonalMenu(const struct FKey& Key);
		void HideVOMenu();
		void OnMount_Event_1(class AActor* AttachParent, class USiegeMountPoint* MountPoint);
		void OnDismount_Event_1(class AActor* AttachParent, TBL_EDismountType DismountType);
		void InitializeTapOut(class APawn* Pawn);
		void InitializePinnedInteractable(class APawn* Pawn);
		void OnInteractableFocused(class UInteractableComponent* InteractableComponent);
		void OnInteractableLostFocus();
		void Set_cinematics_mode(CinematicMenuMode_ECinematicMenuMode New_mode);
		void Update_full_layer_opacity(float Value);
		void Update_parial_layer_opacity(float Value);
		void ShowVOEmoteMenu();
		void OnClientPossessedPawn_Event_1(class APawn* NewPawn);
		void OnTeamChanged(class ATBLTeam* NewTeam);
		void OnTeamChanged_Event_1(class ATBLTeam* NewTeam);
		void BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature(const class FName& Text, const class FString& ActionName, bool Enable, const class FText& HintText);
		void Construct();
		void InitializeMountedWidgets();
		void OnStatsComponentFocused_Event_1(class UStatsComponent* StatsComponent);
		void OnStatsComponentLostFocused_Event_1();
		void BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature(bool IsActive);
		void HideNameplate(bool _);
		void InitializeGameModeWidget();
		void ShowRadialInventory();
		void HideRadialInventory();
		void InitializeProgressUI();
		void StatsComponentHitFade();
		void OnDamageCaused_Event_1(const struct FDamageTakenEvent& DamageEvent);
		void ReshowNamePlate();
		void OnJoinWave(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess);
		void OnUseableActorInteractableFocused_Event_1(class UInteractableComponent* InteractableComponent);
		void OnUseableActorInteractableLostFocused_Event_1(class UInteractableComponent* InteractableComponent);
		void OnInitialized();
		void PostDeathHidden();
		void AutoHideVOMenuTimerStarted();
		void PostCombatStateHideDowned();
		void DisableFocus();
		void EnableFocus(class UInteractableComponent* InteractableComponent);
		void OnApplyCondition_Event_1(class AActor* Actor, TBL_EConditionType Condition);
		void OnRemoveCondition_Event_1(class AActor* Actor, TBL_EConditionType Condition);
		void ExecuteUbergraph_HUDWidget(int EntryPoint);
		void Cinematics_Mode_Changed__DelegateSignature(CinematicMenuMode_ECinematicMenuMode New_mode, CinematicMenuMode_ECinematicMenuMode Previous_mode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
