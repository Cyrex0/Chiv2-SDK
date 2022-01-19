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
	 * BlueprintGeneratedClass BP_BreakablePaviseShield.BP_BreakablePaviseShield_C
	 * Size -> 0x0076 (FullSize[0x04B8] - InheritedSize[0x0442])
	 */
	class ABP_BreakablePaviseShield_C : public ABP_BaseBreakableGate_C
	{
	public:
		unsigned char                                              UnknownData_UK2C[0x6];                                   // 0x0442(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInteractableComponent*                              Interactable;                                            // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_DustImpact;                                           // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Interactable_Pavise_Mason_01;                         // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTeamOwnershipComponent*                             TeamOwnership;                                           // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       InteractableCollisionBox;                                // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_2_E041150A4AF9337B4C90948B23DFABD0;  // 0x0478(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Impact1_E041150A4AF9337B4C90948B23DFABD0;     // 0x047C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_E041150A4AF9337B4C90948B23DFABD0;  // 0x0480(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S340[0x7];                                   // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EFaction                                               Faction;                                                 // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_3SKO[0x3];                                   // 0x0491(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForwardTraceDistance;                                    // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CachedBrokenRotation;                                    // 0x0498(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CachedBrokenLocation;                                    // 0x04A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        LifespanTimerHandler;                                    // 0x04B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetGroundOffset(bool Forward, float* _);
		void UpdateTeam();
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_0__NewTrack_1__EventFunc();
		void OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397(class UObject* Loaded);
		void ReceiveBeginPlay();
		void BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
		void KilledFx(const struct FDamageTakenEvent& DamageTakenEvent);
		void BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
		void ApplyFFAMaterial();
		void ForceBrokenState();
		void ResetLifespanTimer();
		void DestroyConstructable();
		void ExecuteUbergraph_BP_BreakablePaviseShield(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
