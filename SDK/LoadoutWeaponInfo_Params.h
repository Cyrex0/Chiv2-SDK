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
	 * Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.UpdateWeaponInfo
	 */
	struct ULoadoutWeaponInfo_C_UpdateWeaponInfo_Params
	{
	public:
		class UClass*                                              Inventory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              CharacterClass;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.HideAllPerks
	 */
	struct ULoadoutWeaponInfo_C_HideAllPerks_Params
	{
	};

	/**
	 * Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.ExecuteUbergraph_LoadoutWeaponInfo
	 */
	struct ULoadoutWeaponInfo_C_ExecuteUbergraph_LoadoutWeaponInfo_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
