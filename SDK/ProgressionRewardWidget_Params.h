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
	 * Function ProgressionRewardWidget.ProgressionRewardWidget_C.GetSpacers
	 */
	struct UProgressionRewardWidget_C_GetSpacers_Params
	{
	public:
		class USpacer*                                             Spacer1;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USpacer*                                             Spacer2;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USpacer*                                             Spacer3;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ProgressionRewardWidget.ProgressionRewardWidget_C.PreConstruct
	 */
	struct UProgressionRewardWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ProgressionRewardWidget.ProgressionRewardWidget_C.Initialize Widget With Rewards
	 */
	struct UProgressionRewardWidget_C_Initialize_Widget_With_Rewards_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVirtualGoodReward>                          VirtualGoodRewards;                                      // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function ProgressionRewardWidget.ProgressionRewardWidget_C.SetHorizontalAlignment
	 */
	struct UProgressionRewardWidget_C_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             HorizontalAlignment;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ProgressionRewardWidget.ProgressionRewardWidget_C.ExecuteUbergraph_ProgressionRewardWidget
	 */
	struct UProgressionRewardWidget_C_ExecuteUbergraph_ProgressionRewardWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
