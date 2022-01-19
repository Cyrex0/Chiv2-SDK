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
	 * BlueprintGeneratedClass Ammo_FireCrossbowBolt.Ammo_FireCrossbowBolt_C
	 * Size -> 0x002D (FullSize[0x10D1] - InheritedSize[0x10A4])
	 */
	class AAmmo_FireCrossbowBolt_C : public ABaseArrow_C
	{
	public:
		unsigned char                                              UnknownData_2EGD[0x4];                                   // 0x10A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTBLParticleSystemComponent*                         PassiveEffect;                                           // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTBLParticleSystemComponent*                         TrailEffect;                                             // 0x10B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AttachRagdoll;                                           // 0x10C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    CloseCallCollisionSphere;                                // 0x10C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       StopSoundPlayed;                                         // 0x10D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void CrossbowBolt_AssignProjectileEvents();
		void OnMovementStarted_Event_Bolt();
		void OnMovementFinished_Event_Bolt();
		void ExecuteUbergraph_Ammo_FireCrossbowBolt(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
