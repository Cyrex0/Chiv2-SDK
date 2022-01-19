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
	 * BlueprintGeneratedClass GameplayRules.GameplayRules_C
	 * Size -> 0x0058 (FullSize[0x0168] - InheritedSize[0x0110])
	 */
	class UGameplayRules_C : public UGameplayRules
	{
	public:
		TBL_ELimbGoreAction                                        LimbGoreAction;                                          // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EHeadGoreAction                                        HeadGoreAction;                                          // 0x0111(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5RW7[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BleedingDamageType[0x28];                                // 0x0112(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FallDamageType[0x28];                                    // 0x0140(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		bool ShouldStartProjectileCounterWindow(class ATBLCharacter* Character);
		bool ShouldProjectileAttackBeCountered(class ATBLCharacter* HitCharacter, class AInventoryItem* AttackingItem);
		bool ShouldStartActiveRiposteWindow(class ATBLCharacter* Character);
		bool ApplyDamageConditions(class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent);
		void DisarmWhenHitDuringThrow(class ATBLCharacter* HitCharacter, TBL_EOnHitEffect HitEffect);
		bool ShouldBlockSameAttack(class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter);
		bool ShouldPlayDamageTaken(const struct FDamageTakenEvent& DamageTakenEvent);
		bool TutorialCanDamage(class ATBLCharacter* InitiatorCharacter, class AActor* TargetActor);
		struct FVector GetDisarmImpulse(class AInventoryItem* AttackerItem, const struct FVector& HitDirection);
		void OnProjectileHit(TBL_EOnProjectileHitEffect* OutHitEffect, float* OutBounceVelocityModifier, class AInventoryItem* Projectile, TBL_EOnProjectileHitEffect InHitEffect, const struct FHitResult& InHitResult, float InBounceVelocityModifier);
		bool CheckIfCounterAttackIsSuccessful(class ATBLCharacter* HitCharacter, class ATBLCharacter* AttackingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefenderItem, const class FName& AttackName);
		bool ShouldCounterReadyStateAttackBeCountered(class ATBLCharacter* HitCharacter);
		bool ShouldNormalAttackBeCountered(class ATBLCharacter* HitCharacter);
		void DidSuccessfulCounter(class ATBLCharacter* Character, bool* IsCounter);
		bool ShouldAttackBeCountered(class ATBLCharacter* HitCharacter, class ATBLCharacter* AttackingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefenderItem);
		struct FTBL_FGoreEvent GetGoreEventOnDamage(const struct FDamageTakenEvent& DamageTakenEvent, bool bIsRagdollHit, bool bShouldApplyConditions);
		void GetCurrentAttack(class ATBLCharacter* Character, bool NonHeavy, class FName* AttackName);
		bool ShouldStartCounterWindow(class ATBLCharacter* Character);
		void ShouldLoseLimb(const struct FDamageTakenEvent& DamageEvent, bool* LoseLimb, bool* BleedOut);
		bool ShouldComboCancelQueue(const class FName& CombatState, const struct FAttackInfo& Attack);
		TBL_EComboTimingPolicy GetComboTimingPolicy(TBL_EComboTimingPolicy InComboTimingPolicy, class ATBLCharacter* Character, const class FName& CombatState, const struct FAttackInfo& PrevAttack, const struct FAttackInfo& NextAttack);
		bool DidHitLimb(class USkinnedMeshComponent* Target, const class FName& BoneName, const class FName& ParentBoneName);
		bool ShouldScoreKill(class AController* Killer, class AController* Killed, const struct FDeathDamageTakenEvent& DamageEvent);
		void IsStandardAttack(class ATBLCharacter* Character, bool* _);
		void OnDamageTaken(TBL_EOnHitEffect* OutHitEffect, TBL_ECrowdControlVariant* OutCrowdControlVariant, TBL_EOnHitEffect InHitEffect, TBL_ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent, const class FName& AttackName, class AInventoryItem* AttackingItem, class UAttackType* AttackType);
		void WasItemDestroyed(class AInventoryItem* Item, bool* _);
		TBL_ECrowdControlVariant GetCrowdControlVariant(TBL_ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const class FName& CombatState, class UClass* InventoryItemClass, const class FName& AbilityName, class UAttackType* AttackType, bool IsOnHorse);
		void IsShieldEquipped(class ATBLCharacter* Character, bool* _);
		void IsHeavyAttack(class ATBLCharacter* Character, bool* _);
		void IsSprintAttack(class ATBLCharacter* Character, bool* _);
		bool OnParryBreak(class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem);
		TBL_EAttackerBlockedPolicy GetAttackerBlockedPolicy(TBL_EAttackerBlockedPolicy InAttackerBlockedPolicy, class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem, bool bSameAttackClash);
		TBL_EDefenderBlockedPolicy GetDefenderBlockedPolicy(bool* bShouldDisarm, TBL_EDefenderBlockedPolicy InDefenderBlockedPolicy, class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem, bool bProjectileAttack, bool bSameAttackClash, bool bWasBlockedWithParryForgivenessWindow);
		void Disarm(class AInventoryItem* Item, bool DuringParryEvent);
		bool IsBlocking(class ATBLCharacter* Character, const class FName& AttackName, const class FName& CombatState, class ATBLCharacter* AttackingCharacter);
		bool ShouldGotoDowned(class AActor* Target, class AActor* Initiator, const class FName& AbilityName, class AInventoryItem* InventoryItem, class UDamageSource* DamageType, const struct FDamageTakenEvent& DamageTakenEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
