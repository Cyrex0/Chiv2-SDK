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
	 * BlueprintGeneratedClass ShoveTracers.ShoveTracers_C
	 * Size -> 0x0030 (FullSize[0x01A0] - InheritedSize[0x0170])
	 */
	class UShoveTracers_C : public UWeaponTracers
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAttackTracers*                                      AttackTracers_256_126_ExecuteUbergraph_ShoveTracers_RefProperty; // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAuraTracers*                                        AuraTracers_656_208_ExecuteUbergraph_ShoveTracers_RefProperty; // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAuraTracers*                                        AuraTracers_656_N80_ExecuteUbergraph_ShoveTracers_RefProperty; // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttackTracers*                                      AttackTracers_272_N162_ExecuteUbergraph_ShoveTracers_RefProperty; // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponTracersBlueprint*                             ShoveTracers_ExecuteUbergraph_ShoveTracers_RefProperty;  // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_ShoveTracers();
		void ExecuteUbergraph_ShoveTracers(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
