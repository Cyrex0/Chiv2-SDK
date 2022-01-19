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
	 * Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.CompleteStage
	 */
	struct UGrantVictoryToDefenders_C_CompleteStage_Params
	{
	};

	/**
	 * Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.IsStageReadyToComplete
	 */
	struct UGrantVictoryToDefenders_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.TimeoutStage
	 */
	struct UGrantVictoryToDefenders_C_TimeoutStage_Params
	{
	};

	/**
	 * Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.StartStage
	 */
	struct UGrantVictoryToDefenders_C_StartStage_Params
	{
	};

	/**
	 * Function GrantVictoryToDefenders.GrantVictoryToDefenders_C.ExecuteUbergraph_GrantVictoryToDefenders
	 */
	struct UGrantVictoryToDefenders_C_ExecuteUbergraph_GrantVictoryToDefenders_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
