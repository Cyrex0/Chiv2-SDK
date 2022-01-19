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
	 * Function GrantVictoryToBlue.GrantVictoryToBlue_C.CompleteStage
	 */
	struct UGrantVictoryToBlue_C_CompleteStage_Params
	{
	};

	/**
	 * Function GrantVictoryToBlue.GrantVictoryToBlue_C.IsStageReadyToComplete
	 */
	struct UGrantVictoryToBlue_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GrantVictoryToBlue.GrantVictoryToBlue_C.TimeoutStage
	 */
	struct UGrantVictoryToBlue_C_TimeoutStage_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
