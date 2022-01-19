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
	 * BlueprintGeneratedClass BaseInventoryItem.BaseInventoryItem_C
	 * Size -> 0x0090 (FullSize[0x1070] - InheritedSize[0x0FE0])
	 */
	class ABaseInventoryItem_C : public AInventoryItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FE0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TBL_EHeadGoreAction                                        BaseHeadGoreAction;                                      // 0x0FE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_ELimbGoreAction                                        BaseLimbGoreAction;                                      // 0x0FE9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EHelmetRemovalPolicy                                   BaseHelmetRemovalPolicy;                                 // 0x0FEA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A3OW[0x5];                                   // 0x0FEB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BaseProjectileBlockingHitWorld;                          // 0x0FF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        CloseCall_SweepForPawns_TimerHandle;                     // 0x1000(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastCloseCallPosition;                                   // 0x1008(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P4EP[0x4];                                   // 0x1014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ATBLCharacter*>                               CloseCallCharacters;                                     // 0x1018(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class UParticleSystem*                                     TrailParticle;                                           // 0x1028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ThrownImpactParticle;                                    // 0x1030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RangedRagdollImpulse;                                    // 0x1038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_314N[0x4];                                   // 0x103C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       ItemPickedUpSound;                                       // 0x1040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BaseProjectileBlockingHitNonWorld;                       // 0x1048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      LastPlayedDropTime;                                      // 0x1058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DW2G[0x4];                                   // 0x105C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       ItemDroppedSound;                                        // 0x1060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WorldHitVelocityMinimum;                                 // 0x1068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WorldHitZVectorMinimum;                                  // 0x106C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Get_Gore_Params(struct FBaseInventoryItem_GoreParams* Params);
		void GetVelocityVector(float* VelocityLength, struct FVector* Velocity);
		void CanPlayWorldHitDropped(bool* Return_Value);
		void StopCloseCallSound();
		void ShouldPlayProjectileSounds(bool* ProjectileSounds, bool* CloseCallSound);
		bool IsClientFakeProjectile();
		bool ShouldDropOnDowned();
		void UserConstructionScript();
		void BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature(class APawn* Pawn);
		void BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
		void BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
		void BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
		void Start_CloseCall_OverlapCheck();
		void CustomEvent_1();
		void Stop_CloseCall_OverlapCheck();
		void BroadcastProjectileWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit);
		void OnProjectileBounce(const struct FHitResult& Hit, bool bParried);
		void AssignProjectileMovementEvents();
		void OnMovementStarted_Event_1();
		void OnMovementFinished_Event_1();
		void BroadcastNonWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit);
		void OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
		void OnOwnerChanged_Event_1(class AActor* Owner);
		void OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState);
		void OnInitialize();
		void ListenToWeaponDrop();
		void OnComponentHit_Event_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnProjectileHitEvent_1(const struct FProjectileHitParams& HitParams);
		void ExecuteUbergraph_BaseInventoryItem(int EntryPoint);
		void BaseProjectileBlockingHitNonWorld__DelegateSignature(const struct FProjectileHitParams& ProjectileHit);
		void BaseProjectileBlockingHitWorld__DelegateSignature(const struct FProjectileHitParams& ProjectileHit);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
