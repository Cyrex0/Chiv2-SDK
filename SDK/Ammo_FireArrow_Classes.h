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
	 * BlueprintGeneratedClass Ammo_FireArrow.Ammo_FireArrow_C
	 * Size -> 0x0031 (FullSize[0x10F2] - InheritedSize[0x10C1])
	 */
	class AAmmo_FireArrow_C : public AAmmo_StandardArrow_C
	{
	public:
		unsigned char                                              UnknownData_LUYV[0x7];                                   // 0x10C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTBLParticleSystemComponent*                         PassiveEffect;                                           // 0x10D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTBLParticleSystemComponent*                         TrailEffect;                                             // 0x10D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AttachRagdoll_1;                                         // 0x10E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    CloseCallCollisionSphere_1;                              // 0x10E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       StopFireSoundPlayed;                                     // 0x10F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       fire_arrow_hidden;                                       // 0x10F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnMovementFinished_Event_FireArrow();
		void FireArrow_AssignProjectileEvents();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Ammo_FireArrow(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
