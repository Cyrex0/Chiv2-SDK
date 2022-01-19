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
	 * Function QuickPlayScreen.QuickPlayScreen_C.IsMatchmaking
	 */
	struct UQuickPlayScreen_C_IsMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.Set MM Button Image
	 */
	struct UQuickPlayScreen_C_Set_MM_Button_Image_Params
	{
	public:
		class UNavigationSubButton_C*                              Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Image_Name;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.SetNavMenu
	 */
	struct UQuickPlayScreen_C_SetNavMenu_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnInitialized
	 */
	struct UQuickPlayScreen_C_OnInitialized_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnOpenedScreen
	 */
	struct UQuickPlayScreen_C_OnOpenedScreen_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnInputModeChanged
	 */
	struct UQuickPlayScreen_C_OnInputModeChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnTitleDataUpdated_Event_1
	 */
	struct UQuickPlayScreen_C_OnTitleDataUpdated_Event_1_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnIsMatchmakingChanged_Event_1
	 */
	struct UQuickPlayScreen_C_OnIsMatchmakingChanged_Event_1_Params
	{
	public:
		bool                                                       bIsMatchmaking;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.On Has Title Data Changed
	 */
	struct UQuickPlayScreen_C_On_Has_Title_Data_Changed_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.On Matchmaking Queues Changed
	 */
	struct UQuickPlayScreen_C_On_Matchmaking_Queues_Changed_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__MMButton0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__MMButton1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__MMButton2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__MMButton3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__MMButton4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton5_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__MMButton5_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__AllQueuesButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__AllQueuesButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.On MM Button Clicked
	 */
	struct UQuickPlayScreen_C_On_MM_Button_Clicked_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__QuickPlayButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__QuickPlayButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__TutorialButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__TutorialButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__BrowserQuickMatchButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__BrowserQuickMatchButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.SetCreateGamePermission
	 */
	struct UQuickPlayScreen_C_SetCreateGamePermission_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.Construct
	 */
	struct UQuickPlayScreen_C_Construct_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnCreatedParty
	 */
	struct UQuickPlayScreen_C_OnCreatedParty_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              PartyId;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeaderChange_Event_1
	 */
	struct UQuickPlayScreen_C_OnPartyLeaderChange_Event_1_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeave_Event_1
	 */
	struct UQuickPlayScreen_C_OnPartyLeave_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnPartyDisband_Event_1
	 */
	struct UQuickPlayScreen_C_OnPartyDisband_Event_1_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnMemberJoin
	 */
	struct UQuickPlayScreen_C_OnMemberJoin_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnPartyInviteAccept_Event_1
	 */
	struct UQuickPlayScreen_C_OnPartyInviteAccept_Event_1_Params
	{
	public:
		class FString                                              PartyId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__TutorialButton_1_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__TutorialButton_1_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UQuickPlayScreen_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnPartyJoinedQueue_Event_1
	 */
	struct UQuickPlayScreen_C_OnPartyJoinedQueue_Event_1_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeftQueue_Event_1
	 */
	struct UQuickPlayScreen_C_OnPartyLeftQueue_Event_1_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.CanCancelMatchMaking
	 */
	struct UQuickPlayScreen_C_CanCancelMatchMaking_Params
	{
	};

	/**
	 * Function QuickPlayScreen.QuickPlayScreen_C.ExecuteUbergraph_QuickPlayScreen
	 */
	struct UQuickPlayScreen_C_ExecuteUbergraph_QuickPlayScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
