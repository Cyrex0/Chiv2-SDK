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
	 * BlueprintGeneratedClass Jab.Jab_C
	 * Size -> 0x0090 (FullSize[0x0148] - InheritedSize[0x00B8])
	 */
	class UJab_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMeleeTargetMethod*                                  MeleeTargetMethod_896_624_ExecuteUbergraph_Jab_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStartMovement*                                      StartMovement_2336_768_ExecuteUbergraph_Jab_RefProperty; // 0x00C8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStartMovement*                                      StartMovement_2224_1040_ExecuteUbergraph_Jab_RefProperty; // 0x00D0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsEnemy*                                            IsEnemy_2496_1088_ExecuteUbergraph_Jab_RefProperty;      // 0x00D8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStartMovement*                                      StartMovement_2272_1280_ExecuteUbergraph_Jab_RefProperty; // 0x00E0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlockedDamage*                                      BlockedDamage_2320_960_ExecuteUbergraph_Jab_RefProperty; // 0x00E8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UConditionalActions*                                 ConditionalActions_2000_752_ExecuteUbergraph_Jab_RefProperty; // 0x00F0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStandardDamage*                                     StandardDamage_2320_672_ExecuteUbergraph_Jab_RefProperty; // 0x00F8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsNot*                                              IsNot_2304_576_ExecuteUbergraph_Jab_RefProperty;         // 0x0100(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsEnemy*                                            IsEnemy_2208_736_ExecuteUbergraph_Jab_RefProperty;       // 0x0108(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsNot*                                              IsNot_2544_1376_ExecuteUbergraph_Jab_RefProperty;        // 0x0110(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsNot*                                              IsNot_2544_1296_ExecuteUbergraph_Jab_RefProperty;        // 0x0118(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsSelf*                                             IsSelf_2432_576_ExecuteUbergraph_Jab_RefProperty;        // 0x0120(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsCombatState*                                      IsCombatState_2704_1280_ExecuteUbergraph_Jab_RefProperty; // 0x0128(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsCombatState*                                      IsCombatState_2704_1376_ExecuteUbergraph_Jab_RefProperty; // 0x0130(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChargingActivationMethod*                           ChargingActivationMethod_608_N160_ExecuteUbergraph_Jab_RefProperty; // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        Jab_ExecuteUbergraph_Jab_RefProperty;                    // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_Jab();
		void ExecuteUbergraph_Jab(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
