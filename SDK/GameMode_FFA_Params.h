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
	 * Function GameMode_FFA.GameMode_FFA_C.UpdateGamemodeType
	 */
	struct UGameMode_FFA_C_UpdateGamemodeType_Params
	{
	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.SetMaxScore
	 */
	struct UGameMode_FFA_C_SetMaxScore_Params
	{
	public:
		int                                                        MaxScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.KillsRemainingMessages
	 */
	struct UGameMode_FFA_C_KillsRemainingMessages_Params
	{
	public:
		int                                                        Tickets;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.ResizeFFAObjectiveWidget
	 */
	struct UGameMode_FFA_C_ResizeFFAObjectiveWidget_Params
	{
	public:
		class UFFAObjectiveWidget_Leader_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.UpdateListOrder
	 */
	struct UGameMode_FFA_C_UpdateListOrder_Params
	{
	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.OnPlayerKilled_Event_1
	 */
	struct UGameMode_FFA_C_OnPlayerKilled_Event_1_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.PreConstruct
	 */
	struct UGameMode_FFA_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.SuddenDeath_Event_1
	 */
	struct UGameMode_FFA_C_SuddenDeath_Event_1_Params
	{
	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.OnInitialized
	 */
	struct UGameMode_FFA_C_OnInitialized_Params
	{
	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.FadeTicketMessage
	 */
	struct UGameMode_FFA_C_FadeTicketMessage_Params
	{
	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.MaxScoreUpdated
	 */
	struct UGameMode_FFA_C_MaxScoreUpdated_Params
	{
	};

	/**
	 * Function GameMode_FFA.GameMode_FFA_C.ExecuteUbergraph_GameMode_FFA
	 */
	struct UGameMode_FFA_C_ExecuteUbergraph_GameMode_FFA_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
