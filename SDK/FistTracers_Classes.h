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
	 * BlueprintGeneratedClass FistTracers.FistTracers_C
	 * Size -> 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
	 */
	class UFistTracers_C : public UWeaponTracers
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAttackTracers*                                      AttackTracers_272_N96_ExecuteUbergraph_FistTracers_RefProperty; // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_656_48_ExecuteUbergraph_FistTracers_RefProperty; // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxTracers*                                         BoxTracers_656_N48_ExecuteUbergraph_FistTracers_RefProperty; // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponTracersBlueprint*                             FistTracers_ExecuteUbergraph_FistTracers_RefProperty;    // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_FistTracers();
		void ExecuteUbergraph_FistTracers(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
