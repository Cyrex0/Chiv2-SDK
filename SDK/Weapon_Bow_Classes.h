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
	 * BlueprintGeneratedClass Weapon_Bow.Weapon_Bow_C
	 * Size -> 0x0018 (FullSize[0x1128] - InheritedSize[0x1110])
	 */
	class AWeapon_Bow_C : public ABaseWeapon_C
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x1110(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       WorldHitTracers;                                         // 0x1118(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       MainTracers;                                             // 0x1120(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		class USkeletalMeshComponent* GetSkeletalMesh();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
