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
	 * BlueprintGeneratedClass Carryable_PaviseShield.Carryable_PaviseShield_C
	 * Size -> 0x000D (FullSize[0x11B1] - InheritedSize[0x11A4])
	 */
	class ACarryable_PaviseShield_C : public ABaseCarryable_Deployable_C
	{
	public:
		unsigned char                                              UnknownData_D0R7[0x4];                                   // 0x11A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x11A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TBL_EFaction                                               Faction;                                                 // 0x11B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnVisualizationActorSpawned();
		void ExecuteUbergraph_Carryable_PaviseShield(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
