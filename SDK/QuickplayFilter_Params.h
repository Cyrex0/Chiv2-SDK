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
	 * Function QuickplayFilter.QuickplayFilter_C.Update Selected Queue
	 */
	struct UQuickplayFilter_C_Update_Selected_Queue_Params
	{
	public:
		class UQuickplayFilterButton_C*                            Filter_Button;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilter.QuickplayFilter_C.UpdateVisibleButtons
	 */
	struct UQuickplayFilter_C_UpdateVisibleButtons_Params
	{
	public:
		int                                                        SelectedCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilter.QuickplayFilter_C.Get Selected Queues
	 */
	struct UQuickplayFilter_C_Get_Selected_Queues_Params
	{
	public:
		TArray<struct FMatchmakingQueue>                           Queues;                                                  // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilter.QuickplayFilter_C.OnInitialized
	 */
	struct UQuickplayFilter_C_OnInitialized_Params
	{
	};

	/**
	 * Function QuickplayFilter.QuickplayFilter_C.OnMatchmakingQueueStatisticsChanged_Event_1
	 */
	struct UQuickplayFilter_C_OnMatchmakingQueueStatisticsChanged_Event_1_Params
	{
	public:
		class FName                                                QueueName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilter.QuickplayFilter_C.On Queues Updated
	 */
	struct UQuickplayFilter_C_On_Queues_Updated_Params
	{
	};

	/**
	 * Function QuickplayFilter.QuickplayFilter_C.OnMatchMakingChanged
	 */
	struct UQuickplayFilter_C_OnMatchMakingChanged_Params
	{
	public:
		bool                                                       bIsMatchmaking;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function QuickplayFilter.QuickplayFilter_C.OnFilterSelectionChange
	 */
	struct UQuickplayFilter_C_OnFilterSelectionChange_Params
	{
	public:
		class UQuickplayFilterButton_C*                            QuickplayFilterButton;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilter.QuickplayFilter_C.ExecuteUbergraph_QuickplayFilter
	 */
	struct UQuickplayFilter_C_ExecuteUbergraph_QuickplayFilter_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
