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
	 * WidgetBlueprintGeneratedClass PlayerHudMarker.PlayerHudMarker_C
	 * Size -> 0x00C9 (FullSize[0x0359] - InheritedSize[0x0290])
	 */
	class UPlayerHudMarker_C : public UHUDMarkerContainerPlayerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HealedAnimationFade;                                     // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeToHealingAnimation;                                  // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeToDefaultAnimation;                                  // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HealedAnimation;                                         // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Hovered;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            ActiveHealingOverlay;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Container;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DefaultPlayerIconOverlay;                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_136;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlayerIcon;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       PlayerName;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ATBLCharacter*                                       PawnBP;                                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHudMarkerDisplayComponent*                          HUDMarkerComponent;                                      // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DefaultRelativePos;                                      // 0x0308(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RenderingScale;                                          // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RenderingOpacity;                                        // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_52XP[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      QuickHealingItemTypes;                                   // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UClass*>                                      HeldHealingItemTypes;                                    // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      HealIconPercentageThreshold;                             // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoesLocalPlayerHaveHealingItem;                          // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		PlayerMarkerState_EPlayerMarkerState                       CurrentPlayerMarkerState;                                // 0x0345(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z0RU[0x2];                                   // 0x0346(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealingAnimationTime;                                    // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KB4R[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ActiveHealingTimerHandle;                                // 0x0350(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       MarkerState;                                             // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsLocalPlayerAlive();
		class FString GetAssignedPlayerName();
		void HandleCombatStateChangedDelay(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, struct FAttackInfo* EventAttackInfo, class UCombatState* CombatState);
		void SetAllyIconColour();
		void GetLocalPlayersPartyId(class FString* PartyId);
		void CheckForHealingItemsEquipped();
		void CheckForHealingSpecialCharged();
		void Is_Special_Item_Of_Type(TArray<class UClass*>* ItemType, bool* IsType);
		void HandleOnPlayerStateReplicated(class APlayerState* PlayerState);
		void HandleTeamChanged(class ATBLTeam* Team);
		void HandleCombatStateChanged(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, struct FAttackInfo* EventAttackInfo, class UCombatState* CombatState);
		void Update();
		void HandleBroadcastActorUnderCrosshairChanged(class AActor* Actor);
		void K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component);
		void HandleKilled(const struct FDeathDamageTakenEvent& Event);
		void Construct();
		void OnStatHealthChanged_Event_1(float Amount, class AActor* Initiator);
		void OnPossessedPawn(class APawn* Pawn);
		void OnInventoryUnequipped(class AInventoryItem* InventoryItem);
		void PlayHealedCharacter();
		void NewState(PlayerMarkerState_EPlayerMarkerState CurrentPlayerMarkerState);
		void OnInitialized();
		void ActiveHealingAnimationFinished();
		void CustomEvent_1();
		void K2_OnReturnedToPool();
		void OnHealingAppliedToCharacter_Event_2(class ACharacter* ReceivingCharacter);
		void OnEquippedItemsChanged_Event_1();
		void OnCombatStateChange(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
		void OnSpecialAbilitySet_Event_1();
		void OnPartyDisband_Event_1();
		void OnPartyMemberJoin_Event_1(const class FString& UserId, const class FString& DisplayName);
		void OnPartyLeave_Event_1(bool Result);
		void OnPartyInviteAccept_Event_1(const class FString& PartyId);
		void OnPartyMemberLeave_Event_1(const class FString& UserId, const class FString& DisplayName);
		void OnPartyMemberRemove_Event_1(const class FString& UserId, const class FString& DisplayName);
		void OnPartyMemberKick_Event_1(const class FString& UserId);
		void ExecuteUbergraph_PlayerHudMarker(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
