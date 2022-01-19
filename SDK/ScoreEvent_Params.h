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
	 * Function ScoreEvent.ScoreEvent_C.Construct
	 */
	struct UScoreEvent_C_Construct_Params
	{
	};

	/**
	 * Function ScoreEvent.ScoreEvent_C.OnIndexChanged
	 */
	struct UScoreEvent_C_OnIndexChanged_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoreEvent.ScoreEvent_C.StartFadeOutTimer
	 */
	struct UScoreEvent_C_StartFadeOutTimer_Params
	{
	};

	/**
	 * Function ScoreEvent.ScoreEvent_C.CustomEvent_1
	 */
	struct UScoreEvent_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function ScoreEvent.ScoreEvent_C.ExecuteUbergraph_ScoreEvent
	 */
	struct UScoreEvent_C_ExecuteUbergraph_ScoreEvent_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
