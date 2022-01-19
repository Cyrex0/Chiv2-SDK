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
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.GetStartingRatio
	 */
	struct UGlobalRankProgressBarWidget_C_GetStartingRatio_Params
	{
	public:
		class UProgressBar*                                        Bar;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.SetLevelData
	 */
	struct UGlobalRankProgressBarWidget_C_SetLevelData_Params
	{
	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Tick
	 */
	struct UGlobalRankProgressBarWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsStatValueChanged
	 */
	struct UGlobalRankProgressBarWidget_C_OnlineStatsStatValueChanged_Params
	{
	public:
		TBL_EOnlineStat                                            Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Start Animating
	 */
	struct UGlobalRankProgressBarWidget_C_Start_Animating_Params
	{
	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.On Progress Bar Filled
	 */
	struct UGlobalRankProgressBarWidget_C_On_Progress_Bar_Filled_Params
	{
	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Inital Values
	 */
	struct UGlobalRankProgressBarWidget_C_Set_Inital_Values_Params
	{
	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Data
	 */
	struct UGlobalRankProgressBarWidget_C_Set_Data_Params
	{
	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsLogin
	 */
	struct UGlobalRankProgressBarWidget_C_OnStatsLogin_Params
	{
	public:
		bool                                                       bIsLoaded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsUpdated
	 */
	struct UGlobalRankProgressBarWidget_C_OnStatsUpdated_Params
	{
	public:
		struct FTBLOnlineStats                                     OnlineStats;                                             // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Bind Delegates
	 */
	struct UGlobalRankProgressBarWidget_C_Bind_Delegates_Params
	{
	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsOriginalValueChanged
	 */
	struct UGlobalRankProgressBarWidget_C_OnlineStatsOriginalValueChanged_Params
	{
	public:
		TBL_EOnlineStat                                            Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnInitialized
	 */
	struct UGlobalRankProgressBarWidget_C_OnInitialized_Params
	{
	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.ExecuteUbergraph_GlobalRankProgressBarWidget
	 */
	struct UGlobalRankProgressBarWidget_C_ExecuteUbergraph_GlobalRankProgressBarWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnProgressCompleted__DelegateSignature
	 */
	struct UGlobalRankProgressBarWidget_C_OnProgressCompleted__DelegateSignature_Params
	{
	};

	/**
	 * Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnLeveledUp__DelegateSignature
	 */
	struct UGlobalRankProgressBarWidget_C_OnLeveledUp__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
