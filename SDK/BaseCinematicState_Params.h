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
	 * Function BaseCinematicState.BaseCinematicState_C.GetPreparingMatchTimeThreshold
	 */
	struct UBaseCinematicState_C_GetPreparingMatchTimeThreshold_Params
	{
	public:
		float                                                      MinTimeThreshold;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from GameState
	 */
	struct UBaseCinematicState_C_Get_Cinematic_State_from_GameState_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from Match State
	 */
	struct UBaseCinematicState_C_Get_Cinematic_State_from_Match_State_Params
	{
	public:
		struct FGameplayTag                                        State;                                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.HandleGoingToSpawnAtSpawner
	 */
	struct UBaseCinematicState_C_HandleGoingToSpawnAtSpawner_Params
	{
	public:
		class ASpawner*                                            Spawner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.HandleMatchStateChanged
	 */
	struct UBaseCinematicState_C_HandleMatchStateChanged_Params
	{
	public:
		class FName                                                MatchState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.HandleGameCinematicStateChanged
	 */
	struct UBaseCinematicState_C_HandleGameCinematicStateChanged_Params
	{
	public:
		TBL_ECinematicGameState                                    GameStateCinematicState;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.HandlePossessedPawn
	 */
	struct UBaseCinematicState_C_HandlePossessedPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.HandleTeamChanged
	 */
	struct UBaseCinematicState_C_HandleTeamChanged_Params
	{
	public:
		class ATBLTeam*                                            NewTeam;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.HandleSuicideNotify
	 */
	struct UBaseCinematicState_C_HandleSuicideNotify_Params
	{
	public:
		TBL_EKillReason                                            KillReason;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.HandleNextSpawnWaveChanged
	 */
	struct UBaseCinematicState_C_HandleNextSpawnWaveChanged_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCinematicState.BaseCinematicState_C.ExecuteUbergraph_BaseCinematicState
	 */
	struct UBaseCinematicState_C_ExecuteUbergraph_BaseCinematicState_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
