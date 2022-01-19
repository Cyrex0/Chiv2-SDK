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
	 * Function TicketsComponent.TicketsComponent_C.Create debug menu widget
	 */
	struct UTicketsComponent_C_Create_debug_menu_widget_Params
	{
	public:
		class UUserWidget*                                         Debug_menu_widget;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.SetTicketCount_Internal
	 */
	struct UTicketsComponent_C_SetTicketCount_Internal_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        TicketCount;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.HandlePlayerKilled
	 */
	struct UTicketsComponent_C_HandlePlayerKilled_Params
	{
	public:
		class AController*                                         Killed;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         Killer;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.OnRep_Tickets Per Team
	 */
	struct UTicketsComponent_C_OnRep_Tickets_Per_Team_Params
	{
	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.Get Tickets
	 */
	struct UTicketsComponent_C_Get_Tickets_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Tickets;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Faction_Is_Being_Tracked;                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.Start
	 */
	struct UTicketsComponent_C_Start_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.Stop
	 */
	struct UTicketsComponent_C_Stop_Params
	{
	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.OnPlayerKilled_Event_1
	 */
	struct UTicketsComponent_C_OnPlayerKilled_Event_1_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         Killed;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDeathEvent                                         DeathEvent;                                              // 0x0018(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FDeathDamageTakenEvent                              DamageEvent;                                             // 0x0058(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C. Remove Tickets
	 */
	struct UTicketsComponent_C__Remove_Tickets_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Tickets_Delta;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.Handle Tickets Exhausted
	 */
	struct UTicketsComponent_C_Handle_Tickets_Exhausted_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.ExecuteUbergraph_TicketsComponent
	 */
	struct UTicketsComponent_C_ExecuteUbergraph_TicketsComponent_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.On Tickets Changed Because of Kill__DelegateSignature
	 */
	struct UTicketsComponent_C_On_Tickets_Changed_Because_of_Kill__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        New_Tickets;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.Client Tickets Changed__DelegateSignature
	 */
	struct UTicketsComponent_C_Client_Tickets_Changed__DelegateSignature_Params
	{
	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.On Tickets Changed__DelegateSignature
	 */
	struct UTicketsComponent_C_On_Tickets_Changed__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        New_Tickets;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TicketsComponent.TicketsComponent_C.OnTicketsExhausted__DelegateSignature
	 */
	struct UTicketsComponent_C_OnTicketsExhausted__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
