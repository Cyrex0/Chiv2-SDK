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
	 * BlueprintGeneratedClass HorseGameplayRules.HorseGameplayRules_C
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UHorseGameplayRules_C : public UGameplayRules
	{
	public:
		int                                                        HitCount;                                                // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitTime;                                                 // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TBL_ECrowdControlVariant GetCrowdControlVariant(TBL_ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const class FName& CombatState, class UClass* InventoryItemClass, const class FName& AbilityName, class UAttackType* AttackType, bool IsOnHorse);
		void OnDamageTaken(TBL_EOnHitEffect* OutHitEffect, TBL_ECrowdControlVariant* OutCrowdControlVariant, TBL_EOnHitEffect InHitEffect, TBL_ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent, const class FName& AttackName, class AInventoryItem* AttackingItem, class UAttackType* AttackType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
