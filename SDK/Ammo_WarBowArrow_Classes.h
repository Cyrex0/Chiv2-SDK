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
	 * BlueprintGeneratedClass Ammo_WarBowArrow.Ammo_WarBowArrow_C
	 * Size -> 0x001D (FullSize[0x10C1] - InheritedSize[0x10A4])
	 */
	class AAmmo_WarBowArrow_C : public ABaseArrow_C
	{
	public:
		unsigned char                                              UnknownData_UYLO[0x4];                                   // 0x10A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     AttachRagdoll;                                           // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    CloseCallCollisionSphere;                                // 0x10B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       StopSoundPlayed;                                         // 0x10C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnMovementStarted_Event_Arrow();
		void OnMovementFinished_Event_Arrow();
		void StandardArrow_AssignProjectileEvents();
		void ExecuteUbergraph_Ammo_WarBowArrow(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
