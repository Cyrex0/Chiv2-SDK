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
	 * BlueprintGeneratedClass BaseHorse.BaseHorse_C
	 * Size -> 0x00A8 (FullSize[0x0BA8] - InheritedSize[0x0B00])
	 */
	class ABaseHorse_C : public AHorse
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B00(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWoundSystemExtras_C*                                WoundSystemExtras;                                       // 0x0B08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectedWoundComponent_C*                          ProjectedWoundComponent;                                 // 0x0B10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Cloth;                                                   // 0x0B18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Simple;                                                  // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Rider;                                                   // 0x0B28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHorseGameplayRules_C*                               HorseGameplayRules;                                      // 0x0B30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   BackLegs;                                                // 0x0B38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   FrontLegs;                                               // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Back;                                                    // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Front;                                                   // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Horse;                                                   // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Saddle;                                                  // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFxComponent*                                        Fx;                                                      // 0x0B68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAbilitiesComponent*                                 Abilities;                                               // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStatsComponent*                                     Stats;                                                   // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TBL_EHorseImpactLocation                                   ImpactLocation;                                          // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EHorseToWorldImpactType                                WorldImpactType;                                         // 0x0B81(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EHorseToCharacterImpactType                            CharacterImpactType;                                     // 0x0B82(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EHorseToHorseImpactType                                HorseImpactType;                                         // 0x0B83(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZTQW[0x4];                                   // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       TargetCharacter;                                         // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHorse*                                              TargetHorse;                                             // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KnockoffFromPawnSpeed;                                   // 0x0B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CharacterKnockdownSpeed;                                 // 0x0B9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImpactSpped;                                             // 0x0BA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageAmount;                                            // 0x0BA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTeamHeraldry(class UTexture* Value);
		TArray<class UPrimitiveComponent*> GetPushingCollision();
		class UCapsuleComponent* GetWorldCollisionRider();
		bool ShouldPushBackOnTurnAgainstWall();
		Engine_ECollisionResponse GetRiderToWorldCollision();
		void FxEvent(const class FName& EventName, float EventScale, bool Target_);
		TArray<class UPrimitiveComponent*> GetWorldCollisionBack();
		TArray<class UPrimitiveComponent*> GetWorldCollisionFront();
		void GetWorldCollisionLegs(class UCapsuleComponent** FrontLegs, class UCapsuleComponent** BackLegs);
		void ReceiveBeginPlay();
		void InitAltWeightsState();
		void HorseToWorldImpact(const struct FHitResult& Hit, TBL_EHorseImpactLocation ImpactLocation, TBL_EHorseToWorldImpactType ImpactType, const class FName& ImpactCombatState, float ImpactSpeed);
		void HorseToCharacterImpact(class ATBLCharacter* TargetCharacter, TBL_EHorseImpactLocation ImpactLocation, TBL_EHorseToCharacterImpactType ImpactType, const class FName& ImpactCombatState, float ImpactSpeed);
		void HorseToHorseImpact(class AHorse* TargetHorse, TBL_EHorseImpactLocation ImpactLocation, TBL_EHorseToHorseImpactType ImpactType, const class FName& ImpactCombatState, float ImpactSpeed);
		void BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
		void RiderToWorldImpact(const struct FHitResult& Hit);
		void BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature(TBL_EFaction NewFaction);
		void OnDriverMount_Event_1(class ATBLCharacter* Driver);
		void OnDriverDismount_Event_1(class ATBLCharacter* Driver, TBL_EDismountType DismountType);
		void ApplyDamageToCharacter();
		void ExecuteUbergraph_BaseHorse(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
