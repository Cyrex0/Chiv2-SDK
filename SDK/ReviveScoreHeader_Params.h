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
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.RemoveExcessChildSubWidgets
	 */
	struct UReviveScoreHeader_C_RemoveExcessChildSubWidgets_Params
	{
	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.SendBreakableEventToCrosshair
	 */
	struct UReviveScoreHeader_C_SendBreakableEventToCrosshair_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.DetermineEventType
	 */
	struct UReviveScoreHeader_C_DetermineEventType_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEventStruct;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ScoreEventType_EScoreEventType                             Type;                                                    // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.GetScoreText
	 */
	struct UReviveScoreHeader_C_GetScoreText_Params
	{
	public:
		int                                                        ScoreValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       IsPositive;                                              // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.Construct
	 */
	struct UReviveScoreHeader_C_Construct_Params
	{
	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.OnIndexChanged
	 */
	struct UReviveScoreHeader_C_OnIndexChanged_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.OnRemoved
	 */
	struct UReviveScoreHeader_C_OnRemoved_Params
	{
	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreEvent
	 */
	struct UReviveScoreHeader_C_AddSubScoreEvent_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreWidget
	 */
	struct UReviveScoreHeader_C_AddSubScoreWidget_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEventStruct;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.AddScore
	 */
	struct UReviveScoreHeader_C_AddScore_Params
	{
	public:
		int                                                        Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.StartFadeOut_2
	 */
	struct UReviveScoreHeader_C_StartFadeOut_2_Params
	{
	};

	/**
	 * Function ReviveScoreHeader.ReviveScoreHeader_C.ExecuteUbergraph_ReviveScoreHeader
	 */
	struct UReviveScoreHeader_C_ExecuteUbergraph_ReviveScoreHeader_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
