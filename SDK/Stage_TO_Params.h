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
	 * Function Stage_TO.Stage_TO_C.CommitNewObjectiveText
	 */
	struct UStage_TO_C_CommitNewObjectiveText_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.On Player Selected Spectator Mode
	 */
	struct UStage_TO_C_On_Player_Selected_Spectator_Mode_Params
	{
	public:
		bool                                                       bOnPlayerSelectedSpectatorMode;                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.ResizeFFAObjectiveWidget
	 */
	struct UStage_TO_C_ResizeFFAObjectiveWidget_Params
	{
	public:
		class UFFAObjectiveWidget_Leader_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.UpdateListOrder
	 */
	struct UStage_TO_C_UpdateListOrder_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.Get_MaxScoreText_Text_1
	 */
	struct UStage_TO_C_Get_MaxScoreText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.Get_StageTimeRemaining_Text_1
	 */
	struct UStage_TO_C_Get_StageTimeRemaining_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.SetScore
	 */
	struct UStage_TO_C_SetScore_Params
	{
	public:
		float                                                      Agatha;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Mason;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TopScoreText;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                BottomScoreText;                                         // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.Apply Progress Updates
	 */
	struct UStage_TO_C_Apply_Progress_Updates_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.OnPossessedPawn
	 */
	struct UStage_TO_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.UpdateObjectiveContextMessage
	 */
	struct UStage_TO_C_UpdateObjectiveContextMessage_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.OnNewObjectiveContextMessage_Event_1
	 */
	struct UStage_TO_C_OnNewObjectiveContextMessage_Event_1_Params
	{
	public:
		struct FObjectiveContextMessage                            ObjectiveContextMessage;                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.OnBonusTimeAdded
	 */
	struct UStage_TO_C_OnBonusTimeAdded_Params
	{
	public:
		float                                                      BonusTimeSeconds;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.StageEnded
	 */
	struct UStage_TO_C_StageEnded_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.StageStarted
	 */
	struct UStage_TO_C_StageStarted_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.OnTeamChanged
	 */
	struct UStage_TO_C_OnTeamChanged_Params
	{
	public:
		class ATBLTeam*                                            NewTeam;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.SetAttackingDefendingstate
	 */
	struct UStage_TO_C_SetAttackingDefendingstate_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.Current Stage Changed_Event_1
	 */
	struct UStage_TO_C_Current_Stage_Changed_Event_1_Params
	{
	public:
		class UObject*                                             Previous_Stage;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             New_Stage;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.Construct
	 */
	struct UStage_TO_C_Construct_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.Objective Complete
	 */
	struct UStage_TO_C_Objective_Complete_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.Objective Failed
	 */
	struct UStage_TO_C_Objective_Failed_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.Set Bottom Progress
	 */
	struct UStage_TO_C_Set_Bottom_Progress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Score_Text;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.New Objective
	 */
	struct UStage_TO_C_New_Objective_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.TutorialWaveArenaReset
	 */
	struct UStage_TO_C_TutorialWaveArenaReset_Params
	{
	};

	/**
	 * Function Stage_TO.Stage_TO_C.Set Top Progress
	 */
	struct UStage_TO_C_Set_Top_Progress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Score_Text;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.TutorialSetWaveMode
	 */
	struct UStage_TO_C_TutorialSetWaveMode_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.UpdateWaveCount
	 */
	struct UStage_TO_C_UpdateWaveCount_Params
	{
	public:
		int                                                        NumberLeft;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        NumberTotal;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.UpdateTimeLeft
	 */
	struct UStage_TO_C_UpdateTimeLeft_Params
	{
	public:
		float                                                      TimeUntilNextWave;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.UpdateWaveText
	 */
	struct UStage_TO_C_UpdateWaveText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.OnWaveCompleted
	 */
	struct UStage_TO_C_OnWaveCompleted_Params
	{
	public:
		class FText                                                WaveCompleteText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                NextWaveText;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Stage_TO.Stage_TO_C.ExecuteUbergraph_Stage_TO
	 */
	struct UStage_TO_C_ExecuteUbergraph_Stage_TO_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
