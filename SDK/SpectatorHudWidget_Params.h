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
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateFollowingPlayer
	 */
	struct USpectatorHudWidget_C_UpdateFollowingPlayer_Params
	{
	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.CleanupPlayerState
	 */
	struct USpectatorHudWidget_C_CleanupPlayerState_Params
	{
	public:
		int                                                        TeamIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ATBLPlayerState*>                             PlayerStateArray;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateTeam
	 */
	struct USpectatorHudWidget_C_UpdateTeam_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UVerticalBox*                                        VerticleBox;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ATBLPlayerState*>                             PlayerStates;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       isTeam1;                                                 // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.Construct
	 */
	struct USpectatorHudWidget_C_Construct_Params
	{
	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.Tick
	 */
	struct USpectatorHudWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.OnClientPossessedPawn_Event_1
	 */
	struct USpectatorHudWidget_C_OnClientPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.ShowSpectatingStateWidgets
	 */
	struct USpectatorHudWidget_C_ShowSpectatingStateWidgets_Params
	{
	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.ShowWaitingToSpawnSpectatingWidgets
	 */
	struct USpectatorHudWidget_C_ShowWaitingToSpawnSpectatingWidgets_Params
	{
	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.HideAllWIdgets
	 */
	struct USpectatorHudWidget_C_HideAllWIdgets_Params
	{
	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn_Event_1
	 */
	struct USpectatorHudWidget_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn
	 */
	struct USpectatorHudWidget_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.OnPlayerSelectedSpectatorMode
	 */
	struct USpectatorHudWidget_C_OnPlayerSelectedSpectatorMode_Params
	{
	public:
		bool                                                       IsPlayerSpectator;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SpectatorHudWidget.SpectatorHudWidget_C.ExecuteUbergraph_SpectatorHudWidget
	 */
	struct USpectatorHudWidget_C_ExecuteUbergraph_SpectatorHudWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
