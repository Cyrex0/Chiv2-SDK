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
	 * Function GrantVictory.GrantVictory_C.GetTimeRemaining
	 */
	struct UGrantVictory_C_GetTimeRemaining_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrantVictory.GrantVictory_C.GetTimeRemainingPercent
	 */
	struct UGrantVictory_C_GetTimeRemainingPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrantVictory.GrantVictory_C.GetStageCommander
	 */
	struct UGrantVictory_C_GetStageCommander_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrantVictory.GrantVictory_C.GetStageIdNum
	 */
	struct UGrantVictory_C_GetStageIdNum_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GrantVictory.GrantVictory_C.CompleteStage
	 */
	struct UGrantVictory_C_CompleteStage_Params
	{
	};

	/**
	 * Function GrantVictory.GrantVictory_C.IsStageReadyToComplete
	 */
	struct UGrantVictory_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GrantVictory.GrantVictory_C.StartStage
	 */
	struct UGrantVictory_C_StartStage_Params
	{
	};

	/**
	 * Function GrantVictory.GrantVictory_C.ExecuteUbergraph_GrantVictory
	 */
	struct UGrantVictory_C_ExecuteUbergraph_GrantVictory_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
