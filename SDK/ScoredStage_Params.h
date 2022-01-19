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
	 * Function ScoredStage.ScoredStage_C.Create debug menu widget
	 */
	struct AScoredStage_C_Create_debug_menu_widget_Params
	{
	public:
		class UUserWidget*                                         Debug_menu_widget;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.RecalculateMaxScore
	 */
	struct AScoredStage_C_RecalculateMaxScore_Params
	{
	public:
		int                                                        Max_Score;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.GetTimeRemainingPercent
	 */
	struct AScoredStage_C_GetTimeRemainingPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.GetTimeRemaining
	 */
	struct AScoredStage_C_GetTimeRemaining_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.SetScore
	 */
	struct AScoredStage_C_SetScore_Params
	{
	public:
		int                                                        NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.OnRep_Max Score
	 */
	struct AScoredStage_C_OnRep_Max_Score_Params
	{
	};

	/**
	 * Function ScoredStage.ScoredStage_C.OnRep_Score
	 */
	struct AScoredStage_C_OnRep_Score_Params
	{
	};

	/**
	 * Function ScoredStage.ScoredStage_C.Initialize ScoredStage
	 */
	struct AScoredStage_C_Initialize_ScoredStage_Params
	{
	public:
		struct FScoredStageProperties                              Settings;                                                // 0x0020(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FStandardStageCinematicProperties                   cinematics;                                              // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.Initialize ScoredStage No Cinematics
	 */
	struct AScoredStage_C_Initialize_ScoredStage_No_Cinematics_Params
	{
	public:
		struct FScoredStageProperties                              Settings;                                                // 0x0020(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.CompleteStage
	 */
	struct AScoredStage_C_CompleteStage_Params
	{
	};

	/**
	 * Function ScoredStage.ScoredStage_C.IsStageReadyToComplete
	 */
	struct AScoredStage_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.Is MaxScore exceeded
	 */
	struct AScoredStage_C_Is_MaxScore_exceeded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.Add Score
	 */
	struct AScoredStage_C_Add_Score_Params
	{
	public:
		int                                                        Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.Initialize ScoredStage No Settings
	 */
	struct AScoredStage_C_Initialize_ScoredStage_No_Settings_Params
	{
	};

	/**
	 * Function ScoredStage.ScoredStage_C.StartStage
	 */
	struct AScoredStage_C_StartStage_Params
	{
	};

	/**
	 * Function ScoredStage.ScoredStage_C.Set HUD Elements Visible
	 */
	struct AScoredStage_C_Set_HUD_Elements_Visible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.On Score Changed_Event_2
	 */
	struct AScoredStage_C_On_Score_Changed_Event_2_Params
	{
	public:
		int                                                        CurrentScore;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        MaxScore;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.On Ended_Event
	 */
	struct AScoredStage_C_On_Ended_Event_Params
	{
	public:
		class AScoredStage_C*                                      Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.AddScore
	 */
	struct AScoredStage_C_AddScore_Params
	{
	public:
		int                                                        Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.ExecuteUbergraph_ScoredStage
	 */
	struct AScoredStage_C_ExecuteUbergraph_ScoredStage_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.On Score Changed__DelegateSignature
	 */
	struct AScoredStage_C_On_Score_Changed__DelegateSignature_Params
	{
	public:
		int                                                        CurrentScore;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        MaxScore;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.On Completed by Score__DelegateSignature
	 */
	struct AScoredStage_C_On_Completed_by_Score__DelegateSignature_Params
	{
	};

	/**
	 * Function ScoredStage.ScoredStage_C.On Timed Out__DelegateSignature
	 */
	struct AScoredStage_C_On_Timed_Out__DelegateSignature_Params
	{
	};

	/**
	 * Function ScoredStage.ScoredStage_C.On Ended__DelegateSignature
	 */
	struct AScoredStage_C_On_Ended__DelegateSignature_Params
	{
	public:
		class AScoredStage_C*                                      Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoredStage.ScoredStage_C.On Started__DelegateSignature
	 */
	struct AScoredStage_C_On_Started__DelegateSignature_Params
	{
	public:
		class AScoredStage_C*                                      Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
