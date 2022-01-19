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
	 * BlueprintGeneratedClass LeftFistTracers.LeftFistTracers_C
	 * Size -> 0x0040 (FullSize[0x01B0] - InheritedSize[0x0170])
	 */
	class ULeftFistTracers_C : public UWeaponTracers
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParryTracers*                                       ParryTracers_272_80_ExecuteUbergraph_LeftFistTracers_RefProperty; // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_640_N204_ExecuteUbergraph_LeftFistTracers_RefProperty; // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttackTracers*                                      AttackTracers_256_N256_ExecuteUbergraph_LeftFistTracers_RefProperty; // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULineTracers*                                        LineTracers_592_100_ExecuteUbergraph_LeftFistTracers_RefProperty; // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_640_N32_ExecuteUbergraph_LeftFistTracers_RefProperty; // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttackTracers*                                      AttackTracers_256_N84_ExecuteUbergraph_LeftFistTracers_RefProperty; // 0x01A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponTracersBlueprint*                             LeftFistTracers_ExecuteUbergraph_LeftFistTracers_RefProperty; // 0x01A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_LeftFistTracers();
		void ExecuteUbergraph_LeftFistTracers(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
