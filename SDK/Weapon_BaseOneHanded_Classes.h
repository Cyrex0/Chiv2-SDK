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
	 * BlueprintGeneratedClass Weapon_BaseOneHanded.Weapon_BaseOneHanded_C
	 * Size -> 0x0018 (FullSize[0x1128] - InheritedSize[0x1110])
	 */
	class AWeapon_BaseOneHanded_C : public ABaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1110(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       WorldHitTracers;                                         // 0x1118(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       MainTracers;                                             // 0x1120(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnInitialize();
		void ExecuteUbergraph_Weapon_BaseOneHanded(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
