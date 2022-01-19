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
	 * Function KillFeed.KillFeed_C.IsFallDeath
	 */
	struct UKillFeed_C_IsFallDeath_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsFallDeath;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeed.KillFeed_C.ShouldDisplayObjectiveMessage
	 */
	struct UKillFeed_C_ShouldDisplayObjectiveMessage_Params
	{
	public:
		bool                                                       Display;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeed.KillFeed_C.ShouldDisplayDeathEvent
	 */
	struct UKillFeed_C_ShouldDisplayDeathEvent_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Display;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeed.KillFeed_C.IsSiegeWeapon
	 */
	struct UKillFeed_C_IsSiegeWeapon_Params
	{
	public:
		class AInventoryItem*                                      Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeapon;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeed.KillFeed_C.GetKillFeedModifiers
	 */
	struct UKillFeed_C_GetKillFeedModifiers_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<KillfeedModifiers_EKillfeedModifiers>               Modifiers;                                               // 0x0040(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeed.KillFeed_C.IsMyDeath
	 */
	struct UKillFeed_C_IsMyDeath_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsMyDeath;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeed.KillFeed_C.IsMyKill
	 */
	struct UKillFeed_C_IsMyKill_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsMyKill;                                                // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeed.KillFeed_C.IsTeamKill
	 */
	struct UKillFeed_C_IsTeamKill_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       TeamKill;                                                // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeed.KillFeed_C.GetKilledFaction
	 */
	struct UKillFeed_C_GetKilledFaction_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TBL_EFaction                                               Faction;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeed.KillFeed_C.GetKillFeedType
	 */
	struct UKillFeed_C_GetKillFeedType_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		KillfeedEntryType_EKillfeedEntryType                       NewParam;                                                // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeed.KillFeed_C.IsSuicide
	 */
	struct UKillFeed_C_IsSuicide_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsSuicide;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeed.KillFeed_C.Construct
	 */
	struct UKillFeed_C_Construct_Params
	{
	};

	/**
	 * Function KillFeed.KillFeed_C.GameModeMessageReceived_Event_1
	 */
	struct UKillFeed_C_GameModeMessageReceived_Event_1_Params
	{
	public:
		struct FGameModeMessage                                    Message;                                                 // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function KillFeed.KillFeed_C.CheckForCleanup
	 */
	struct UKillFeed_C_CheckForCleanup_Params
	{
	};

	/**
	 * Function KillFeed.KillFeed_C.OnPlayerKilled_Event_1
	 */
	struct UKillFeed_C_OnPlayerKilled_Event_1_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed
	 */
	struct UKillFeed_C_ExecuteUbergraph_KillFeed_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
