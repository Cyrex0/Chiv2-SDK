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
	 * Function TDMStage.TDMStage_C.Create debug menu widget
	 */
	struct ATDMStage_C_Create_debug_menu_widget_Params
	{
	public:
		class UUserWidget*                                         Debug_menu_widget;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.GetTimeRemaining
	 */
	struct ATDMStage_C_GetTimeRemaining_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.GetTimeRemainingPercent
	 */
	struct ATDMStage_C_GetTimeRemainingPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.GetStageIdNum
	 */
	struct ATDMStage_C_GetStageIdNum_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.GetStageCommander
	 */
	struct ATDMStage_C_GetStageCommander_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.CompleteStage
	 */
	struct ATDMStage_C_CompleteStage_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.IsStageReadyToComplete
	 */
	struct ATDMStage_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TDMStage.TDMStage_C.GetTicketsRemainingPercentage
	 */
	struct ATDMStage_C_GetTicketsRemainingPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.Get Faction Tickets Remaining Percent
	 */
	struct ATDMStage_C_Get_Faction_Tickets_Remaining_Percent_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.UpdateTDMStageSettings
	 */
	struct ATDMStage_C_UpdateTDMStageSettings_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.Get Time Left
	 */
	struct ATDMStage_C_Get_Time_Left_Params
	{
	public:
		struct FTimespan                                           Time_Left;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C. Remove Tickets
	 */
	struct ATDMStage_C__Remove_Tickets_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.Initialize TDM Stage
	 */
	struct ATDMStage_C_Initialize_TDM_Stage_Params
	{
	public:
		struct FTDM_Stage_Properties                               Settings;                                                // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.StartStage
	 */
	struct ATDMStage_C_StartStage_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature
	 */
	struct ATDMStage_C_BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On Duration Exceeded__DelegateSignature
	 */
	struct ATDMStage_C_BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On_Duration_Exceeded__DelegateSignature_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On Tickets Changed__DelegateSignature
	 */
	struct ATDMStage_C_BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On_Tickets_Changed__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        New_Tickets;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.Force Draw
	 */
	struct ATDMStage_C_Force_Draw_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.Last Rout Fired
	 */
	struct ATDMStage_C_Last_Rout_Fired_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.CustomEvent_1
	 */
	struct ATDMStage_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.ForceMusic
	 */
	struct ATDMStage_C_ForceMusic_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.ExecuteUbergraph_TDMStage
	 */
	struct ATDMStage_C_ExecuteUbergraph_TDMStage_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.On Tickets Changed__DelegateSignature
	 */
	struct ATDMStage_C_On_Tickets_Changed__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        NewTickets;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.On Tickets Exhausted__DelegateSignature
	 */
	struct ATDMStage_C_On_Tickets_Exhausted__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMStage.TDMStage_C.On Draw__DelegateSignature
	 */
	struct ATDMStage_C_On_Draw__DelegateSignature_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.On Red Died__DelegateSignature
	 */
	struct ATDMStage_C_On_Red_Died__DelegateSignature_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.On Blue Died__DelegateSignature
	 */
	struct ATDMStage_C_On_Blue_Died__DelegateSignature_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.On Ended__DelegateSignature
	 */
	struct ATDMStage_C_On_Ended__DelegateSignature_Params
	{
	};

	/**
	 * Function TDMStage.TDMStage_C.On Started__DelegateSignature
	 */
	struct ATDMStage_C_On_Started__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
