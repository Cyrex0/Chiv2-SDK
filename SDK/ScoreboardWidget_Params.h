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
	 * Function ScoreboardWidget.ScoreboardWidget_C.SetAttackerDefenderTextVisibility
	 */
	struct UScoreboardWidget_C_SetAttackerDefenderTextVisibility_Params
	{
	};

	/**
	 * Function ScoreboardWidget.ScoreboardWidget_C.Construct
	 */
	struct UScoreboardWidget_C_Construct_Params
	{
	};

	/**
	 * Function ScoreboardWidget.ScoreboardWidget_C.Tick
	 */
	struct UScoreboardWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoreboardWidget.ScoreboardWidget_C.UpdateScoreboard
	 */
	struct UScoreboardWidget_C_UpdateScoreboard_Params
	{
	};

	/**
	 * Function ScoreboardWidget.ScoreboardWidget_C.ExecuteUbergraph_ScoreboardWidget
	 */
	struct UScoreboardWidget_C_ExecuteUbergraph_ScoreboardWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
