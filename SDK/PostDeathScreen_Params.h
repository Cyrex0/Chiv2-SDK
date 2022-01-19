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
	 * Function PostDeathScreen.PostDeathScreen_C.SendCommendForgiveToServer
	 */
	struct UPostDeathScreen_C_SendCommendForgiveToServer_Params
	{
	public:
		class ATBLPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EnemyKiller;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TeamKiller;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ATBLPlayerState*                                     Killer;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.UpdatePlayerPrompt
	 */
	struct UPostDeathScreen_C_UpdatePlayerPrompt_Params
	{
	public:
		bool                                                       IsEnemyKill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsTeamKill;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ATBLPlayerState*                                     Killer;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.UpdatePlatformIcon
	 */
	struct UPostDeathScreen_C_UpdatePlatformIcon_Params
	{
	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByAttackTypeText
	 */
	struct UPostDeathScreen_C_UpdateKilledByAttackTypeText_Params
	{
	public:
		bool                                                       bShouldShow;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeIcon
	 */
	struct UPostDeathScreen_C_UpdateKilledByWeaponTypeIcon_Params
	{
	public:
		bool                                                       bShouldShow;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByDamageText
	 */
	struct UPostDeathScreen_C_UpdateKilledByDamageText_Params
	{
	public:
		bool                                                       bShouldShow;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeText
	 */
	struct UPostDeathScreen_C_UpdateKilledByWeaponTypeText_Params
	{
	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.GetShouldShowKilledByWeapon
	 */
	struct UPostDeathScreen_C_GetShouldShowKilledByWeapon_Params
	{
	public:
		bool                                                       bShouldShow;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.GetAbilityNameText
	 */
	struct UPostDeathScreen_C_GetAbilityNameText_Params
	{
	public:
		class FName                                                AbilityName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                AbilityNameText;                                         // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       bIsFound;                                                // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.SetCommendVisibility
	 */
	struct UPostDeathScreen_C_SetCommendVisibility_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Play_Fade_Out;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.CanCommendPlayer
	 */
	struct UPostDeathScreen_C_CanCommendPlayer_Params
	{
	public:
		struct FDeathRecapEntry                                    DeathRecapEntry;                                         // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Can_Commend;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Can_Forgive;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.GetSecondsToDeploy
	 */
	struct UPostDeathScreen_C_GetSecondsToDeploy_Params
	{
	public:
		class FText                                                Seconds_as_text;                                         // 0x0000(0x0018)  (Parm, OutParm)
		int                                                        Seconds;                                                 // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.GetTotalScore
	 */
	struct UPostDeathScreen_C_GetTotalScore_Params
	{
	public:
		int                                                        Score;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.GetObjectiveScore
	 */
	struct UPostDeathScreen_C_GetObjectiveScore_Params
	{
	public:
		int                                                        Score;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.GetRevives
	 */
	struct UPostDeathScreen_C_GetRevives_Params
	{
	public:
		int                                                        Revives;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.GetWidgetSize
	 */
	struct UPostDeathScreen_C_GetWidgetSize_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Size2D;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.SetKillerColor
	 */
	struct UPostDeathScreen_C_SetKillerColor_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.Get Name From Killer
	 */
	struct UPostDeathScreen_C_Get_Name_From_Killer_Params
	{
	public:
		class ATBLPlayerController*                                my_TBLPC;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name_Text;                                               // 0x0008(0x0018)  (Parm, OutParm)
		bool                                                       KillerExists;                                            // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.Get Name Text From Maybe Player State
	 */
	struct UPostDeathScreen_C_Get_Name_Text_From_Maybe_Player_State_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name_Text;                                               // 0x0008(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.InitializeAndShow
	 */
	struct UPostDeathScreen_C_InitializeAndShow_Params
	{
	public:
		bool                                                       UseWaveTimer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.Hide
	 */
	struct UPostDeathScreen_C_Hide_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.Construct
	 */
	struct UPostDeathScreen_C_Construct_Params
	{
	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.HandlePlayerSelectedSpectatorMode
	 */
	struct UPostDeathScreen_C_HandlePlayerSelectedSpectatorMode_Params
	{
	public:
		bool                                                       IsPlayerSpectator;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.Show
	 */
	struct UPostDeathScreen_C_Show_Params
	{
	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.SwitchToWaveTimer
	 */
	struct UPostDeathScreen_C_SwitchToWaveTimer_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.SetSpawnWave
	 */
	struct UPostDeathScreen_C_SetSpawnWave_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.Tick
	 */
	struct UPostDeathScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1
	 */
	struct UPostDeathScreen_C_OnReceivedSpawnWaveJoinResponse_Event_1_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bJoinWaveSuccess;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.CommendPlayer
	 */
	struct UPostDeathScreen_C_CommendPlayer_Params
	{
	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.CustomEvent_1
	 */
	struct UPostDeathScreen_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.EnableBottomBar
	 */
	struct UPostDeathScreen_C_EnableBottomBar_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3
	 */
	struct UPostDeathScreen_C_WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3_Params
	{
	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.HandlePlayerKillScored
	 */
	struct UPostDeathScreen_C_HandlePlayerKillScored_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.OnInitialized
	 */
	struct UPostDeathScreen_C_OnInitialized_Params
	{
	};

	/**
	 * Function PostDeathScreen.PostDeathScreen_C.ExecuteUbergraph_PostDeathScreen
	 */
	struct UPostDeathScreen_C_ExecuteUbergraph_PostDeathScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
