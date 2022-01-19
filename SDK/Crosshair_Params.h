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
	 * Function Crosshair.Crosshair_C.GetOwningPawn
	 */
	struct UCrosshair_C_GetOwningPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.SetParryIndicatorColor
	 */
	struct UCrosshair_C_SetParryIndicatorColor_Params
	{
	public:
		bool                                                       IsCounterSuccess;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.TryDisablingActiveParry
	 */
	struct UCrosshair_C_TryDisablingActiveParry_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.UpdateDamageEventWidgets
	 */
	struct UCrosshair_C_UpdateDamageEventWidgets_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.InitDamageEventWidgets
	 */
	struct UCrosshair_C_InitDamageEventWidgets_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.SetBlockedStaminaPercentage
	 */
	struct UCrosshair_C_SetBlockedStaminaPercentage_Params
	{
	public:
		float                                                      _;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.StaminaCheckFailed
	 */
	struct UCrosshair_C_StaminaCheckFailed_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.SetPlayerStaminaPercentage
	 */
	struct UCrosshair_C_SetPlayerStaminaPercentage_Params
	{
	public:
		float                                                      _;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.UpdateBlockingCharacterStamina
	 */
	struct UCrosshair_C_UpdateBlockingCharacterStamina_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.UpdateParryStamina
	 */
	struct UCrosshair_C_UpdateParryStamina_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.RemoveBottomCenterNotiMessage
	 */
	struct UCrosshair_C_RemoveBottomCenterNotiMessage_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.SetBottomCenterNotiMessage
	 */
	struct UCrosshair_C_SetBottomCenterNotiMessage_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.UpdateDamageEventWidget
	 */
	struct UCrosshair_C_UpdateDamageEventWidget_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                DamageType;                                              // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ActorName;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnEquippedItemUpdate
	 */
	struct UCrosshair_C_OnEquippedItemUpdate_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.UpdateChargebarPercentage
	 */
	struct UCrosshair_C_UpdateChargebarPercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.UpdateCrosshairState
	 */
	struct UCrosshair_C_UpdateCrosshairState_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.SetChargingVisibility
	 */
	struct UCrosshair_C_SetChargingVisibility_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.SetCrosshairTargetState
	 */
	struct UCrosshair_C_SetCrosshairTargetState_Params
	{
	public:
		CrosshairTargetState_ECrosshairTargetState                 State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               TargetFaction;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnEquippedItemsChanged_Event_1
	 */
	struct UCrosshair_C_OnEquippedItemsChanged_Event_1_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.OnAnimationFinished
	 */
	struct UCrosshair_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnAnimationStarted
	 */
	struct UCrosshair_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnBroadcastActorUnderCrosshairChanged_Event_1
	 */
	struct UCrosshair_C_OnBroadcastActorUnderCrosshairChanged_Event_1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnPossessedPawn_Event_1
	 */
	struct UCrosshair_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.ResetCrosshair
	 */
	struct UCrosshair_C_ResetCrosshair_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.OnKilled_Event_1
	 */
	struct UCrosshair_C_OnKilled_Event_1_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function Crosshair.Crosshair_C.Construct
	 */
	struct UCrosshair_C_Construct_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.ForceUpdateEquippedItem
	 */
	struct UCrosshair_C_ForceUpdateEquippedItem_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.HoldingFadeOutComplete
	 */
	struct UCrosshair_C_HoldingFadeOutComplete_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.CustomEvent_1
	 */
	struct UCrosshair_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.WidgetAnimationEvt_CombatMessageAnim_In_K2Node_WidgetAnimationEvent_1
	 */
	struct UCrosshair_C_WidgetAnimationEvt_CombatMessageAnim_In_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.BleedOutTick
	 */
	struct UCrosshair_C_BleedOutTick_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.OnRemoveCondition_Event_1
	 */
	struct UCrosshair_C_OnRemoveCondition_Event_1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.BleedingOutRemoved
	 */
	struct UCrosshair_C_BleedingOutRemoved_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.PostCombatMessage
	 */
	struct UCrosshair_C_PostCombatMessage_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OutOfCombatWarning
	 */
	struct UCrosshair_C_OutOfCombatWarning_Params
	{
	public:
		bool                                                       _;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.TeamDamgeNoti
	 */
	struct UCrosshair_C_TeamDamgeNoti_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.ToggleBottomCenterMessage
	 */
	struct UCrosshair_C_ToggleBottomCenterMessage_Params
	{
	public:
		bool                                                       _;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.WidgetAnimationEvt_EnableChargingOverlay_K2Node_WidgetAnimationEvent_2
	 */
	struct UCrosshair_C_WidgetAnimationEvt_EnableChargingOverlay_K2Node_WidgetAnimationEvent_2_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.StatsChanged
	 */
	struct UCrosshair_C_StatsChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EStat                                                  StatType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatEntry                                          Stat;                                                    // 0x0010(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		float                                                      DeltaValue;                                              // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnWasParried_Event_1
	 */
	struct UCrosshair_C_OnWasParried_Event_1_Params
	{
	public:
		class ATBLCharacter*                                       ThisCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       OtherCharacter;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FParryEventState                                    ParryEventState;                                         // 0x0010(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnParriedCharacterStatChanged
	 */
	struct UCrosshair_C_OnParriedCharacterStatChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EStat                                                  StatType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatEntry                                          Stat;                                                    // 0x0010(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		float                                                      DeltaValue;                                              // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnCounterWindowEnd_Event_1
	 */
	struct UCrosshair_C_OnCounterWindowEnd_Event_1_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.RiposteParryFinished
	 */
	struct UCrosshair_C_RiposteParryFinished_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairGameplayEvent
	 */
	struct UCrosshair_C_CrosshairGameplayEvent_Params
	{
	public:
		class FName                                                Event;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Scaling;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPositive;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.EnableCombatCondition
	 */
	struct UCrosshair_C_EnableCombatCondition_Params
	{
	public:
		class FString                                              Keybinding;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                Condition;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                HintText;                                                // 0x0020(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairWasParried
	 */
	struct UCrosshair_C_CrosshairWasParried_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairHoldingProgress
	 */
	struct UCrosshair_C_CrosshairHoldingProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairHoldingInitiated
	 */
	struct UCrosshair_C_CrosshairHoldingInitiated_Params
	{
	public:
		bool                                                       IsRangedAttack;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairHoldingCompleted
	 */
	struct UCrosshair_C_CrosshairHoldingCompleted_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairHoldingAborted
	 */
	struct UCrosshair_C_CrosshairHoldingAborted_Params
	{
	public:
		bool                                                       IsStateEnd;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Force;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairProjectileFired
	 */
	struct UCrosshair_C_CrosshairProjectileFired_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairOutOfCombatWarning
	 */
	struct UCrosshair_C_CrosshairOutOfCombatWarning_Params
	{
	public:
		bool                                                       bShowMessage;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairPostRespawnMessage
	 */
	struct UCrosshair_C_CrosshairPostRespawnMessage_Params
	{
	public:
		class FText                                                ClassName;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairLostLimbMessage
	 */
	struct UCrosshair_C_CrosshairLostLimbMessage_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairDamageEvent
	 */
	struct UCrosshair_C_CrosshairDamageEvent_Params
	{
	public:
		class FName                                                Event;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDamageTakenEvent                                   DamageTakenEvent;                                        // 0x0008(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       IsEnemy;                                                 // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairDamageTakenEvent
	 */
	struct UCrosshair_C_CrosshairDamageTakenEvent_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HitDirection;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.WidgetAnimationEvt_HitAroundParryLeftAnim_K2Node_WidgetAnimationEvent_3
	 */
	struct UCrosshair_C_WidgetAnimationEvt_HitAroundParryLeftAnim_K2Node_WidgetAnimationEvent_3_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.WidgetAnimationEvt_HitAroundParryRightAnim_K2Node_WidgetAnimationEvent_4
	 */
	struct UCrosshair_C_WidgetAnimationEvt_HitAroundParryRightAnim_K2Node_WidgetAnimationEvent_4_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.WorldHit
	 */
	struct UCrosshair_C_WorldHit_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.EnableCombatConditions
	 */
	struct UCrosshair_C_EnableCombatConditions_Params
	{
	public:
		class FString                                              Keybinding;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                Condition;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                HintText;                                                // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnParrySuccess_Event_1
	 */
	struct UCrosshair_C_OnParrySuccess_Event_1_Params
	{
	public:
		class ATBLCharacter*                                       ThisCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       OtherCharacter;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FParryEventState                                    ParryEventState;                                         // 0x0010(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairPostShuffleMessage
	 */
	struct UCrosshair_C_CrosshairPostShuffleMessage_Params
	{
	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairTutorialFailedMessage
	 */
	struct UCrosshair_C_CrosshairTutorialFailedMessage_Params
	{
	public:
		class FText                                                CustomText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairTutorialNeutralMessage
	 */
	struct UCrosshair_C_CrosshairTutorialNeutralMessage_Params
	{
	public:
		class FText                                                CustomText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function Crosshair.Crosshair_C.CrosshairTutorialSuccessMessage
	 */
	struct UCrosshair_C_CrosshairTutorialSuccessMessage_Params
	{
	public:
		class FText                                                CustomText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function Crosshair.Crosshair_C.Tick
	 */
	struct UCrosshair_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.OnProjectileCounterWindowEnd
	 */
	struct UCrosshair_C_OnProjectileCounterWindowEnd_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.ExecuteUbergraph_Crosshair
	 */
	struct UCrosshair_C_ExecuteUbergraph_Crosshair_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Crosshair.Crosshair_C.MatchScoreEvent__DelegateSignature
	 */
	struct UCrosshair_C_MatchScoreEvent__DelegateSignature_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Crosshair.Crosshair_C.SendInputMessage__DelegateSignature
	 */
	struct UCrosshair_C_SendInputMessage__DelegateSignature_Params
	{
	public:
		class FName                                                Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ActionName;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                HintText;                                                // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
