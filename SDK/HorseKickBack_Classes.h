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
	 * BlueprintGeneratedClass HorseKickBack.HorseKickBack_C
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UHorseKickBack_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereTargetMethod*                                 SphereTargetMethod_400_192_ExecuteUbergraph_HorseKickBack_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStandardDamage*                                     StandardDamage_912_432_ExecuteUbergraph_HorseKickBack_RefProperty; // 0x00C8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsNot*                                              IsNot_928_304_ExecuteUbergraph_HorseKickBack_RefProperty; // 0x00D0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsSelf*                                             IsSelf_1088_304_ExecuteUbergraph_HorseKickBack_RefProperty; // 0x00D8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChargingActivationMethod*                           ChargingActivationMethod_464_32_ExecuteUbergraph_HorseKickBack_RefProperty; // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        HorseKickBack_ExecuteUbergraph_HorseKickBack_RefProperty; // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_HorseKickBack();
		void ExecuteUbergraph_HorseKickBack(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
