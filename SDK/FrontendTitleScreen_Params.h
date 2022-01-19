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
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.OnPreviewKeyDown
	 */
	struct UFrontendTitleScreen_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.GetText_1
	 */
	struct UFrontendTitleScreen_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.OnKeyDown
	 */
	struct UFrontendTitleScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__OfflineButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__OfflineButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.Construct
	 */
	struct UFrontendTitleScreen_C_Construct_Params
	{
	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceWidget_K2Node_ComponentBoundEvent_8_UserScrolledToEnd__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__TermsOfServiceWidget_K2Node_ComponentBoundEvent_8_UserScrolledToEnd__DelegateSignature_Params
	{
	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.Set Screen State
	 */
	struct UFrontendTitleScreen_C_Set_Screen_State_Params
	{
	public:
		TBL_ETitleScreenMode                                       New_State;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.PreConstruct
	 */
	struct UFrontendTitleScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.K2_OnStateChanged
	 */
	struct UFrontendTitleScreen_C_K2_OnStateChanged_Params
	{
	public:
		TBL_ETitleScreenMode                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__DeclineButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__DeclineButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_5_OnTOSAccepted__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_5_OnTOSAccepted__DelegateSignature_Params
	{
	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_7_OnTOSDeclined__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_7_OnTOSDeclined__DelegateSignature_Params
	{
	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__ReturnToMainMenu_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UFrontendTitleScreen_C_BndEvt__ReturnToMainMenu_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.OnPurchased
	 */
	struct UFrontendTitleScreen_C_OnPurchased_Params
	{
	};

	/**
	 * Function FrontendTitleScreen.FrontendTitleScreen_C.ExecuteUbergraph_FrontendTitleScreen
	 */
	struct UFrontendTitleScreen_C_ExecuteUbergraph_FrontendTitleScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
