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
	 * BlueprintGeneratedClass LoadItem.LoadItem_C
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class ULoadItem_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USingleTargetMethod*                                 SingleTargetMethod_352_48_ExecuteUbergraph_LoadItem_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChargingActivationMethod*                           ChargingActivationMethod_352_N80_ExecuteUbergraph_LoadItem_RefProperty; // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULoadItem*                                           LoadItem_704_112_ExecuteUbergraph_LoadItem_RefProperty;  // 0x00D0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        LoadItem_ExecuteUbergraph_LoadItem_RefProperty;          // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_LoadItem();
		void ExecuteUbergraph_LoadItem(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
