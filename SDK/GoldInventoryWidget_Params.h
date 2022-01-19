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
	 * Function GoldInventoryWidget.GoldInventoryWidget_C.Update Gold
	 */
	struct UGoldInventoryWidget_C_Update_Gold_Params
	{
	};

	/**
	 * Function GoldInventoryWidget.GoldInventoryWidget_C.Update Crowns
	 */
	struct UGoldInventoryWidget_C_Update_Crowns_Params
	{
	};

	/**
	 * Function GoldInventoryWidget.GoldInventoryWidget_C.Construct
	 */
	struct UGoldInventoryWidget_C_Construct_Params
	{
	};

	/**
	 * Function GoldInventoryWidget.GoldInventoryWidget_C.OnLogin
	 */
	struct UGoldInventoryWidget_C_OnLogin_Params
	{
	public:
		bool                                                       bIsLoaded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GoldInventoryWidget.GoldInventoryWidget_C.OnCurrencyChanged
	 */
	struct UGoldInventoryWidget_C_OnCurrencyChanged_Params
	{
	};

	/**
	 * Function GoldInventoryWidget.GoldInventoryWidget_C.OnPurchaseCompleted
	 */
	struct UGoldInventoryWidget_C_OnPurchaseCompleted_Params
	{
	public:
		bool                                                       WasPurchaseSuccessful;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FPrimaryAssetId>                             AssetIds;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function GoldInventoryWidget.GoldInventoryWidget_C.FadeInAnim
	 */
	struct UGoldInventoryWidget_C_FadeInAnim_Params
	{
	};

	/**
	 * Function GoldInventoryWidget.GoldInventoryWidget_C.ExecuteUbergraph_GoldInventoryWidget
	 */
	struct UGoldInventoryWidget_C_ExecuteUbergraph_GoldInventoryWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
