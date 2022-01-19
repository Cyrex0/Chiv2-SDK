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
	 * BlueprintGeneratedClass WoundSystemExtras.WoundSystemExtras_C
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UWoundSystemExtras_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bNavigation;                                             // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2FF1[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Health;                                                  // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseRagdoll;                                              // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V95Q[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BloodMaskOpacity;                                        // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMoveFinished_A3D3E2CF422428332F8BC5B7875830A9(AIModule_EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_A3D3E2CF422428332F8BC5B7875830A9();
		void ReceiveBeginPlay();
		void HitEffects(const struct FHitResult& HitInfo, const struct FVector& Location);
		void HitRagdoll(const class FName& BoneName, const struct FVector& HitLocation, const struct FVector& Direction);
		void HealthDecrease(float Damage, const class FName& BoneName);
		void Ragdoll();
		void Navigate();
		void Hit(float Damage, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, const struct FHitResult& HitInfo);
		void ExecuteUbergraph_WoundSystemExtras(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
