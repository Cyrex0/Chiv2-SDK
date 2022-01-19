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
	 * Function PlayerList.PlayerList_C.UpdateMuteButton
	 */
	struct UPlayerList_C_UpdateMuteButton_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.ShouldShowNativeProfileForHardwarePlatform
	 */
	struct UPlayerList_C_ShouldShowNativeProfileForHardwarePlatform_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShow;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerList.PlayerList_C.ShouldShowNativeProfileForPlatform
	 */
	struct UPlayerList_C_ShouldShowNativeProfileForPlatform_Params
	{
	public:
		TBL_EPlatformType                                          Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShow;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerList.PlayerList_C.ShowPlatformSpecificUser
	 */
	struct UPlayerList_C_ShowPlatformSpecificUser_Params
	{
	public:
		class ATBLPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.OnMouseButtonDown
	 */
	struct UPlayerList_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerList.PlayerList_C.GetPositionViaPlayerList
	 */
	struct UPlayerList_C_GetPositionViaPlayerList_Params
	{
	public:
		class UPanelWidget*                                        PlayerList;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		PlayerListPositionType_EPlayerListPositionType             Position;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.GetPlayerListViaPosition
	 */
	struct UPlayerList_C_GetPlayerListViaPosition_Params
	{
	public:
		PlayerListPositionType_EPlayerListPositionType             Position;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelWidget*                                        PlayerList;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.GetRankIndex
	 */
	struct UPlayerList_C_GetRankIndex_Params
	{
	public:
		int                                                        LoopIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelWidget*                                        PlayerList;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.IsRightSide
	 */
	struct UPlayerList_C_IsRightSide_Params
	{
	public:
		class UPanelWidget*                                        PlayerList;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReturnValue;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerList.PlayerList_C.CreatePlayerListEntry
	 */
	struct UPlayerList_C_CreatePlayerListEntry_Params
	{
	public:
		TArray<class UPlayerListEntry_C*>                          ExistingEntries;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UPanelWidget*                                        PlayerList;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerListEntry_C*                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.GetAvailablePlayerEntry
	 */
	struct UPlayerList_C_GetAvailablePlayerEntry_Params
	{
	public:
		TArray<class UPlayerListEntry_C*>                          ExistingEntries;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UPanelWidget*                                        PlayerList;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerListEntry_C*                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.UpdatePageEntries
	 */
	struct UPlayerList_C_UpdatePageEntries_Params
	{
	public:
		TArray<class UPlayerListEntry_C*>                          PageEntries;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		TArray<class ATBLPlayerState*>                             Players;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UPanelWidget*                                        PlayerList;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.HavePlayerStatesChanged
	 */
	struct UPlayerList_C_HavePlayerStatesChanged_Params
	{
	public:
		TArray<class ATBLPlayerState*>                             OldPlayerStates;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class ATBLPlayerState*>                             NewPlayerStates;                                         // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bReturnValue;                                            // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerList.PlayerList_C.CheckIfPlayerStatesHaveChanged
	 */
	struct UPlayerList_C_CheckIfPlayerStatesHaveChanged_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.GetFactionsSet
	 */
	struct UPlayerList_C_GetFactionsSet_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.GetSortedPlayerStates
	 */
	struct UPlayerList_C_GetSortedPlayerStates_Params
	{
	public:
		TArray<class ATBLPlayerState*>                             LeftPagePlayers;                                         // 0x0050(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<class ATBLPlayerState*>                             RightPagePlayers;                                        // 0x0060(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.PopulatePlayerList
	 */
	struct UPlayerList_C_PopulatePlayerList_Params
	{
	public:
		class UPanelWidget*                                        PlayerList;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UPlayerListEntry_C*>                          PlayerListArray;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.OnKeyDown
	 */
	struct UPlayerList_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerList.PlayerList_C.OnOpenedScreen
	 */
	struct UPlayerList_C_OnOpenedScreen_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.PreConstruct
	 */
	struct UPlayerList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerList.PlayerList_C.OnLeftPagePlayersChanged
	 */
	struct UPlayerList_C_OnLeftPagePlayersChanged_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.OnRightPagePlayersChanged
	 */
	struct UPlayerList_C_OnRightPagePlayersChanged_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.OnSpectatorPlayersChanged
	 */
	struct UPlayerList_C_OnSpectatorPlayersChanged_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.Tick
	 */
	struct UPlayerList_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.Construct
	 */
	struct UPlayerList_C_Construct_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.PlayerLeveledUp
	 */
	struct UPlayerList_C_PlayerLeveledUp_Params
	{
	public:
		TArray<struct FLevelUpResult>                              LevelUpResult;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.OnInitialized
	 */
	struct UPlayerList_C_OnInitialized_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.OnInputModeChange
	 */
	struct UPlayerList_C_OnInputModeChange_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.FocusOnPlayerList
	 */
	struct UPlayerList_C_FocusOnPlayerList_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.OnPlayerListEntryClicked
	 */
	struct UPlayerList_C_OnPlayerListEntryClicked_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.EnableContextMenu
	 */
	struct UPlayerList_C_EnableContextMenu_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.DisableContextMenu
	 */
	struct UPlayerList_C_DisableContextMenu_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.BndEvt__VoteKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UPlayerList_C_BndEvt__VoteKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.BndEvt__ReportButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UPlayerList_C_BndEvt__ReportButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UPlayerList_C_BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.OnClosedScreen
	 */
	struct UPlayerList_C_OnClosedScreen_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.OnReportClosed
	 */
	struct UPlayerList_C_OnReportClosed_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.MenuFocused
	 */
	struct UPlayerList_C_MenuFocused_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Instant;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerList.PlayerList_C.GoToMainMenu
	 */
	struct UPlayerList_C_GoToMainMenu_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.BndEvt__UserInfoButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UPlayerList_C_BndEvt__UserInfoButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UPlayerList_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerList.PlayerList_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UPlayerList_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.BndEvt__ResumeButton_86_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
	 */
	struct UPlayerList_C_BndEvt__ResumeButton_86_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerList.PlayerList_C.ExecuteUbergraph_PlayerList
	 */
	struct UPlayerList_C_ExecuteUbergraph_PlayerList_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
