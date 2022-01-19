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
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateSelfOverlay
	 */
	struct UPlayerListEntry_C_UpdateSelfOverlay_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnPreviewKeyDown
	 */
	struct UPlayerListEntry_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnRightClicked
	 */
	struct UPlayerListEntry_C_OnRightClicked_Params
	{
	public:
		struct FVector2D                                           ClickPosition;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdatePlatform
	 */
	struct UPlayerListEntry_C_UpdatePlatform_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.IsConsole
	 */
	struct UPlayerListEntry_C_IsConsole_Params
	{
	public:
		TBL_EHardwarePlatform                                      HardwarePlatform;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsConsole;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.GetPlayerName
	 */
	struct UPlayerListEntry_C_GetPlayerName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateBotStatus
	 */
	struct UPlayerListEntry_C_UpdateBotStatus_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdatePing
	 */
	struct UPlayerListEntry_C_UpdatePing_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.On_ScoreboardDropDownAnchor_GetMenuContent_1
	 */
	struct UPlayerListEntry_C_On_ScoreboardDropDownAnchor_GetMenuContent_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.SetState
	 */
	struct UPlayerListEntry_C_SetState_Params
	{
	public:
		PlayerListEntryState_EPlayerListEntryState                 State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateIsInParty
	 */
	struct UPlayerListEntry_C_UpdateIsInParty_Params
	{
	public:
		bool                                                       InParty;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdatePlayerState
	 */
	struct UPlayerListEntry_C_UpdatePlayerState_Params
	{
	public:
		class ATBLPlayerState*                                     InState;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        RankIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RightSide;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateWidgetState
	 */
	struct UPlayerListEntry_C_UpdateWidgetState_Params
	{
	public:
		bool                                                       IsAlive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.InvalidateCache
	 */
	struct UPlayerListEntry_C_InvalidateCache_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnPlayerStateChanged
	 */
	struct UPlayerListEntry_C_OnPlayerStateChanged_Params
	{
	public:
		class ATBLPlayerState*                                     PreviousPlayerState;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateBackgroundImageVisibility
	 */
	struct UPlayerListEntry_C_UpdateBackgroundImageVisibility_Params
	{
	public:
		int                                                        RankIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateRenderScales
	 */
	struct UPlayerListEntry_C_UpdateRenderScales_Params
	{
	public:
		bool                                                       bIsRightSide;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateForFaction
	 */
	struct UPlayerListEntry_C_UpdateForFaction_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdatePlayername
	 */
	struct UPlayerListEntry_C_UpdatePlayername_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.Construct
	 */
	struct UPlayerListEntry_C_Construct_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.PreConstruct
	 */
	struct UPlayerListEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateRank
	 */
	struct UPlayerListEntry_C_UpdateRank_Params
	{
	public:
		int                                                        RankIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.Tick
	 */
	struct UPlayerListEntry_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdateIsFriend
	 */
	struct UPlayerListEntry_C_UpdateIsFriend_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnLevelUp
	 */
	struct UPlayerListEntry_C_OnLevelUp_Params
	{
	public:
		int                                                        GlobalRank;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.StatsUpdated
	 */
	struct UPlayerListEntry_C_StatsUpdated_Params
	{
	public:
		struct FTBLOnlineStats                                     OnlineStats;                                             // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnGamepadChange
	 */
	struct UPlayerListEntry_C_OnGamepadChange_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnAddedToFocusPath
	 */
	struct UPlayerListEntry_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnRemovedFromFocusPath
	 */
	struct UPlayerListEntry_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPlayerListEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPlayerListEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerListEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnGlobalRankChanged_Event_1
	 */
	struct UPlayerListEntry_C_OnGlobalRankChanged_Event_1_Params
	{
	public:
		int                                                        NewGlobalRank;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.UpdatePartyStatus
	 */
	struct UPlayerListEntry_C_UpdatePartyStatus_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnScoreChanged
	 */
	struct UPlayerListEntry_C_OnScoreChanged_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnDeathsChanged
	 */
	struct UPlayerListEntry_C_OnDeathsChanged_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnTakedownsChanged
	 */
	struct UPlayerListEntry_C_OnTakedownsChanged_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnKillsChanged
	 */
	struct UPlayerListEntry_C_OnKillsChanged_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnPlatformChanged
	 */
	struct UPlayerListEntry_C_OnPlatformChanged_Params
	{
	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.ExecuteUbergraph_PlayerListEntry
	 */
	struct UPlayerListEntry_C_ExecuteUbergraph_PlayerListEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerListEntry.PlayerListEntry_C.OnPlayerListEntryClicked__DelegateSignature
	 */
	struct UPlayerListEntry_C_OnPlayerListEntryClicked__DelegateSignature_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
