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
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetLifeSpanTime
	 */
	struct UScoreHeaderWithList_C_GetLifeSpanTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.RemoveExcessChildSubWidgets
	 */
	struct UScoreHeaderWithList_C_RemoveExcessChildSubWidgets_Params
	{
	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.SendBreakableEventToCrosshair
	 */
	struct UScoreHeaderWithList_C_SendBreakableEventToCrosshair_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.DetermineEventType
	 */
	struct UScoreHeaderWithList_C_DetermineEventType_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEventStruct;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ScoreEventType_EScoreEventType                             Type;                                                    // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetScoreText
	 */
	struct UScoreHeaderWithList_C_GetScoreText_Params
	{
	public:
		int                                                        ScoreValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       IsPositive;                                              // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreEvent
	 */
	struct UScoreHeaderWithList_C_AddSubScoreEvent_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreWidget
	 */
	struct UScoreHeaderWithList_C_AddSubScoreWidget_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEventStruct;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddScore
	 */
	struct UScoreHeaderWithList_C_AddScore_Params
	{
	public:
		int                                                        Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.Construct
	 */
	struct UScoreHeaderWithList_C_Construct_Params
	{
	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnRemoved
	 */
	struct UScoreHeaderWithList_C_OnRemoved_Params
	{
	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeIn
	 */
	struct UScoreHeaderWithList_C_PlayFadeIn_Params
	{
	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnIndexChanged
	 */
	struct UScoreHeaderWithList_C_OnIndexChanged_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeOut
	 */
	struct UScoreHeaderWithList_C_PlayFadeOut_Params
	{
	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOutTimer
	 */
	struct UScoreHeaderWithList_C_StartFadeOutTimer_Params
	{
	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOut_2
	 */
	struct UScoreHeaderWithList_C_StartFadeOut_2_Params
	{
	};

	/**
	 * Function ScoreHeaderWithList.ScoreHeaderWithList_C.ExecuteUbergraph_ScoreHeaderWithList
	 */
	struct UScoreHeaderWithList_C_ExecuteUbergraph_ScoreHeaderWithList_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
