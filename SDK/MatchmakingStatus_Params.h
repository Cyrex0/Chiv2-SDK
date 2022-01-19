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
	 * Function MatchmakingStatus.MatchmakingStatus_C.GetMatchmakingTime
	 */
	struct UMatchmakingStatus_C_GetMatchmakingTime_Params
	{
	public:
		int                                                        TimeInt;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TimeText;                                                // 0x0008(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.OnKeyDown
	 */
	struct UMatchmakingStatus_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.Handle Started or Stopped Matchmaking
	 */
	struct UMatchmakingStatus_C_Handle_Started_or_Stopped_Matchmaking_Params
	{
	public:
		bool                                                       Is_Matchmaking;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.On Is Matchmaking Changed
	 */
	struct UMatchmakingStatus_C_On_Is_Matchmaking_Changed_Params
	{
	public:
		bool                                                       bIsMatchmaking;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStarted
	 */
	struct UMatchmakingStatus_C_MatchmakingStarted_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStopped
	 */
	struct UMatchmakingStatus_C_MatchmakingStopped_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.CancelMatchmaking
	 */
	struct UMatchmakingStatus_C_CancelMatchmaking_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.HighlightMatchMaking
	 */
	struct UMatchmakingStatus_C_HighlightMatchMaking_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.UnhighlightMatchMaking
	 */
	struct UMatchmakingStatus_C_UnhighlightMatchMaking_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.Tick
	 */
	struct UMatchmakingStatus_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.OnInitialized
	 */
	struct UMatchmakingStatus_C_OnInitialized_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.OnPartyLeftQueue
	 */
	struct UMatchmakingStatus_C_OnPartyLeftQueue_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.OnPartyJoinedQueue
	 */
	struct UMatchmakingStatus_C_OnPartyJoinedQueue_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.Construct
	 */
	struct UMatchmakingStatus_C_Construct_Params
	{
	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.EnableMatchmakingWidget
	 */
	struct UMatchmakingStatus_C_EnableMatchmakingWidget_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MatchmakingStatus.MatchmakingStatus_C.ExecuteUbergraph_MatchmakingStatus
	 */
	struct UMatchmakingStatus_C_ExecuteUbergraph_MatchmakingStatus_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
