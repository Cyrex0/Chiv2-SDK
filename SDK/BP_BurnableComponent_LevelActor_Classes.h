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
	 * BlueprintGeneratedClass BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C
	 * Size -> 0x0179 (FullSize[0x02C1] - InheritedSize[0x0148])
	 */
	class UBP_BurnableComponent_LevelActor_C : public UBurnableComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0148(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              Owner;                                                   // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBP_flammableSceneComponent_C*>               FlammableSceneComponents;                                // 0x0158(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UBP_FireDamage_Component_C*>                  FlammableDamageComponents;                               // 0x0168(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		unsigned char                                              BurnableMaterials[0x50];                                 // 0x0178(0x0050) UNKNOWN PROPERTY: SetProperty
		class UStatsComponent*                                     StatsComponent;                                          // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UConditionsComponent*                                ConditionsComponent_1;                                   // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTBLGameScoringComponent*                            ScoringComponent;                                        // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BurnableActorKilled;                                     // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class UStaticMesh*, class UStaticMesh*>               DestroyableMeshes;                                       // 0x01F0(0x0050) Edit, BlueprintVisible
		TArray<class UStaticMeshComponent*>                        DestroyableMeshComponents;                               // 0x0240(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UMaterialInstanceDynamic*>                    BurnableMaterialsDynamic;                                // 0x0250(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UParticleSystemComponent*>                    BurnableParticleSystems;                                 // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UAkComponent*>                                SoundComponents;                                         // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class ABPA_L_parent_C*>                             LightComponents;                                         // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CreateLocators;                                          // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      MaterialBurnPercent;                                     // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V4T3[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        BurnTimer;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      DissolveDuration;                                        // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        COUNTER;                                                 // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasTakenDamage;                                          // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YEDP[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Spawn;                                                   // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsKilled;                                                // 0x02C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DestroyWithoutDamage();
		void UnbindEvents();
		void BindEvents();
		void CreateBurntMeshReplacements();
		void ApplyBurnToOverlappingCharacters();
		void AssembleComponents();
		void SetBurnableExpressions(const class FName& Parameter, float Value);
		void CreateDynamicMaterials();
		void ReceiveBeginPlay();
		void HealthChanged(float Amount, class AActor* Initiator);
		void StartBurningEffect();
		void StopBurningEffect();
		void BeginDissolve();
		void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BeginFireFade();
		void OnHit(const struct FFLammableHitEvent& HitEvent);
		void CreateDestroyedParticles();
		void StopBurningSound_PlayDestroyedSound();
		void UpdateCharring(float Value);
		void UpdateDissolve(float Value);
		void UpdateFireParticle(float Value);
		void HealthChangedCosmetic(float Health, class AActor* Initiator);
		void ConditionsChangedCosmetic(class AActor* Actor, TBL_EConditionType Condition);
		void UpdateHealthMaterial(float Value);
		void SwapToDestroyedMeshes();
		void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
		void BurnPlayer(class AActor* Actor);
		void LockBurningEffects();
		void BeginFireFadeReverse();
		void ExecuteUbergraph_BP_BurnableComponent_LevelActor(int EntryPoint);
		void CreateLocators__DelegateSignature();
		void BurnableActorKilled__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
