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
	 * Function Objective_Time.Objective_Time_C.ResetWarnings
	 */
	struct UObjective_Time_C_ResetWarnings_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.Set Time Component From Stage
	 */
	struct UObjective_Time_C_Set_Time_Component_From_Stage_Params
	{
	public:
		class AActor*                                              Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Objective_Time.Objective_Time_C.Get_StageTimeRemaining_Text
	 */
	struct UObjective_Time_C_Get_StageTimeRemaining_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
		float                                                      TimeSeconds;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Objective_Time.Objective_Time_C.Construct
	 */
	struct UObjective_Time_C_Construct_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.OnBonusTimeAdded
	 */
	struct UObjective_Time_C_OnBonusTimeAdded_Params
	{
	public:
		float                                                      BonusTimeSeconds;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Objective_Time.Objective_Time_C.CustomEvent_1
	 */
	struct UObjective_Time_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.Update Game Time
	 */
	struct UObjective_Time_C_Update_Game_Time_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.FadeTimeWarning
	 */
	struct UObjective_Time_C_FadeTimeWarning_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Objective_Time.Objective_Time_C.HideTime
	 */
	struct UObjective_Time_C_HideTime_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.SetCustomTimeLeft
	 */
	struct UObjective_Time_C_SetCustomTimeLeft_Params
	{
	public:
		float                                                      TimeLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Objective_Time.Objective_Time_C.UpdateCustomTime
	 */
	struct UObjective_Time_C_UpdateCustomTime_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.SetTimeText
	 */
	struct UObjective_Time_C_SetTimeText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Objective_Time.Objective_Time_C.SetWaveArenaMode
	 */
	struct UObjective_Time_C_SetWaveArenaMode_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Objective_Time.Objective_Time_C.ShowTime
	 */
	struct UObjective_Time_C_ShowTime_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.OnInitialized
	 */
	struct UObjective_Time_C_OnInitialized_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.OnMatchEnded_Event_1
	 */
	struct UObjective_Time_C_OnMatchEnded_Event_1_Params
	{
	};

	/**
	 * Function Objective_Time.Objective_Time_C.ExecuteUbergraph_Objective_Time
	 */
	struct UObjective_Time_C_ExecuteUbergraph_Objective_Time_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
