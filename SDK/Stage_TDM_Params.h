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
	 * Function Stage_TDM.Stage_TDM_C.FactionTicketMessages
	 */
	struct UStage_TDM_C_FactionTicketMessages_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Tickets;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.ResizeFFAObjectiveWidget
	 */
	struct UStage_TDM_C_ResizeFFAObjectiveWidget_Params
	{
	public:
		class UFFAObjectiveWidget_Leader_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.UpdateListOrder
	 */
	struct UStage_TDM_C_UpdateListOrder_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.Get_MaxScoreText_Text_1
	 */
	struct UStage_TDM_C_Get_MaxScoreText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.SetTimeObjectiveActorComponent
	 */
	struct UStage_TDM_C_SetTimeObjectiveActorComponent_Params
	{
	public:
		class AActor*                                              StageActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.Get_StageTimeRemaining_Text_1
	 */
	struct UStage_TDM_C_Get_StageTimeRemaining_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.SetScore
	 */
	struct UStage_TDM_C_SetScore_Params
	{
	public:
		float                                                      Agatha;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Mason;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TopScoreText;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                BottomScoreText;                                         // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.FactionTicketsChanged
	 */
	struct UStage_TDM_C_FactionTicketsChanged_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Tickets;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.K2_OnAssignedToActor
	 */
	struct UStage_TDM_C_K2_OnAssignedToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActorComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.K2_OnReturnedToPool
	 */
	struct UStage_TDM_C_K2_OnReturnedToPool_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.Client Tickets Changed
	 */
	struct UStage_TDM_C_Client_Tickets_Changed_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.Construct
	 */
	struct UStage_TDM_C_Construct_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.ReRun Constructed Event
	 */
	struct UStage_TDM_C_ReRun_Constructed_Event_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.RedTargetKilled
	 */
	struct UStage_TDM_C_RedTargetKilled_Params
	{
	public:
		int                                                        Targets_Left;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.BlueTargetKilled
	 */
	struct UStage_TDM_C_BlueTargetKilled_Params
	{
	public:
		int                                                        Targets_Left;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.TDMSuddenDeath
	 */
	struct UStage_TDM_C_TDMSuddenDeath_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.OnMatchEnded
	 */
	struct UStage_TDM_C_OnMatchEnded_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.On Tickets Changed_Event_1
	 */
	struct UStage_TDM_C_On_Tickets_Changed_Event_1_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        New_Tickets;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.FadeTicketMessage
	 */
	struct UStage_TDM_C_FadeTicketMessage_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.SetVolatile
	 */
	struct UStage_TDM_C_SetVolatile_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.CustomEvent_1
	 */
	struct UStage_TDM_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function Stage_TDM.Stage_TDM_C.ExecuteUbergraph_Stage_TDM
	 */
	struct UStage_TDM_C_ExecuteUbergraph_Stage_TDM_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
