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
	 * BlueprintGeneratedClass Ammo_BallistaBolt.Ammo_BallistaBolt_C
	 * Size -> 0x0014 (FullSize[0x10B8] - InheritedSize[0x10A4])
	 */
	class AAmmo_BallistaBolt_C : public ABaseArrow_C
	{
	public:
		unsigned char                                              UnknownData_CUYV[0x4];                                   // 0x10A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     AttachRagdoll;                                           // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetAttachRagdollParams(struct FAttachRagdollParams* AttachRagdollParams, class ATBLCharacter* Character, const struct FDeathDamageTakenEvent& DamageEvent);
		bool ShouldAttachRagdoll();
		void BaseProjectileBlockingHitWorld_Event_1(const struct FProjectileHitParams& ProjectileHit);
		void BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
		void OnInitialize();
		void ExecuteUbergraph_Ammo_BallistaBolt(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
