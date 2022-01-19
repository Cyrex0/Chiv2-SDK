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
	 * BlueprintGeneratedClass Tackle.Tackle_C
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UTackle_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMeleeTargetMethod*                                  MeleeTargetMethod_528_672_ExecuteUbergraph_Tackle_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChargingActivationMethod*                           ChargingActivationMethod_496_16_ExecuteUbergraph_Tackle_RefProperty; // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsSelf*                                             IsSelf_1392_512_ExecuteUbergraph_Tackle_RefProperty;     // 0x00D0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIsNot*                                              IsNot_1248_480_ExecuteUbergraph_Tackle_RefProperty;      // 0x00D8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStartMovement*                                      StartMovement_1264_640_ExecuteUbergraph_Tackle_RefProperty; // 0x00E0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlockedDamage*                                      BlockedDamage_1280_864_ExecuteUbergraph_Tackle_RefProperty; // 0x00E8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStandardDamage*                                     StandardDamage_1264_576_ExecuteUbergraph_Tackle_RefProperty; // 0x00F0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        Tackle_ExecuteUbergraph_Tackle_RefProperty;              // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_Tackle();
		void ExecuteUbergraph_Tackle(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
