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
	 * Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.UpdateItem
	 */
	struct ULoadoutSpecialItemWidget_C_UpdateItem_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc;                                                    // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ChargingTitle;                                           // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ChargingDesc;                                            // 0x0050(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.ExecuteUbergraph_LoadoutSpecialItemWidget
	 */
	struct ULoadoutSpecialItemWidget_C_ExecuteUbergraph_LoadoutSpecialItemWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
