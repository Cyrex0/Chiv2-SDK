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
	 * BlueprintGeneratedClass RightFistTracers.RightFistTracers_C
	 * Size -> 0x0040 (FullSize[0x01B0] - InheritedSize[0x0170])
	 */
	class URightFistTracers_C : public UWeaponTracers
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParryTracers*                                       ParryTracers_272_208_ExecuteUbergraph_RightFistTracers_RefProperty; // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_656_N76_ExecuteUbergraph_RightFistTracers_RefProperty; // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttackTracers*                                      AttackTracers_272_N128_ExecuteUbergraph_RightFistTracers_RefProperty; // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULineTracers*                                        LineTracers_608_242_ExecuteUbergraph_RightFistTracers_RefProperty; // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_656_80_ExecuteUbergraph_RightFistTracers_RefProperty; // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttackTracers*                                      AttackTracers_272_32_ExecuteUbergraph_RightFistTracers_RefProperty; // 0x01A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponTracersBlueprint*                             RightFistTracers_ExecuteUbergraph_RightFistTracers_RefProperty; // 0x01A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_RightFistTracers();
		void ExecuteUbergraph_RightFistTracers(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
