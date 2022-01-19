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
	 * BlueprintGeneratedClass Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C
	 * Size -> 0x0017 (FullSize[0x10D8] - InheritedSize[0x10C1])
	 */
	class AAmmo_Fire_WarBowArrow_C : public AAmmo_WarBowArrow_C
	{
	public:
		unsigned char                                              UnknownData_WE8H[0x7];                                   // 0x10C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTBLParticleSystemComponent*                         PassiveEffect;                                           // 0x10D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void OnMovementFinished_Event_FireArrow();
		void FireArrow_AssignProjectileEvents();
		void ExecuteUbergraph_Ammo_Fire_WarBowArrow(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
