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
	 * Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.CompleteStage
	 */
	struct UGrantVictoryToAttackers_C_CompleteStage_Params
	{
	};

	/**
	 * Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.IsStageReadyToComplete
	 */
	struct UGrantVictoryToAttackers_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.TimeoutStage
	 */
	struct UGrantVictoryToAttackers_C_TimeoutStage_Params
	{
	};

	/**
	 * Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.StartStage
	 */
	struct UGrantVictoryToAttackers_C_StartStage_Params
	{
	};

	/**
	 * Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.ExecuteUbergraph_GrantVictoryToAttackers
	 */
	struct UGrantVictoryToAttackers_C_ExecuteUbergraph_GrantVictoryToAttackers_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
