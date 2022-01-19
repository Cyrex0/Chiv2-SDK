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
	 * Function PlayerReportWidget.PlayerReportWidget_C.ChangedSelected
	 */
	struct UPlayerReportWidget_C_ChangedSelected_Params
	{
	public:
		class URadiobutton_C*                                      SelectedButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.OnMouseButtonDown
	 */
	struct UPlayerReportWidget_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.GetReportedController
	 */
	struct UPlayerReportWidget_C_GetReportedController_Params
	{
	public:
		class AController*                                         Reported;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.EnableReportWidget
	 */
	struct UPlayerReportWidget_C_EnableReportWidget_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.DisableReportWidget
	 */
	struct UPlayerReportWidget_C_DisableReportWidget_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature
	 */
	struct UPlayerReportWidget_C_BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.ExecuteUbergraph_PlayerReportWidget
	 */
	struct UPlayerReportWidget_C_ExecuteUbergraph_PlayerReportWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.OnReportClosed__DelegateSignature
	 */
	struct UPlayerReportWidget_C_OnReportClosed__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerReportWidget.PlayerReportWidget_C.OnReportChosen__DelegateSignature
	 */
	struct UPlayerReportWidget_C_OnReportChosen__DelegateSignature_Params
	{
	public:
		TBL_EPlayerReportCategory                                  ReportType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
