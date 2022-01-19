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
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnKeyDown
	 */
	struct UTermsOfServiceScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UTermsOfServiceScreen_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UTermsOfServiceScreen_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnOpenedScreen
	 */
	struct UTermsOfServiceScreen_C_OnOpenedScreen_Params
	{
	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.CloseScreen
	 */
	struct UTermsOfServiceScreen_C_CloseScreen_Params
	{
	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UTermsOfServiceScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.Construct
	 */
	struct UTermsOfServiceScreen_C_Construct_Params
	{
	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.ExecuteUbergraph_TermsOfServiceScreen
	 */
	struct UTermsOfServiceScreen_C_ExecuteUbergraph_TermsOfServiceScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnTOSDeclined__DelegateSignature
	 */
	struct UTermsOfServiceScreen_C_OnTOSDeclined__DelegateSignature_Params
	{
	};

	/**
	 * Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnTOSAccepted__DelegateSignature
	 */
	struct UTermsOfServiceScreen_C_OnTOSAccepted__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
