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
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.SendFFA MatchEndedMessages
	 */
	struct UGameModeMessageComponent_C_SendFFA_MatchEndedMessages_Params
	{
	public:
		class ATBLPlayerState*                                     Player_Victor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.RemovePreviousStageContextVos
	 */
	struct UGameModeMessageComponent_C_RemovePreviousStageContextVos_Params
	{
	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.AppendAndGetTDMMessages
	 */
	struct UGameModeMessageComponent_C_AppendAndGetTDMMessages_Params
	{
	public:
		TArray<class FString>                                      TDMPercentMessages;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class FString>                                      TDMTicketsMessage;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<struct FGameModeMessageTable>                       Messages;                                                // 0x0020(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsPercentText
	 */
	struct UGameModeMessageComponent_C_GetTDMStageTicketsPercentText_Params
	{
	public:
		int                                                        TicketsRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        InitialTickets;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      EventTags;                                               // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.NewStageStarted
	 */
	struct UGameModeMessageComponent_C_NewStageStarted_Params
	{
	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.BroadcastMessages
	 */
	struct UGameModeMessageComponent_C_BroadcastMessages_Params
	{
	public:
		TArray<struct FGameModeMessageTable>                       GameModeMessages;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.TriggerStageEndingMusic
	 */
	struct UGameModeMessageComponent_C_TriggerStageEndingMusic_Params
	{
	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingScoreComplete
	 */
	struct UGameModeMessageComponent_C_HandleStageNearingScoreComplete_Params
	{
	public:
		int                                                        NewScorePercentage;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingTimeOut
	 */
	struct UGameModeMessageComponent_C_HandleStageNearingTimeOut_Params
	{
	public:
		int                                                        MinutesRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.FormatFFAText
	 */
	struct UGameModeMessageComponent_C_FormatFFAText_Params
	{
	public:
		TArray<struct FGameModeMessageTable>                       GameModeMessages;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Kills;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        KillsForVictory;                                         // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGameModeMessageTable>                       FormattedGameModeMessages;                               // 0x0020(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.SetStageLastScore
	 */
	struct UGameModeMessageComponent_C_SetStageLastScore_Params
	{
	public:
		int                                                        Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetGameModeMessages
	 */
	struct UGameModeMessageComponent_C_GetGameModeMessages_Params
	{
	public:
		TArray<class FString>                                      EventTags;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<struct FGameModeMessageTable>                       Messages;                                                // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageLastScore
	 */
	struct UGameModeMessageComponent_C_GetStageLastScore_Params
	{
	public:
		int                                                        LastScore;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageMinutesRemaingText
	 */
	struct UGameModeMessageComponent_C_GetStageMinutesRemaingText_Params
	{
	public:
		int                                                        MinutesRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      EventTags;                                               // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsText
	 */
	struct UGameModeMessageComponent_C_GetTDMStageTicketsText_Params
	{
	public:
		int                                                        TicketsRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        InitialTickets;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      EventTags;                                               // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetFactionVictoryText
	 */
	struct UGameModeMessageComponent_C_GetFactionVictoryText_Params
	{
	public:
		TBL_EFaction                                               VictoryFaction;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      EventTags;                                               // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetDefenderVictoryText
	 */
	struct UGameModeMessageComponent_C_GetDefenderVictoryText_Params
	{
	public:
		TArray<class FString>                                      EventTags;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetAttackerVictoryText
	 */
	struct UGameModeMessageComponent_C_GetAttackerVictoryText_Params
	{
	public:
		TArray<class FString>                                      EventTags;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetScoreStageScoreRows
	 */
	struct UGameModeMessageComponent_C_GetScoreStageScoreRows_Params
	{
	public:
		int                                                        Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGameModeMessageTable>                       Messages;                                                // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.QueueGameModeMessages
	 */
	struct UGameModeMessageComponent_C_QueueGameModeMessages_Params
	{
	public:
		TArray<struct FGameModeMessageTable>                       Messages;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageBeginText
	 */
	struct UGameModeMessageComponent_C_GetStageBeginText_Params
	{
	public:
		TArray<class FString>                                      EventTags;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveBeginPlay
	 */
	struct UGameModeMessageComponent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveTick
	 */
	struct UGameModeMessageComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.Started New Stage_Event_1
	 */
	struct UGameModeMessageComponent_C_Started_New_Stage_Event_1_Params
	{
	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.On Score Changed_Event_1
	 */
	struct UGameModeMessageComponent_C_On_Score_Changed_Event_1_Params
	{
	public:
		int                                                        CurrentScore;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        MaxScore;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.On Tickets Changed_Event_1
	 */
	struct UGameModeMessageComponent_C_On_Tickets_Changed_Event_1_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        NewTickets;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.MinutesRemaining_Event_1
	 */
	struct UGameModeMessageComponent_C_MinutesRemaining_Event_1_Params
	{
	public:
		int                                                        MinutesRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.KillLeaderUpdated_Event_1
	 */
	struct UGameModeMessageComponent_C_KillLeaderUpdated_Event_1_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Kills;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        MaxScore;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.MatchWaitingToStart
	 */
	struct UGameModeMessageComponent_C_MatchWaitingToStart_Params
	{
	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.Interface_QueueGameModeMessages
	 */
	struct UGameModeMessageComponent_C_Interface_QueueGameModeMessages_Params
	{
	public:
		TArray<struct FGameModeMessageTable>                       Messages;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.FFAPlayerVictory
	 */
	struct UGameModeMessageComponent_C_FFAPlayerVictory_Params
	{
	public:
		class ATBLPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.OnMatchWonBy_Event_1
	 */
	struct UGameModeMessageComponent_C_OnMatchWonBy_Event_1_Params
	{
	public:
		TBL_EFaction                                               Victor;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageComponent.GameModeMessageComponent_C.ExecuteUbergraph_GameModeMessageComponent
	 */
	struct UGameModeMessageComponent_C_ExecuteUbergraph_GameModeMessageComponent_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
