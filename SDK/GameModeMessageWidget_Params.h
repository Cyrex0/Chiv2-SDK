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
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.SetStyle
	 */
	struct UGameModeMessageWidget_C_SetStyle_Params
	{
	public:
		ObjectiveMessageStyleType_EObjectiveMessageStyleType       ObjectiveMessagestyle;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.HideMessage
	 */
	struct UGameModeMessageWidget_C_HideMessage_Params
	{
	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.PreConstruct
	 */
	struct UGameModeMessageWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.SetupMessage
	 */
	struct UGameModeMessageWidget_C_SetupMessage_Params
	{
	public:
		struct FGameModeMessage                                    Message;                                                 // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.CustomEvent_1
	 */
	struct UGameModeMessageWidget_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.CustomEvent_2
	 */
	struct UGameModeMessageWidget_C_CustomEvent_2_Params
	{
	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.Construct
	 */
	struct UGameModeMessageWidget_C_Construct_Params
	{
	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UGameModeMessageWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.ExecuteUbergraph_GameModeMessageWidget
	 */
	struct UGameModeMessageWidget_C_ExecuteUbergraph_GameModeMessageWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameModeMessageWidget.GameModeMessageWidget_C.AnimationOutComplete__DelegateSignature
	 */
	struct UGameModeMessageWidget_C_AnimationOutComplete__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
