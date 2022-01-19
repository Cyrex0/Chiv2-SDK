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
	 * Function HUDWidget.HUDWidget_C.OnGenerateLevelUpRow_1
	 */
	struct UHUDWidget_C_OnGenerateLevelUpRow_1_Params
	{
	public:
		struct FLevelUpResult                                      LevelUpEvent;                                            // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnGenerateRow_1
	 */
	struct UHUDWidget_C_OnGenerateRow_1_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.BP_OnBlockKeyPress
	 */
	struct UHUDWidget_C_BP_OnBlockKeyPress_Params
	{
	public:
		TBL_EWeaponAbilitySlotKey                                  WeaponAbilitySlotKey;                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.IsRadialInventoryOpen
	 */
	struct UHUDWidget_C_IsRadialInventoryOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.IsVOPickerOpen
	 */
	struct UHUDWidget_C_IsVOPickerOpen_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.EnableFocusMode
	 */
	struct UHUDWidget_C_EnableFocusMode_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.GetCurrentTeam
	 */
	struct UHUDWidget_C_GetCurrentTeam_Params
	{
	public:
		class ATBLTeam*                                            Team;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.UpdateLayersVisibility
	 */
	struct UHUDWidget_C_UpdateLayersVisibility_Params
	{
	public:
		bool                                                       IsPawnValid;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSpectatorPawn;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsPlayerSelectedSpectatorMode;                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsTeamValid;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.CanPlayEmoteMenu
	 */
	struct UHUDWidget_C_CanPlayEmoteMenu_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnLoaded_B028355C46F5520A2991C6947E015364
	 */
	struct UHUDWidget_C_OnLoaded_B028355C46F5520A2991C6947E015364_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnPlayerKilled_Event_1
	 */
	struct UHUDWidget_C_OnPlayerKilled_Event_1_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.On My Pawn Died
	 */
	struct UHUDWidget_C_On_My_Pawn_Died_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.On Possessed New Pawn
	 */
	struct UHUDWidget_C_On_Possessed_New_Pawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnPossessedPawn_Event_2
	 */
	struct UHUDWidget_C_OnPossessedPawn_Event_2_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.ShowVOTacticalMenu
	 */
	struct UHUDWidget_C_ShowVOTacticalMenu_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.ShowVOPersonalMenu
	 */
	struct UHUDWidget_C_ShowVOPersonalMenu_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.HideVOMenu
	 */
	struct UHUDWidget_C_HideVOMenu_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnMount_Event_1
	 */
	struct UHUDWidget_C_OnMount_Event_1_Params
	{
	public:
		class AActor*                                              AttachParent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USiegeMountPoint*                                    MountPoint;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnDismount_Event_1
	 */
	struct UHUDWidget_C_OnDismount_Event_1_Params
	{
	public:
		class AActor*                                              AttachParent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EDismountType                                          DismountType;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.InitializeTapOut
	 */
	struct UHUDWidget_C_InitializeTapOut_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.InitializePinnedInteractable
	 */
	struct UHUDWidget_C_InitializePinnedInteractable_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnInteractableFocused
	 */
	struct UHUDWidget_C_OnInteractableFocused_Params
	{
	public:
		class UInteractableComponent*                              InteractableComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnInteractableLostFocus
	 */
	struct UHUDWidget_C_OnInteractableLostFocus_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.Set cinematics mode
	 */
	struct UHUDWidget_C_Set_cinematics_mode_Params
	{
	public:
		CinematicMenuMode_ECinematicMenuMode                       New_mode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.Update full layer opacity
	 */
	struct UHUDWidget_C_Update_full_layer_opacity_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.Update parial layer opacity
	 */
	struct UHUDWidget_C_Update_parial_layer_opacity_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.ShowVOEmoteMenu
	 */
	struct UHUDWidget_C_ShowVOEmoteMenu_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnClientPossessedPawn_Event_1
	 */
	struct UHUDWidget_C_OnClientPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnTeamChanged
	 */
	struct UHUDWidget_C_OnTeamChanged_Params
	{
	public:
		class ATBLTeam*                                            NewTeam;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnTeamChanged_Event_1
	 */
	struct UHUDWidget_C_OnTeamChanged_Event_1_Params
	{
	public:
		class ATBLTeam*                                            NewTeam;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature
	 */
	struct UHUDWidget_C_BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature_Params
	{
	public:
		class FName                                                Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ActionName;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                HintText;                                                // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.Construct
	 */
	struct UHUDWidget_C_Construct_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.InitializeMountedWidgets
	 */
	struct UHUDWidget_C_InitializeMountedWidgets_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnStatsComponentFocused_Event_1
	 */
	struct UHUDWidget_C_OnStatsComponentFocused_Event_1_Params
	{
	public:
		class UStatsComponent*                                     StatsComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnStatsComponentLostFocused_Event_1
	 */
	struct UHUDWidget_C_OnStatsComponentLostFocused_Event_1_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature
	 */
	struct UHUDWidget_C_BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.HideNameplate
	 */
	struct UHUDWidget_C_HideNameplate_Params
	{
	public:
		bool                                                       _;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.InitializeGameModeWidget
	 */
	struct UHUDWidget_C_InitializeGameModeWidget_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.ShowRadialInventory
	 */
	struct UHUDWidget_C_ShowRadialInventory_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.HideRadialInventory
	 */
	struct UHUDWidget_C_HideRadialInventory_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.InitializeProgressUI
	 */
	struct UHUDWidget_C_InitializeProgressUI_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.StatsComponentHitFade
	 */
	struct UHUDWidget_C_StatsComponentHitFade_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnDamageCaused_Event_1
	 */
	struct UHUDWidget_C_OnDamageCaused_Event_1_Params
	{
	public:
		struct FDamageTakenEvent                                   DamageEvent;                                             // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.ReshowNamePlate
	 */
	struct UHUDWidget_C_ReshowNamePlate_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnJoinWave
	 */
	struct UHUDWidget_C_OnJoinWave_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bJoinWaveSuccess;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnUseableActorInteractableFocused_Event_1
	 */
	struct UHUDWidget_C_OnUseableActorInteractableFocused_Event_1_Params
	{
	public:
		class UInteractableComponent*                              InteractableComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnUseableActorInteractableLostFocused_Event_1
	 */
	struct UHUDWidget_C_OnUseableActorInteractableLostFocused_Event_1_Params
	{
	public:
		class UInteractableComponent*                              InteractableComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnInitialized
	 */
	struct UHUDWidget_C_OnInitialized_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.PostDeathHidden
	 */
	struct UHUDWidget_C_PostDeathHidden_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.AutoHideVOMenuTimerStarted
	 */
	struct UHUDWidget_C_AutoHideVOMenuTimerStarted_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.PostCombatStateHideDowned
	 */
	struct UHUDWidget_C_PostCombatStateHideDowned_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.DisableFocus
	 */
	struct UHUDWidget_C_DisableFocus_Params
	{
	};

	/**
	 * Function HUDWidget.HUDWidget_C.EnableFocus
	 */
	struct UHUDWidget_C_EnableFocus_Params
	{
	public:
		class UInteractableComponent*                              InteractableComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnApplyCondition_Event_1
	 */
	struct UHUDWidget_C_OnApplyCondition_Event_1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.OnRemoveCondition_Event_1
	 */
	struct UHUDWidget_C_OnRemoveCondition_Event_1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.ExecuteUbergraph_HUDWidget
	 */
	struct UHUDWidget_C_ExecuteUbergraph_HUDWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDWidget.HUDWidget_C.Cinematics Mode Changed__DelegateSignature
	 */
	struct UHUDWidget_C_Cinematics_Mode_Changed__DelegateSignature_Params
	{
	public:
		CinematicMenuMode_ECinematicMenuMode                       New_mode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Previous_mode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
