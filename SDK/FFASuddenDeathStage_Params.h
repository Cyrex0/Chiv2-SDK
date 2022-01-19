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
	 * Function FFASuddenDeathStage.FFASuddenDeathStage_C.GetVictor
	 */
	struct AFFASuddenDeathStage_C_GetVictor_Params
	{
	public:
		class ATBLPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTie;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FFASuddenDeathStage.FFASuddenDeathStage_C.IsStageReadyToComplete
	 */
	struct AFFASuddenDeathStage_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FFASuddenDeathStage.FFASuddenDeathStage_C.CompleteStage
	 */
	struct AFFASuddenDeathStage_C_CompleteStage_Params
	{
	};

	/**
	 * Function FFASuddenDeathStage.FFASuddenDeathStage_C.StartStage
	 */
	struct AFFASuddenDeathStage_C_StartStage_Params
	{
	};

	/**
	 * Function FFASuddenDeathStage.FFASuddenDeathStage_C.OnPlayerKilled_Event_1
	 */
	struct AFFASuddenDeathStage_C_OnPlayerKilled_Event_1_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         Killed;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDeathEvent                                         DeathEvent;                                              // 0x0018(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FDeathDamageTakenEvent                              DamageEvent;                                             // 0x0058(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function FFASuddenDeathStage.FFASuddenDeathStage_C.ExecuteUbergraph_FFASuddenDeathStage
	 */
	struct AFFASuddenDeathStage_C_ExecuteUbergraph_FFASuddenDeathStage_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
