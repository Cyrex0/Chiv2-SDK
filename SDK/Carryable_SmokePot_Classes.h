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
	 * BlueprintGeneratedClass Carryable_SmokePot.Carryable_SmokePot_C
	 * Size -> 0x0017 (FullSize[0x10F8] - InheritedSize[0x10E1])
	 */
	class ACarryable_SmokePot_C : public ABaseCarryable_Throwable_C
	{
	public:
		unsigned char                                              UnknownData_VM0E[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       WasThrown;                                               // 0x10F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HitHandled;                                              // 0x10F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8G1R[0x2];                                   // 0x10F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DestroyDelay;                                            // 0x10F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleHitEvent(const struct FHitResult& HitResult);
		void SpawnSmokeActor(const struct FVector& Location);
		void HitCharacter(class ATBLCharacter* Character);
		void OnBlockingHit_Event_SmokePot(const struct FHitResult& HitResult);
		void OnMovementStarted_Event_SmokePot();
		void OnComponentHit_Event_SmokePot(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void DestroySmokePot();
		void CustomEvent();
		void OnInitialize();
		void ExecuteUbergraph_Carryable_SmokePot(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
