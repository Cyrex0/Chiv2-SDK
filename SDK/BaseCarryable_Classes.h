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
	 * BlueprintGeneratedClass BaseCarryable.BaseCarryable_C
	 * Size -> 0x0071 (FullSize[0x10E1] - InheritedSize[0x1070])
	 */
	class ABaseCarryable_C : public ABaseInventoryItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1070(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       WorldHitTracers;                                         // 0x1078(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       MainTracers;                                             // 0x1080(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FsCarryableImpact>                           WorldImpactEvents;                                       // 0x1088(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		class UMaterialInterface*                                  Decal;                                                   // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DecalSize;                                               // 0x10A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1D2G[0x4];                                   // 0x10AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FsCarryableImpact                                   CustomImpactVariant;                                     // 0x10B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayedFakeClientEffects;                                 // 0x10E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateImpact(float DistanceTravelled, int* Index, bool* Success);
		void OnCustomImpact(int Index, const struct FProjectileHitParams& ProjectileHit);
		void BaseProjectileBlockingHitWorld_Event_BaseCarryable(const struct FProjectileHitParams& ProjectileHit);
		void BaseProjectileBlockingHitNonWorld_Event_BaseCarryable(const struct FProjectileHitParams& ProjectileHit);
		void OnInitialize();
		void ExecuteUbergraph_BaseCarryable(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
