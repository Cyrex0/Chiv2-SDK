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
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.GetRankUpMessageTypeFromOnlineStat
	 */
	struct UGameModeMessageContainer_C_GetRankUpMessageTypeFromOnlineStat_Params
	{
	public:
		TBL_EOnlineStat                                            OnlineStat;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		RankUpMessageType_ERankUpMessageType                       RankUpMessageType;                                       // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.CanShowMessage
	 */
	struct UGameModeMessageContainer_C_CanShowMessage_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.Construct
	 */
	struct UGameModeMessageContainer_C_Construct_Params
	{
	};

	/**
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.GameModeMessageReceived_Event_1
	 */
	struct UGameModeMessageContainer_C_GameModeMessageReceived_Event_1_Params
	{
	public:
		struct FGameModeMessage                                    Message;                                                 // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.ShowMessage
	 */
	struct UGameModeMessageContainer_C_ShowMessage_Params
	{
	public:
		struct FGameModeMessage                                    Message;                                                 // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature
	 */
	struct UGameModeMessageContainer_C_BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature_Params
	{
	};

	/**
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.OnCinematicStateChanged_Event_1
	 */
	struct UGameModeMessageContainer_C_OnCinematicStateChanged_Event_1_Params
	{
	public:
		struct FGameplayTag                                        PreviousStateTag;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UCinematicState*                                     PreviousState;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        NewStateTag;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UCinematicState*                                     NewState;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.ProcessNewMessage
	 */
	struct UGameModeMessageContainer_C_ProcessNewMessage_Params
	{
	public:
		struct FGameModeMessage                                    GameModeMessage;                                         // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function GameModeMessageContainer.GameModeMessageContainer_C.ExecuteUbergraph_GameModeMessageContainer
	 */
	struct UGameModeMessageContainer_C_ExecuteUbergraph_GameModeMessageContainer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
