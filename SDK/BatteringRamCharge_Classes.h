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
	 * BlueprintGeneratedClass BatteringRamCharge.BatteringRamCharge_C
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UBatteringRamCharge_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USingleTargetMethod*                                 SingleTargetMethod_560_272_ExecuteUbergraph_BatteringRamCharge_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        BatteringRamCharge_ExecuteUbergraph_BatteringRamCharge_RefProperty; // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOnOffActivationMethod*                              OnOffActivationMethod_576_16_ExecuteUbergraph_BatteringRamCharge_RefProperty; // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_BatteringRamCharge();
		void ExecuteUbergraph_BatteringRamCharge(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
