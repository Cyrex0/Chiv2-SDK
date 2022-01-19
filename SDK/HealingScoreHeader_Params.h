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
	 * Function HealingScoreHeader.HealingScoreHeader_C.GetLifeSpanTime
	 */
	struct UHealingScoreHeader_C_GetLifeSpanTime_Params
	{
	public:
		float                                                      Return;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.RemoveExcessChildSubWidgets
	 */
	struct UHealingScoreHeader_C_RemoveExcessChildSubWidgets_Params
	{
	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.SendBreakableEventToCrosshair
	 */
	struct UHealingScoreHeader_C_SendBreakableEventToCrosshair_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.DetermineEventType
	 */
	struct UHealingScoreHeader_C_DetermineEventType_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEventStruct;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ScoreEventType_EScoreEventType                             Type;                                                    // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.GetScoreText
	 */
	struct UHealingScoreHeader_C_GetScoreText_Params
	{
	public:
		int                                                        ScoreValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       IsPositive;                                              // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.AddSubScoreEvent
	 */
	struct UHealingScoreHeader_C_AddSubScoreEvent_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.AddSubScoreWidget
	 */
	struct UHealingScoreHeader_C_AddSubScoreWidget_Params
	{
	public:
		struct FScoreEventStruct                                   ScoreEventStruct;                                        // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.AddScore
	 */
	struct UHealingScoreHeader_C_AddScore_Params
	{
	public:
		int                                                        Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.Construct
	 */
	struct UHealingScoreHeader_C_Construct_Params
	{
	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.OnIndexChanged
	 */
	struct UHealingScoreHeader_C_OnIndexChanged_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.OnRemoved
	 */
	struct UHealingScoreHeader_C_OnRemoved_Params
	{
	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.PlayFadeIn
	 */
	struct UHealingScoreHeader_C_PlayFadeIn_Params
	{
	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.PlayFadeOut
	 */
	struct UHealingScoreHeader_C_PlayFadeOut_Params
	{
	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.StartFadeOutTimer
	 */
	struct UHealingScoreHeader_C_StartFadeOutTimer_Params
	{
	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.CustomEvent
	 */
	struct UHealingScoreHeader_C_CustomEvent_Params
	{
	};

	/**
	 * Function HealingScoreHeader.HealingScoreHeader_C.ExecuteUbergraph_HealingScoreHeader
	 */
	struct UHealingScoreHeader_C_ExecuteUbergraph_HealingScoreHeader_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
