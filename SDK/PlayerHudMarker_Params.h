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
	 * Function PlayerHudMarker.PlayerHudMarker_C.IsLocalPlayerAlive
	 */
	struct UPlayerHudMarker_C_IsLocalPlayerAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.GetAssignedPlayerName
	 */
	struct UPlayerHudMarker_C_GetAssignedPlayerName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChangedDelay
	 */
	struct UPlayerHudMarker_C_HandleCombatStateChangedDelay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PreviousState;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttackInfo                                         EventAttackInfo;                                         // 0x0018(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UCombatState*                                        CombatState;                                             // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.SetAllyIconColour
	 */
	struct UPlayerHudMarker_C_SetAllyIconColour_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.GetLocalPlayersPartyId
	 */
	struct UPlayerHudMarker_C_GetLocalPlayersPartyId_Params
	{
	public:
		class FString                                              PartyId;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.CheckForHealingItemsEquipped
	 */
	struct UPlayerHudMarker_C_CheckForHealingItemsEquipped_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.CheckForHealingSpecialCharged
	 */
	struct UPlayerHudMarker_C_CheckForHealingSpecialCharged_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.Is Special Item Of Type
	 */
	struct UPlayerHudMarker_C_Is_Special_Item_Of_Type_Params
	{
	public:
		TArray<class UClass*>                                      ItemType;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsType;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.HandleOnPlayerStateReplicated
	 */
	struct UPlayerHudMarker_C_HandleOnPlayerStateReplicated_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.HandleTeamChanged
	 */
	struct UPlayerHudMarker_C_HandleTeamChanged_Params
	{
	public:
		class ATBLTeam*                                            Team;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChanged
	 */
	struct UPlayerHudMarker_C_HandleCombatStateChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PreviousState;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttackInfo                                         EventAttackInfo;                                         // 0x0018(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UCombatState*                                        CombatState;                                             // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.Update
	 */
	struct UPlayerHudMarker_C_Update_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.HandleBroadcastActorUnderCrosshairChanged
	 */
	struct UPlayerHudMarker_C_HandleBroadcastActorUnderCrosshairChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.K2_OnAssignedToActor
	 */
	struct UPlayerHudMarker_C_K2_OnAssignedToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActorComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.HandleKilled
	 */
	struct UPlayerHudMarker_C_HandleKilled_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.Construct
	 */
	struct UPlayerHudMarker_C_Construct_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnStatHealthChanged_Event_1
	 */
	struct UPlayerHudMarker_C_OnStatHealthChanged_Event_1_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Initiator;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnPossessedPawn
	 */
	struct UPlayerHudMarker_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnInventoryUnequipped
	 */
	struct UPlayerHudMarker_C_OnInventoryUnequipped_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.PlayHealedCharacter
	 */
	struct UPlayerHudMarker_C_PlayHealedCharacter_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.NewState
	 */
	struct UPlayerHudMarker_C_NewState_Params
	{
	public:
		PlayerMarkerState_EPlayerMarkerState                       CurrentPlayerMarkerState;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnInitialized
	 */
	struct UPlayerHudMarker_C_OnInitialized_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.ActiveHealingAnimationFinished
	 */
	struct UPlayerHudMarker_C_ActiveHealingAnimationFinished_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.CustomEvent_1
	 */
	struct UPlayerHudMarker_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.K2_OnReturnedToPool
	 */
	struct UPlayerHudMarker_C_K2_OnReturnedToPool_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnHealingAppliedToCharacter_Event_2
	 */
	struct UPlayerHudMarker_C_OnHealingAppliedToCharacter_Event_2_Params
	{
	public:
		class ACharacter*                                          ReceivingCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnEquippedItemsChanged_Event_1
	 */
	struct UPlayerHudMarker_C_OnEquippedItemsChanged_Event_1_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnCombatStateChange
	 */
	struct UPlayerHudMarker_C_OnCombatStateChange_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PreviousState;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttackInfo                                         EventAttackInfo;                                         // 0x0018(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		class UCombatState*                                        CombatState;                                             // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnSpecialAbilitySet_Event_1
	 */
	struct UPlayerHudMarker_C_OnSpecialAbilitySet_Event_1_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnPartyDisband_Event_1
	 */
	struct UPlayerHudMarker_C_OnPartyDisband_Event_1_Params
	{
	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberJoin_Event_1
	 */
	struct UPlayerHudMarker_C_OnPartyMemberJoin_Event_1_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnPartyLeave_Event_1
	 */
	struct UPlayerHudMarker_C_OnPartyLeave_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnPartyInviteAccept_Event_1
	 */
	struct UPlayerHudMarker_C_OnPartyInviteAccept_Event_1_Params
	{
	public:
		class FString                                              PartyId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberLeave_Event_1
	 */
	struct UPlayerHudMarker_C_OnPartyMemberLeave_Event_1_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberRemove_Event_1
	 */
	struct UPlayerHudMarker_C_OnPartyMemberRemove_Event_1_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberKick_Event_1
	 */
	struct UPlayerHudMarker_C_OnPartyMemberKick_Event_1_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerHudMarker.PlayerHudMarker_C.ExecuteUbergraph_PlayerHudMarker
	 */
	struct UPlayerHudMarker_C_ExecuteUbergraph_PlayerHudMarker_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
