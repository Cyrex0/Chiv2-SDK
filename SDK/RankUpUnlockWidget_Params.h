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
	 * Function RankUpUnlockWidget.RankUpUnlockWidget_C.StartUnlockMessage
	 */
	struct URankUpUnlockWidget_C_StartUnlockMessage_Params
	{
	public:
		struct FPrimaryAssetId                                     Unlocked;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RankUpUnlockWidget.RankUpUnlockWidget_C.ExecuteUbergraph_RankUpUnlockWidget
	 */
	struct URankUpUnlockWidget_C_ExecuteUbergraph_RankUpUnlockWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
