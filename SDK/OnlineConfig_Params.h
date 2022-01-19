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
	 * Function OnlineConfig.OnlineConfig_C.IsRanged
	 */
	struct UOnlineConfig_C_IsRanged_Params
	{
	public:
		TBL_EInventoryType                                         InventoryItemType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return_Value;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OnlineConfig.OnlineConfig_C.EventGetAchievementCategory
	 */
	struct UOnlineConfig_C_EventGetAchievementCategory_Params
	{
	public:
		struct FAchievementProgress                                InAchievement;                                           // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class FText                                                Category;                                                // 0x0038(0x0018)  (Parm, OutParm)
		class FText                                                Subcategory;                                             // 0x0050(0x0018)  (Parm, OutParm)
		int                                                        DisplayPriority;                                         // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
