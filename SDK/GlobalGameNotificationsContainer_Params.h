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
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.CanShowHint
	 */
	struct UGlobalGameNotificationsContainer_C_CanShowHint_Params
	{
	public:
		bool                                                       CanShowHint;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.GetRandomHint
	 */
	struct UGlobalGameNotificationsContainer_C_GetRandomHint_Params
	{
	public:
		TBL_EHintType                                              Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintInputType                                         Hint_Input_Type;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RandomKey;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessLevelUpEvent
	 */
	struct UGlobalGameNotificationsContainer_C_ProcessLevelUpEvent_Params
	{
	public:
		struct FLevelUpResult                                      LevelUpResult;                                           // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnLoaded_0C2677EC44803511BE7821B9553BFDBE
	 */
	struct UGlobalGameNotificationsContainer_C_OnLoaded_0C2677EC44803511BE7821B9553BFDBE_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RecievedInvite
	 */
	struct UGlobalGameNotificationsContainer_C_RecievedInvite_Params
	{
	public:
		class FString                                              InviteeId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InviteeName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessRankUpMessage
	 */
	struct UGlobalGameNotificationsContainer_C_ProcessRankUpMessage_Params
	{
	public:
		struct FRankUpMessage                                      Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteReceived
	 */
	struct UGlobalGameNotificationsContainer_C_OnPartyInviteReceived_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnReceivedGlobalGameNotification_Event_1
	 */
	struct UGlobalGameNotificationsContainer_C_OnReceivedGlobalGameNotification_Event_1_Params
	{
	public:
		TBL_EGlobalGameNotificationCategory                        Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Title;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Body;                                                    // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                Subcategory;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Data;                                                    // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.AsyncLoadInventoryItem
	 */
	struct UGlobalGameNotificationsContainer_C_AsyncLoadInventoryItem_Params
	{
	public:
		struct FLevelUpResult                                      LevelUpResult;                                           // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.SendLoadedRankUpMessages
	 */
	struct UGlobalGameNotificationsContainer_C_SendLoadedRankUpMessages_Params
	{
	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnMessagedFinished
	 */
	struct UGlobalGameNotificationsContainer_C_OnMessagedFinished_Params
	{
	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Level Up Event
	 */
	struct UGlobalGameNotificationsContainer_C_On_Level_Up_Event_Params
	{
	public:
		TArray<struct FLevelUpResult>                              LevelUpEvents;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberJoin
	 */
	struct UGlobalGameNotificationsContainer_C_OnPartyMemberJoin_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberLeft
	 */
	struct UGlobalGameNotificationsContainer_C_OnPartyMemberLeft_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberRemoved
	 */
	struct UGlobalGameNotificationsContainer_C_OnPartyMemberRemoved_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyLeaderChanged
	 */
	struct UGlobalGameNotificationsContainer_C_OnPartyLeaderChanged_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyDisbanded
	 */
	struct UGlobalGameNotificationsContainer_C_OnPartyDisbanded_Params
	{
	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestRandomHint
	 */
	struct UGlobalGameNotificationsContainer_C_RequestRandomHint_Params
	{
	public:
		float                                                      HintChance;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintType                                              HintCategory;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintInputType                                         Hint_Input_Type;                                         // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.HintCooldownFinished
	 */
	struct UGlobalGameNotificationsContainer_C_HintCooldownFinished_Params
	{
	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnTitleBroadcastReceived
	 */
	struct UGlobalGameNotificationsContainer_C_OnTitleBroadcastReceived_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnInitialized
	 */
	struct UGlobalGameNotificationsContainer_C_OnInitialized_Params
	{
	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPlayerStateReplicated_Event_1
	 */
	struct UGlobalGameNotificationsContainer_C_OnPlayerStateReplicated_Event_1_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.VotingStarted
	 */
	struct UGlobalGameNotificationsContainer_C_VotingStarted_Params
	{
	public:
		class UVotingInstance*                                     VotingInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteResponseReceived
	 */
	struct UGlobalGameNotificationsContainer_C_OnPartyInviteResponseReceived_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SenderName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		unsigned char                                              Response;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.Construct
	 */
	struct UGlobalGameNotificationsContainer_C_Construct_Params
	{
	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestSpecificHint
	 */
	struct UGlobalGameNotificationsContainer_C_RequestSpecificHint_Params
	{
	public:
		class FName                                                HintKey;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnCreatePartyResult
	 */
	struct UGlobalGameNotificationsContainer_C_OnCreatePartyResult_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              PartyId;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ClearInvites
	 */
	struct UGlobalGameNotificationsContainer_C_ClearInvites_Params
	{
	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ExecuteUbergraph_GlobalGameNotificationsContainer
	 */
	struct UGlobalGameNotificationsContainer_C_ExecuteUbergraph_GlobalGameNotificationsContainer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Ended Wave Hover__DelegateSignature
	 */
	struct UGlobalGameNotificationsContainer_C_On_Ended_Wave_Hover__DelegateSignature_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Started Wave Hover__DelegateSignature
	 */
	struct UGlobalGameNotificationsContainer_C_On_Started_Wave_Hover__DelegateSignature_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
