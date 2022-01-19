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
	 * Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemaining
	 */
	struct UGrantVictoryToPlayer_C_GetTimeRemaining_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemainingPercent
	 */
	struct UGrantVictoryToPlayer_C_GetTimeRemainingPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageCommander
	 */
	struct UGrantVictoryToPlayer_C_GetStageCommander_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageIdNum
	 */
	struct UGrantVictoryToPlayer_C_GetStageIdNum_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.CompleteStage
	 */
	struct UGrantVictoryToPlayer_C_CompleteStage_Params
	{
	};

	/**
	 * Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.IsStageReadyToComplete
	 */
	struct UGrantVictoryToPlayer_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.StartStage
	 */
	struct UGrantVictoryToPlayer_C_StartStage_Params
	{
	};

	/**
	 * Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.ExecuteUbergraph_GrantVictoryToPlayer
	 */
	struct UGrantVictoryToPlayer_C_ExecuteUbergraph_GrantVictoryToPlayer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
