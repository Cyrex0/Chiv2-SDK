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
	 * BlueprintGeneratedClass NormalTracers.NormalTracers_C
	 * Size -> 0x0048 (FullSize[0x01B8] - InheritedSize[0x0170])
	 */
	class UNormalTracers_C : public UWeaponTracers
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParryTracers*                                       ParryTracers_272_240_ExecuteUbergraph_NormalTracers_RefProperty; // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_656_N32_ExecuteUbergraph_NormalTracers_RefProperty; // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttackTracers*                                      AttackTracers_272_N64_ExecuteUbergraph_NormalTracers_RefProperty; // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_656_48_ExecuteUbergraph_NormalTracers_RefProperty; // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_656_N208_ExecuteUbergraph_NormalTracers_RefProperty; // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttackTracers*                                      AttackTracers_272_N256_ExecuteUbergraph_NormalTracers_RefProperty; // 0x01A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULineTracers*                                        LineTracers_608_272_ExecuteUbergraph_NormalTracers_RefProperty; // 0x01A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponTracersBlueprint*                             NormalTracers_ExecuteUbergraph_NormalTracers_RefProperty; // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_NormalTracers();
		void ExecuteUbergraph_NormalTracers(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
