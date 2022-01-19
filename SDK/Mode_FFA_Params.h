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
	 * Function Mode_FFA.Mode_FFA_C.GetScorePercent
	 */
	struct AMode_FFA_C_GetScorePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.ConfigureFFATimeoutStage
	 */
	struct AMode_FFA_C_ConfigureFFATimeoutStage_Params
	{
	public:
		class AFFATimeoutStage_C*                                  Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.Get First Stage
	 */
	struct AMode_FFA_C_Get_First_Stage_Params
	{
	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.ReceiveBeginPlay
	 */
	struct AMode_FFA_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.OnPlayerKilled_Event_1
	 */
	struct AMode_FFA_C_OnPlayerKilled_Event_1_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         Killed;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDeathEvent                                         DeathEvent;                                              // 0x0018(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FDeathDamageTakenEvent                              DamageEvent;                                             // 0x0058(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.K2_HandleMatchHasStarted
	 */
	struct AMode_FFA_C_K2_HandleMatchHasStarted_Params
	{
	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.UpdateDynamicMusic
	 */
	struct AMode_FFA_C_UpdateDynamicMusic_Params
	{
	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.ExecuteUbergraph_Mode_FFA
	 */
	struct AMode_FFA_C_ExecuteUbergraph_Mode_FFA_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.VictoryAwarded__DelegateSignature
	 */
	struct AMode_FFA_C_VictoryAwarded__DelegateSignature_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Mode_FFA.Mode_FFA_C.KillLeaderUpdated__DelegateSignature
	 */
	struct AMode_FFA_C_KillLeaderUpdated__DelegateSignature_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Kills;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        MaxScore;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
