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
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GetActionAtIndex
	 */
	struct UTutorialButtonCalloutWidget_C_GetActionAtIndex_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsController;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTutorialCalloutAction_C*                            Action;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InputModeChanged
	 */
	struct UTutorialButtonCalloutWidget_C_InputModeChanged_Params
	{
	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.CreateModifier
	 */
	struct UTutorialButtonCalloutWidget_C_CreateModifier_Params
	{
	public:
		TutorialCalloutModifier_ETutorialCalloutModifier           Modifier;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.Construct
	 */
	struct UTutorialButtonCalloutWidget_C_Construct_Params
	{
	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ClearCallouts
	 */
	struct UTutorialButtonCalloutWidget_C_ClearCallouts_Params
	{
	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.AddCallout
	 */
	struct UTutorialButtonCalloutWidget_C_AddCallout_Params
	{
	public:
		struct FTutorialCalloutActionStruct                        CalloutParams;                                           // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsController;                                            // 0x0028(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithCallouts
	 */
	struct UTutorialButtonCalloutWidget_C_InitWithCallouts_Params
	{
	public:
		TArray<struct FTutorialCalloutActionStruct>                KeyboardCallouts;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<struct FTutorialCalloutActionStruct>                ControllerCallouts;                                      // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GamePadInputModeChanged
	 */
	struct UTutorialButtonCalloutWidget_C_GamePadInputModeChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightNextAction
	 */
	struct UTutorialButtonCalloutWidget_C_HighlightNextAction_Params
	{
	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightActionAtIndex
	 */
	struct UTutorialButtonCalloutWidget_C_HighlightActionAtIndex_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UTutorialButtonCalloutWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithSavedCallouts
	 */
	struct UTutorialButtonCalloutWidget_C_InitWithSavedCallouts_Params
	{
	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.FadeUsableAtIndex
	 */
	struct UTutorialButtonCalloutWidget_C_FadeUsableAtIndex_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Fade;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ExecuteUbergraph_TutorialButtonCalloutWidget
	 */
	struct UTutorialButtonCalloutWidget_C_ExecuteUbergraph_TutorialButtonCalloutWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
