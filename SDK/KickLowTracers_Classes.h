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
	 * BlueprintGeneratedClass KickLowTracers.KickLowTracers_C
	 * Size -> 0x0030 (FullSize[0x01A0] - InheritedSize[0x0170])
	 */
	class UKickLowTracers_C : public UWeaponTracers
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAttackTracers*                                      AttackTracers_272_59_ExecuteUbergraph_KickLowTracers_RefProperty; // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAuraTracers*                                        AuraTracers_672_144_ExecuteUbergraph_KickLowTracers_RefProperty; // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAuraTracers*                                        AuraTracers_672_N74_ExecuteUbergraph_KickLowTracers_RefProperty; // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttackTracers*                                      AttackTracers_272_N160_ExecuteUbergraph_KickLowTracers_RefProperty; // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWeaponTracersBlueprint*                             KickLowTracers_ExecuteUbergraph_KickLowTracers_RefProperty; // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_KickLowTracers();
		void ExecuteUbergraph_KickLowTracers(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
