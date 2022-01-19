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
	 * BlueprintGeneratedClass OnlineConfig.OnlineConfig_C
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UOnlineConfig_C : public UOnlineConfig
	{
	public:
		void IsRanged(TBL_EInventoryType InventoryItemType, bool* Return_Value);
		void EventGetAchievementCategory(const struct FAchievementProgress& InAchievement, class FText* Category, class FText* Subcategory, int* DisplayPriority);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
