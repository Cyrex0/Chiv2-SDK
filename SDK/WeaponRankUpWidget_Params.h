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
	 * Function WeaponRankUpWidget.WeaponRankUpWidget_C.SetIcon
	 */
	struct UWeaponRankUpWidget_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WeaponRankUpWidget.WeaponRankUpWidget_C.StartRankMessage
	 */
	struct UWeaponRankUpWidget_C_StartRankMessage_Params
	{
	public:
		struct FRankUpMessage                                      RankMessage;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WeaponRankUpWidget.WeaponRankUpWidget_C.ExecuteUbergraph_WeaponRankUpWidget
	 */
	struct UWeaponRankUpWidget_C_ExecuteUbergraph_WeaponRankUpWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
