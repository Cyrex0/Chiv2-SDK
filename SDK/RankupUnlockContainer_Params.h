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
	 * Function RankupUnlockContainer.RankupUnlockContainer_C.StartRankMessage
	 */
	struct URankupUnlockContainer_C_StartRankMessage_Params
	{
	public:
		struct FRankUpMessage                                      RankMessage;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RankupUnlockContainer.RankupUnlockContainer_C.StartUnlockMessage
	 */
	struct URankupUnlockContainer_C_StartUnlockMessage_Params
	{
	public:
		struct FPrimaryAssetId                                     Unlocked;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RankupUnlockContainer.RankupUnlockContainer_C.Construct
	 */
	struct URankupUnlockContainer_C_Construct_Params
	{
	};

	/**
	 * Function RankupUnlockContainer.RankupUnlockContainer_C.AddWidgetToList
	 */
	struct URankupUnlockContainer_C_AddWidgetToList_Params
	{
	public:
		class UWidget*                                             NewWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RankupUnlockContainer.RankupUnlockContainer_C.ExecuteUbergraph_RankupUnlockContainer
	 */
	struct URankupUnlockContainer_C_ExecuteUbergraph_RankupUnlockContainer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
