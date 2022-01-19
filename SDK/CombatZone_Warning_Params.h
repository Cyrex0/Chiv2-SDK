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
	 * Function CombatZone_Warning.CombatZone_Warning_C.GetTimeUntilDeath
	 */
	struct UCombatZone_Warning_C_GetTimeUntilDeath_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.Set Owning HUD Component
	 */
	struct UCombatZone_Warning_C_Set_Owning_HUD_Component_Params
	{
	public:
		class UHUDComponent_C*                                     New_Owner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.HideWarning
	 */
	struct UCombatZone_Warning_C_HideWarning_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.Construct
	 */
	struct UCombatZone_Warning_C_Construct_Params
	{
	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.OnClientPossessedPawn
	 */
	struct UCombatZone_Warning_C_OnClientPossessedPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.ShowWarning
	 */
	struct UCombatZone_Warning_C_ShowWarning_Params
	{
	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.OnApplyCondition
	 */
	struct UCombatZone_Warning_C_OnApplyCondition_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.OnRemoveCondition
	 */
	struct UCombatZone_Warning_C_OnRemoveCondition_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.OnSuicide
	 */
	struct UCombatZone_Warning_C_OnSuicide_Params
	{
	public:
		TBL_EKillReason                                            Reason;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.OnMatchEnded
	 */
	struct UCombatZone_Warning_C_OnMatchEnded_Params
	{
	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.OnKilled
	 */
	struct UCombatZone_Warning_C_OnKilled_Params
	{
	public:
		TBL_EKillReason                                            Reason;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.Tick
	 */
	struct UCombatZone_Warning_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.NextSpawnWaveReplicated
	 */
	struct UCombatZone_Warning_C_NextSpawnWaveReplicated_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CombatZone_Warning.CombatZone_Warning_C.ExecuteUbergraph_CombatZone_Warning
	 */
	struct UCombatZone_Warning_C_ExecuteUbergraph_CombatZone_Warning_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
