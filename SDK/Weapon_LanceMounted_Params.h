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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Weapon_LanceMounted.Weapon_LanceMounted_C.OnMeleeSuccess
	 */
	struct AWeapon_LanceMounted_C_OnMeleeSuccess_Params
	{
	public:
		class ATBLCharacter*                                       DamagedCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Weapon_LanceMounted.Weapon_LanceMounted_C.OnWasParried
	 */
	struct AWeapon_LanceMounted_C_OnWasParried_Params
	{
	public:
		class ATBLCharacter*                                       ParryingCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Weapon_LanceMounted.Weapon_LanceMounted_C.ExecuteUbergraph_Weapon_LanceMounted
	 */
	struct AWeapon_LanceMounted_C_ExecuteUbergraph_Weapon_LanceMounted_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
