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
	 * BlueprintGeneratedClass Carryable_BandageKit.Carryable_BandageKit_C
	 * Size -> 0x00A9 (FullSize[0x118A] - InheritedSize[0x10E1])
	 */
	class ACarryable_BandageKit_C : public ABaseCarryable_2hKit_C
	{
	public:
		unsigned char                                              UnknownData_E5U6[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    TeamProjectileCollision;                                 // 0x10F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UActorInfoDisplayComponent*                          ActorInfoDisplay;                                        // 0x10F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UObjectiveStatusDisplayComponent*                    ObjectiveStatusDisplay;                                  // 0x1100(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHudMarkerDisplayComponent*                          HudMarkerDisplay;                                        // 0x1108(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                Hint;                                                    // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastOwner;                                               // 0x1118(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Uses;                                                    // 0x1120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealAmount;                                              // 0x1124(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealSpeed;                                               // 0x1128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GE1K[0x4];                                   // 0x112C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         HealCurve;                                               // 0x1130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EFaction                                               Faction;                                                 // 0x1138(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XYC8[0x7];                                   // 0x1139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatsComponent*                                     CurrentStatComponent;                                    // 0x1140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              InitiatingHealer[0x28];                                  // 0x1148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      RestockHealthPercentThreshold;                           // 0x1170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SelfHealModifier;                                        // 0x1174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsThrown;                                                // 0x1178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VNJ7[0x7];                                   // 0x1179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       PossesedCharacter;                                       // 0x1180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EHealingSource                                         HealingSource;                                           // 0x1188(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasRevived;                                              // 0x1189(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SendHealAnalyticsEvent(class ATBLCharacter* Character);
		void GetHealAmount(class ATBLCharacter* Character, float* HealAmount);
		class UShapeComponent* GetTeamProjectileCollision();
		void CanUseBandageKit(class APawn* Pawn, bool* CanUse);
		bool CannotAutoPickup(class APawn* Pawn);
		void OnRep_LastOwner();
		void OnRep_Faction();
		bool CanPickup(class APawn* Pawn);
		bool OverridePickupEvent(class ATBLCharacter* Character, bool bGiveWeapon, bool bIsAutoPickup);
		bool CanUseItem();
		void HealCharacter(class ATBLCharacter* Character);
		void ReceiveBeginPlay();
		void OnThrown_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
		void OnPossessedPawn(class APawn* NewPawn);
		void OnHealOverTimeStart(TBL_EHealingSource HealingSource, class ATBLPlayerState* InstigatorPlayerState);
		void OnHealOverTimeEnd();
		void UpdateHealHUDMarker();
		void OnDamageTaken(const struct FDamageTakenEvent& Event);
		void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_MovementFinishedSignature__DelegateSignature();
		void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void OnSetAttached_Event_1(bool bAttached);
		void SetTeam(class AActor* OwnerActor);
		void SetTeamMaterial();
		void OnProjectileHitTarget(const struct FHitResult& Hit);
		void ExecuteUbergraph_Carryable_BandageKit(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
