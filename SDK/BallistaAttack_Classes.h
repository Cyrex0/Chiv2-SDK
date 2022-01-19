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
	 * BlueprintGeneratedClass BallistaAttack.BallistaAttack_C
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UBallistaAttack_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UProjectileTargetMethod*                             ProjectileTargetMethod_464_176_ExecuteUbergraph_BallistaAttack_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChargingActivationMethod*                           ChargingActivationMethod_496_N64_ExecuteUbergraph_BallistaAttack_RefProperty; // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USingleTargetMethod*                                 SingleTargetMethod_848_208_ExecuteUbergraph_BallistaAttack_RefProperty; // 0x00D0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UConditionalActions*                                 ConditionalActions_1136_240_ExecuteUbergraph_BallistaAttack_RefProperty; // 0x00D8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStandardDamage*                                     StandardDamage_1424_352_ExecuteUbergraph_BallistaAttack_RefProperty; // 0x00E0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStandardDamage*                                     StandardDamage_1424_256_ExecuteUbergraph_BallistaAttack_RefProperty; // 0x00E8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsType*                                             IsType_1424_112_ExecuteUbergraph_BallistaAttack_RefProperty; // 0x00F0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        BallistaAttack_ExecuteUbergraph_BallistaAttack_RefProperty; // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_BallistaAttack();
		void ExecuteUbergraph_BallistaAttack(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
