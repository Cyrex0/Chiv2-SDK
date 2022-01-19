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
	 * Function FFATimeoutStage.FFATimeoutStage_C.GetMaxScore
	 */
	struct AFFATimeoutStage_C_GetMaxScore_Params
	{
	public:
		bool                                                       ScoreNotReplicated;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int                                                        Score;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.SetMaxScore
	 */
	struct AFFATimeoutStage_C_SetMaxScore_Params
	{
	public:
		int                                                        NewMaxScore;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.OnRep_MaxScore
	 */
	struct AFFATimeoutStage_C_OnRep_MaxScore_Params
	{
	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.OnRep_IsSuddenDeath
	 */
	struct AFFATimeoutStage_C_OnRep_IsSuddenDeath_Params
	{
	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.GetVictor
	 */
	struct AFFATimeoutStage_C_GetVictor_Params
	{
	public:
		class ATBLPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTie;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.IsStageReadyToComplete
	 */
	struct AFFATimeoutStage_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.CompleteStage
	 */
	struct AFFATimeoutStage_C_CompleteStage_Params
	{
	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.StartStage
	 */
	struct AFFATimeoutStage_C_StartStage_Params
	{
	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.Duration Exceeded
	 */
	struct AFFATimeoutStage_C_Duration_Exceeded_Params
	{
	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.ExecuteUbergraph_FFATimeoutStage
	 */
	struct AFFATimeoutStage_C_ExecuteUbergraph_FFATimeoutStage_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.MaxScoreUpdated__DelegateSignature
	 */
	struct AFFATimeoutStage_C_MaxScoreUpdated__DelegateSignature_Params
	{
	};

	/**
	 * Function FFATimeoutStage.FFATimeoutStage_C.SuddenDeath__DelegateSignature
	 */
	struct AFFATimeoutStage_C_SuddenDeath__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
