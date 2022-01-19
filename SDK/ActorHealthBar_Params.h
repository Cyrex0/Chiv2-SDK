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
	 * Function ActorHealthBar.ActorHealthBar_C.UpdateOverheal
	 */
	struct UActorHealthBar_C_UpdateOverheal_Params
	{
	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.UpdateHealOverTime
	 */
	struct UActorHealthBar_C_UpdateHealOverTime_Params
	{
	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.UpdateStatText
	 */
	struct UActorHealthBar_C_UpdateStatText_Params
	{
	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.GetOwningActor
	 */
	struct UActorHealthBar_C_GetOwningActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.SetPercentage
	 */
	struct UActorHealthBar_C_SetPercentage_Params
	{
	public:
		bool                                                       Initialize;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.GetStatsComponent
	 */
	struct UActorHealthBar_C_GetStatsComponent_Params
	{
	public:
		class UStatsComponent*                                     Stats_Component;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.PreConstruct
	 */
	struct UActorHealthBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.Construct
	 */
	struct UActorHealthBar_C_Construct_Params
	{
	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.OnStatChanged_Event_1
	 */
	struct UActorHealthBar_C_OnStatChanged_Event_1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EStat                                                  StatType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatEntry                                          Stat;                                                    // 0x0010(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		float                                                      DeltaValue;                                              // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.InitializeBar
	 */
	struct UActorHealthBar_C_InitializeBar_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.OnKilled_Event_1
	 */
	struct UActorHealthBar_C_OnKilled_Event_1_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.OnPossessedPawn_Event_1
	 */
	struct UActorHealthBar_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.OnClientPossessedPawn_Event_1
	 */
	struct UActorHealthBar_C_OnClientPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.OnStatChanged_Event_2
	 */
	struct UActorHealthBar_C_OnStatChanged_Event_2_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EStat                                                  StatType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatEntry                                          Stat;                                                    // 0x0010(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		float                                                      DeltaValue;                                              // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.Tick
	 */
	struct UActorHealthBar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.ToggleRegenIndication
	 */
	struct UActorHealthBar_C_ToggleRegenIndication_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.ExecuteUbergraph_ActorHealthBar
	 */
	struct UActorHealthBar_C_ExecuteUbergraph_ActorHealthBar_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.OnRecievedNewStatsComp__DelegateSignature
	 */
	struct UActorHealthBar_C_OnRecievedNewStatsComp__DelegateSignature_Params
	{
	public:
		class UStatsComponent*                                     StatsComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActorHealthBar.ActorHealthBar_C.OnUpdate__DelegateSignature
	 */
	struct UActorHealthBar_C_OnUpdate__DelegateSignature_Params
	{
	public:
		class UActorHealthBar_C*                                   Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
