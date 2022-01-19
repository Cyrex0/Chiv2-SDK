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
	 * Function HintNotificationWidget.HintNotificationWidget_C.Cinematic Mode Changed
	 */
	struct UHintNotificationWidget_C_Cinematic_Mode_Changed_Params
	{
	public:
		CinematicBarsMode_ECinematicBarsMode                       New_mode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HintNotificationWidget.HintNotificationWidget_C.Fade In
	 */
	struct UHintNotificationWidget_C_Fade_In_Params
	{
	};

	/**
	 * Function HintNotificationWidget.HintNotificationWidget_C.Fade Out
	 */
	struct UHintNotificationWidget_C_Fade_Out_Params
	{
	};

	/**
	 * Function HintNotificationWidget.HintNotificationWidget_C.RemoveWidget
	 */
	struct UHintNotificationWidget_C_RemoveWidget_Params
	{
	};

	/**
	 * Function HintNotificationWidget.HintNotificationWidget_C.OnInitialized
	 */
	struct UHintNotificationWidget_C_OnInitialized_Params
	{
	};

	/**
	 * Function HintNotificationWidget.HintNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1
	 */
	struct UHintNotificationWidget_C_WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function HintNotificationWidget.HintNotificationWidget_C.Construct
	 */
	struct UHintNotificationWidget_C_Construct_Params
	{
	};

	/**
	 * Function HintNotificationWidget.HintNotificationWidget_C.OnGamepadInputChanged
	 */
	struct UHintNotificationWidget_C_OnGamepadInputChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HintNotificationWidget.HintNotificationWidget_C.ExecuteUbergraph_HintNotificationWidget
	 */
	struct UHintNotificationWidget_C_ExecuteUbergraph_HintNotificationWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
