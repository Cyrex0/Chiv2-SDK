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
	 * BlueprintGeneratedClass Carryable_Torch.Carryable_Torch_C
	 * Size -> 0x0038 (FullSize[0x1119] - InheritedSize[0x10E1])
	 */
	class ACarryable_Torch_C : public ABaseCarryable_Offhand_C
	{
	public:
		unsigned char                                              UnknownData_8BWV[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x10F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HitLocation;                                             // 0x10F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HitNormal;                                               // 0x1104(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastOwner;                                               // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Ignited;                                                 // 0x1118(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature(const struct FHitResult& HitResult);
		void PlayBurnableHitEvent(class AActor* HitActor);
		void TorchAppliedBurning(class AActor* Hit_Actor);
		void Play_World_Hit_Event(class AActor* Hit_Actor, const struct FVector& Hit_Location, const struct FVector& Hit_Normal);
		void OnAddedToInventoryChanged_Event(class AInventoryItem* Item, bool IsAddedToInventory);
		void OnInitialize();
		void ExecuteUbergraph_Carryable_Torch(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
