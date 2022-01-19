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
	 * BlueprintGeneratedClass DropItem.DropItem_C
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UDropItem_C : public UFxInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USingleTargetMethod*                                 SingleTargetMethod_464_288_ExecuteUbergraph_DropItem_RefProperty; // 0x00C0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDropItem*                                           DropItem_800_144_ExecuteUbergraph_DropItem_RefProperty;  // 0x00C8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChannelingActivationMethod*                         ChannelingActivationMethod_464_64_ExecuteUbergraph_DropItem_RefProperty; // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCanDropItem*                                        CanDropItem_800_16_ExecuteUbergraph_DropItem_RefProperty; // 0x00D8(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilitySpec*                                        DropItem_ExecuteUbergraph_DropItem_RefProperty;          // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_DropItem();
		void ExecuteUbergraph_DropItem(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
