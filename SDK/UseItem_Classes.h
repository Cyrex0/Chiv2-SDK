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
	 * BlueprintGeneratedClass UseItem.UseItem_C
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UUseItem_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USingleTargetMethod*                                 SingleTargetMethod_352_48_ExecuteUbergraph_UseItem_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUseItem*                                            UseItem_704_N48_ExecuteUbergraph_UseItem_RefProperty;    // 0x00C8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChargingActivationMethod*                           ChargingActivationMethod_352_N80_ExecuteUbergraph_UseItem_RefProperty; // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCanUseItem*                                         CanUseItem_704_N128_ExecuteUbergraph_UseItem_RefProperty; // 0x00D8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        UseItem_ExecuteUbergraph_UseItem_RefProperty;            // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_UseItem();
		void ExecuteUbergraph_UseItem(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
