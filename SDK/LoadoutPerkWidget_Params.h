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
	 * Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdatePerk
	 */
	struct ULoadoutPerkWidget_C_UpdatePerk_Params
	{
	public:
		class FText                                                PerkName;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PerkDesc;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       isAbility;                                               // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWidget
	 */
	struct ULoadoutPerkWidget_C_UpdateWidget_Params
	{
	public:
		class FText                                                PerkName;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PerkDesc;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWeapon
	 */
	struct ULoadoutPerkWidget_C_UpdateWeapon_Params
	{
	public:
		class FText                                                PerkName;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PerkDesc;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Icon;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutPerkWidget.LoadoutPerkWidget_C.ExecuteUbergraph_LoadoutPerkWidget
	 */
	struct ULoadoutPerkWidget_C_ExecuteUbergraph_LoadoutPerkWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
