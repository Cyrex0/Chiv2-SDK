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
	 * BlueprintGeneratedClass Weapon_Ballista.Weapon_Ballista_C
	 * Size -> 0x0008 (FullSize[0x1078] - InheritedSize[0x1070])
	 */
	class AWeapon_Ballista_C : public ABaseInventoryItem_C
	{
	public:
		class UBoxComponent*                                       MainTracers;                                             // 0x1070(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
