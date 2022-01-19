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
	 * BlueprintGeneratedClass SpecialAttack.SpecialAttack_C
	 * Size -> 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
	 */
	class USpecialAttack_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMeleeTargetMethod*                                  MeleeTargetMethod_192_352_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStartMovement*                                      StartMovement_784_896_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x00C8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlockedDamage*                                      BlockedDamage_848_800_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x00D0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UConditionalActions*                                 ConditionalActions_688_448_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x00D8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStandardDamage*                                     StandardDamage_864_352_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x00E0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChargingActivationMethod*                           ChargingActivationMethod_496_80_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStartMovement*                                      StartMovement_928_480_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x00F0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsEnemy*                                            IsEnemy_960_416_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x00F8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStartMovement*                                      StartMovement_1248_96_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x0100(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEventCombatStateChanged*                            EventCombatStateChanged_880_96_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x0108(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsAttackType*                                       IsAttackType_1504_128_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x0110(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        SpecialAttack_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_SpecialAttack();
		void ExecuteUbergraph_SpecialAttack(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
