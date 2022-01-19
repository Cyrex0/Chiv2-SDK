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
	 * Function NDASplashScreen.NDASplashScreen_C.OnKeyDown
	 */
	struct UNDASplashScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
	 */
	struct UNDASplashScreen_C_BndEvt__Radiobutton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature
	 */
	struct UNDASplashScreen_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.Construct
	 */
	struct UNDASplashScreen_C_Construct_Params
	{
	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.CustomEvent_1
	 */
	struct UNDASplashScreen_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.SetAutoCloseText
	 */
	struct UNDASplashScreen_C_SetAutoCloseText_Params
	{
	public:
		int                                                        TimeRemaining;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1
	 */
	struct UNDASplashScreen_C_WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.BndEvt__ScrollBox_97_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 */
	struct UNDASplashScreen_C_BndEvt__ScrollBox_97_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.OnUserScrolled
	 */
	struct UNDASplashScreen_C_OnUserScrolled_Params
	{
	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.OnFocusLost
	 */
	struct UNDASplashScreen_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.K2_OnFocusChanging
	 */
	struct UNDASplashScreen_C_K2_OnFocusChanging_Params
	{
	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.Tick
	 */
	struct UNDASplashScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.OnInitialized
	 */
	struct UNDASplashScreen_C_OnInitialized_Params
	{
	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.ExecuteUbergraph_NDASplashScreen
	 */
	struct UNDASplashScreen_C_ExecuteUbergraph_NDASplashScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NDASplashScreen.NDASplashScreen_C.NDAAccepted__DelegateSignature
	 */
	struct UNDASplashScreen_C_NDAAccepted__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
