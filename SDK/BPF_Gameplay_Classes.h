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
	 * BlueprintGeneratedClass BPF_Gameplay.BPF_Gameplay_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_Gameplay_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetShoveInstigator(class ATBLCharacter* Character, class UObject* __WorldContext, class AActor** ShoveInstigator);
		void STATIC_IsTackleAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _);
		void STATIC_IsInJabKnockback(class ATBLCharacter* Character, class UObject* __WorldContext, bool* _);
		void STATIC_IsJabAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _);
		void STATIC_IsInShoveKnockback(class ATBLCharacter* Character, class UObject* __WorldContext, bool* _);
		void STATIC_IsControllerPlayerControlled(class AController* Controller, class UObject* __WorldContext, bool* bReturnValue);
		void STATIC_IsPawnPlayerControlled(class APawn* Pawn, class UObject* __WorldContext, bool* bReturnValue);
		void STATIC_IsPlayerStatePlayerControlled(class APlayerState* PlayerState, class UObject* __WorldContext, bool* bReturnValue);
		void STATIC_IsObjectPlayerControlled(class UObject* Object, class UObject* __WorldContext, bool* bReturnValue);
		void STATIC_Is_Shove_Or_Jab_Or_Headbutt_Ability_Spec(class UAbilitySpec* _, class UObject* __WorldContext, bool* __);
		void STATIC_IsPawnDowned(class APawn* Target, class UObject* __WorldContext, bool* _);
		void STATIC_IsShoveAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _);
		bool STATIC_TBLGetActorsInSphere(const struct FVector& SpherePos, float SphereRadius, bool DebugDraw, class UObject* __WorldContext, TArray<class AActor*>* OutActors);
		void STATIC_IsPlayerControlled(class AActor* _, class UObject* __WorldContext, bool* __);
		void STATIC_IsPawnInSprintAttack(class APawn* Target, class UObject* __WorldContext, bool* _);
		void STATIC_IsPawnInSpecialAttack(class APawn* Target, class UObject* __WorldContext, bool* _);
		void STATIC_TBLApplySphereDamageAndCC(class AActor* DamageCauser, const struct FVector& Location, float Radius, float Amount, class UDamageSource* DamageSource, bool CrowdControl, TBL_ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, TArray<class AActor*>* ActorsToIgnore, bool IgnoreSelf, bool NoDamageCauserForAllies, bool bOverrideImpactPoint, class UObject* __WorldContext);
		void STATIC_TBLApplyCrowdControl(class AActor* DamageTaker, class AActor* DamageCauser, TBL_ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, bool bAutonomous, class UObject* __WorldContext);
		bool STATIC_IsCharacterParryingWithShield(class ATBLCharacter* Target, class UObject* __WorldContext);
		void STATIC_TBLKillPawn(class AActor* DamageTaker, class AActor* DamageCauser, class UObject* __WorldContext);
		void STATIC_IsPawnAirborne(class APawn* Target, class UObject* __WorldContext, bool* _);
		void STATIC_IsPawnSprinting(class APawn* Target, class UObject* __WorldContext, bool* _);
		void STATIC_IsInCrowdControlState(class AActor* Target, class UObject* __WorldContext, bool* _);
		void STATIC_TBLApplyDamageAndCrowdControl(class AActor* DamageTaker, class AActor* DamageCauser, float Amount, class UDamageSource* DamageSource, bool CrowdControl, TBL_ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, bool bAutonomous, class AInventoryItem* InventoryItemOverride, bool bOverrideImpactPoint, const struct FVector& DamageSourceLocationOverride, class AActor* DamageInstigator, class UObject* __WorldContext);
		void STATIC_IsMounted(class AActor* Actor, class UObject* __WorldContext, bool* _);
		void STATIC_IsEnemy(class AActor* TestA, class AActor* TestB, class UObject* __WorldContext, bool* _);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
