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
	 * BlueprintGeneratedClass Carryable_OilPot.Carryable_OilPot_C
	 * Size -> 0x0020 (FullSize[0x1101] - InheritedSize[0x10E1])
	 */
	class ACarryable_OilPot_C : public ABaseCarryable_Throwable_C
	{
	public:
		unsigned char                                              UnknownData_AME0[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ps_sparkler;                                             // 0x10F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       WasThrown;                                               // 0x10F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QTW[0x3];                                   // 0x10F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DestroyDelay;                                            // 0x10FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HitHandled;                                              // 0x1100(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SpawnOilPot(const struct FVector& Location);
		void HandleHitEvent(const struct FHitResult& HitResult);
		void OnBlockingHit_Event_OilPot(const struct FHitResult& HitResult);
		void OnMovementStarted_OilPit();
		void OnComponentHit_Event_OilPot(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void DestroyOilPot();
		void CustomEvent_1();
		void OnInitialize();
		void ExecuteUbergraph_Carryable_OilPot(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
