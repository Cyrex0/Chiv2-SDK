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
	 * BlueprintGeneratedClass Weapon_Javelin.Weapon_Javelin_C
	 * Size -> 0x0008 (FullSize[0x1130] - InheritedSize[0x1128])
	 */
	class AWeapon_Javelin_C : public AWeapon_BaseTwoHanded_C
	{
	public:
		class USceneComponent*                                     AttachRagdoll;                                           // 0x1128(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
