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
	 * BlueprintGeneratedClass BP_flammableSceneComponent.BP_flammableSceneComponent_C
	 * Size -> 0x0048 (FullSize[0x0548] - InheritedSize[0x0500])
	 */
	class UBP_flammableSceneComponent_C : public UFlammableStaticMeshComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0500(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystem*                                     Burning_Particle_System;                                 // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     Destroyed_Particle_System;                               // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     AllLocators;                                             // 0x0518(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      PosPerM_3;                                               // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GridJitter;                                              // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRandomStream                                       RandomizationStream;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor
		class FScriptMulticastDelegate                             LocatorsCreated;                                         // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void CreateSpawnLocators();
		void ReceiveBeginPlay();
		void CreateLocators();
		void ExecuteUbergraph_BP_flammableSceneComponent(int EntryPoint);
		void LocatorsCreated__DelegateSignature(class UBP_flammableSceneComponent_C* Component);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
