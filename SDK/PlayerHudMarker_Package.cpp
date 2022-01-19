/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.IsLocalPlayerAlive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UPlayerHudMarker_C::IsLocalPlayerAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.IsLocalPlayerAlive");
		
		UPlayerHudMarker_C_IsLocalPlayerAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.GetAssignedPlayerName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FString UPlayerHudMarker_C::GetAssignedPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.GetAssignedPlayerName");
		
		UPlayerHudMarker_C_GetAssignedPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChangedDelay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 EventAttackInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UCombatState*                                CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::HandleCombatStateChangedDelay(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, struct FAttackInfo* EventAttackInfo, class UCombatState* CombatState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChangedDelay");
		
		UPlayerHudMarker_C_HandleCombatStateChangedDelay_Params params {};
		params.Actor = Actor;
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		params.CombatState = CombatState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventAttackInfo != nullptr)
			*EventAttackInfo = params.EventAttackInfo;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.SetAllyIconColour
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::SetAllyIconColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.SetAllyIconColour");
		
		UPlayerHudMarker_C_SetAllyIconColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.GetLocalPlayersPartyId
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PartyId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::GetLocalPlayersPartyId(class FString* PartyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.GetLocalPlayersPartyId");
		
		UPlayerHudMarker_C_GetLocalPlayersPartyId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyId != nullptr)
			*PartyId = params.PartyId;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.CheckForHealingItemsEquipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::CheckForHealingItemsEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.CheckForHealingItemsEquipped");
		
		UPlayerHudMarker_C_CheckForHealingItemsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.CheckForHealingSpecialCharged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::CheckForHealingSpecialCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.CheckForHealingSpecialCharged");
		
		UPlayerHudMarker_C_CheckForHealingSpecialCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.Is Special Item Of Type
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsType                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHudMarker_C::Is_Special_Item_Of_Type(TArray<class UClass*>* ItemType, bool* IsType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.Is Special Item Of Type");
		
		UPlayerHudMarker_C_Is_Special_Item_Of_Type_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemType != nullptr)
			*ItemType = params.ItemType;
		if (IsType != nullptr)
			*IsType = params.IsType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.HandleOnPlayerStateReplicated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::HandleOnPlayerStateReplicated(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.HandleOnPlayerStateReplicated");
		
		UPlayerHudMarker_C_HandleOnPlayerStateReplicated_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.HandleTeamChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::HandleTeamChanged(class ATBLTeam* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.HandleTeamChanged");
		
		UPlayerHudMarker_C_HandleTeamChanged_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChanged
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 EventAttackInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UCombatState*                                CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::HandleCombatStateChanged(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, struct FAttackInfo* EventAttackInfo, class UCombatState* CombatState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChanged");
		
		UPlayerHudMarker_C_HandleCombatStateChanged_Params params {};
		params.Actor = Actor;
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		params.CombatState = CombatState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventAttackInfo != nullptr)
			*EventAttackInfo = params.EventAttackInfo;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.Update");
		
		UPlayerHudMarker_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.HandleBroadcastActorUnderCrosshairChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::HandleBroadcastActorUnderCrosshairChanged(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.HandleBroadcastActorUnderCrosshairChanged");
		
		UPlayerHudMarker_C_HandleBroadcastActorUnderCrosshairChanged_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.K2_OnAssignedToActor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.K2_OnAssignedToActor");
		
		UPlayerHudMarker_C_K2_OnAssignedToActor_Params params {};
		params.Actor = Actor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.HandleKilled
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UPlayerHudMarker_C::HandleKilled(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.HandleKilled");
		
		UPlayerHudMarker_C_HandleKilled_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.Construct");
		
		UPlayerHudMarker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnStatHealthChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnStatHealthChanged_Event_1(float Amount, class AActor* Initiator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnStatHealthChanged_Event_1");
		
		UPlayerHudMarker_C_OnStatHealthChanged_Event_1_Params params {};
		params.Amount = Amount;
		params.Initiator = Initiator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnPossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnPossessedPawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnPossessedPawn");
		
		UPlayerHudMarker_C_OnPossessedPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnInventoryUnequipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnInventoryUnequipped(class AInventoryItem* InventoryItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnInventoryUnequipped");
		
		UPlayerHudMarker_C_OnInventoryUnequipped_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.PlayHealedCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::PlayHealedCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.PlayHealedCharacter");
		
		UPlayerHudMarker_C_PlayHealedCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.NewState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		PlayerMarkerState_EPlayerMarkerState               CurrentPlayerMarkerState                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::NewState(PlayerMarkerState_EPlayerMarkerState CurrentPlayerMarkerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.NewState");
		
		UPlayerHudMarker_C_NewState_Params params {};
		params.CurrentPlayerMarkerState = CurrentPlayerMarkerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnInitialized");
		
		UPlayerHudMarker_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.ActiveHealingAnimationFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::ActiveHealingAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.ActiveHealingAnimationFinished");
		
		UPlayerHudMarker_C_ActiveHealingAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.CustomEvent_1");
		
		UPlayerHudMarker_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.K2_OnReturnedToPool
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::K2_OnReturnedToPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.K2_OnReturnedToPool");
		
		UPlayerHudMarker_C_K2_OnReturnedToPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnHealingAppliedToCharacter_Event_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACharacter*                                  ReceivingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnHealingAppliedToCharacter_Event_2(class ACharacter* ReceivingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnHealingAppliedToCharacter_Event_2");
		
		UPlayerHudMarker_C_OnHealingAppliedToCharacter_Event_2_Params params {};
		params.ReceivingCharacter = ReceivingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnEquippedItemsChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::OnEquippedItemsChanged_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnEquippedItemsChanged_Event_1");
		
		UPlayerHudMarker_C_OnEquippedItemsChanged_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnCombatStateChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 EventAttackInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		class UCombatState*                                CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnCombatStateChange(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnCombatStateChange");
		
		UPlayerHudMarker_C_OnCombatStateChange_Params params {};
		params.Actor = Actor;
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		params.EventAttackInfo = EventAttackInfo;
		params.CombatState = CombatState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnSpecialAbilitySet_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::OnSpecialAbilitySet_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnSpecialAbilitySet_Event_1");
		
		UPlayerHudMarker_C_OnSpecialAbilitySet_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnPartyDisband_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHudMarker_C::OnPartyDisband_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyDisband_Event_1");
		
		UPlayerHudMarker_C_OnPartyDisband_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberJoin_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnPartyMemberJoin_Event_1(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberJoin_Event_1");
		
		UPlayerHudMarker_C_OnPartyMemberJoin_Event_1_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnPartyLeave_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHudMarker_C::OnPartyLeave_Event_1(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyLeave_Event_1");
		
		UPlayerHudMarker_C_OnPartyLeave_Event_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnPartyInviteAccept_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PartyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnPartyInviteAccept_Event_1(const class FString& PartyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyInviteAccept_Event_1");
		
		UPlayerHudMarker_C_OnPartyInviteAccept_Event_1_Params params {};
		params.PartyId = PartyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberLeave_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnPartyMemberLeave_Event_1(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberLeave_Event_1");
		
		UPlayerHudMarker_C_OnPartyMemberLeave_Event_1_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberRemove_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnPartyMemberRemove_Event_1(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberRemove_Event_1");
		
		UPlayerHudMarker_C_OnPartyMemberRemove_Event_1_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberKick_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::OnPartyMemberKick_Event_1(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberKick_Event_1");
		
		UPlayerHudMarker_C_OnPartyMemberKick_Event_1_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerHudMarker.PlayerHudMarker_C.ExecuteUbergraph_PlayerHudMarker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudMarker_C::ExecuteUbergraph_PlayerHudMarker(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudMarker.PlayerHudMarker_C.ExecuteUbergraph_PlayerHudMarker");
		
		UPlayerHudMarker_C_ExecuteUbergraph_PlayerHudMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerHudMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHudMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHudMarker.PlayerHudMarker_C");
		return ptr;
	}

}


