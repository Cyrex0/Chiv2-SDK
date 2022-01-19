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
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.ReceiveBeginPlay
	 */
	struct UBP_DebugMenuComponent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Force end by time
	 */
	struct UBP_DebugMenuComponent_C_Force_end_by_time_Params
	{
	public:
		class AActor*                                              Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Force end by score
	 */
	struct UBP_DebugMenuComponent_C_Force_end_by_score_Params
	{
	public:
		class AScoredStage_C*                                      Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set time left (minutes)
	 */
	struct UBP_DebugMenuComponent_C_Set_time_left__minutes__Params
	{
	public:
		class AActor*                                              Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Minutes;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Add time (minutes)
	 */
	struct UBP_DebugMenuComponent_C_Add_time__minutes__Params
	{
	public:
		class AActor*                                              Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Minutes;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Add Score
	 */
	struct UBP_DebugMenuComponent_C_Add_Score_Params
	{
	public:
		class AScoredStage_C*                                      Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Score;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set score
	 */
	struct UBP_DebugMenuComponent_C_Set_score_Params
	{
	public:
		class AScoredStage_C*                                      Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Score;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.Set Tickets
	 */
	struct UBP_DebugMenuComponent_C_Set_Tickets_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Num_tickets;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DebugMenuComponent.BP_DebugMenuComponent_C.ExecuteUbergraph_BP_DebugMenuComponent
	 */
	struct UBP_DebugMenuComponent_C_ExecuteUbergraph_BP_DebugMenuComponent_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
