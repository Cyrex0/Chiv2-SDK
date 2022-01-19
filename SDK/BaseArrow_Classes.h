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
	 * BlueprintGeneratedClass BaseArrow.BaseArrow_C
	 * Size -> 0x0034 (FullSize[0x10A4] - InheritedSize[0x1070])
	 */
	class ABaseArrow_C : public ABaseInventoryItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1070(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ProjectileTailParticleComponent;                         // 0x1078(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialBillboardComponent*                         MaterialGlint;                                           // 0x1080(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        EnableParticleTimer;                                     // 0x1088(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     arrowtrail_Instigator;                                   // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     arrowtrail;                                              // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartTimeStamp;                                          // 0x10A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_StartTimestamp();
		void PlaySoundOnLocalFakeClient(class UAkAudioEvent* Sound, bool* Success);
		void UserConstructionScript();
		void Disable_glint();
		void Enable_glint();
		void EnableProjectileTailParticle();
		void DisableProjectileTailParticle();
		void ProjectileMovementStarted_BaseArrow();
		void ProjectileMovementStopped_BaseArrow();
		void BaseArrow_AssignProjectileEvents();
		void ParticleTimerEvent();
		void ExecuteUbergraph_BaseArrow(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
