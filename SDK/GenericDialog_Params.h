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
	 * Function GenericDialog.GenericDialog_C.OnPreviewKeyDown
	 */
	struct UGenericDialog_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.OnKeyDown
	 */
	struct UGenericDialog_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.OnHoveredButton
	 */
	struct UGenericDialog_C_OnHoveredButton_Params
	{
	public:
		class URadiobutton_C*                                      Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterial*                                           FontMaterial;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Icon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.InitButton
	 */
	struct UGenericDialog_C_InitButton_Params
	{
	public:
		class URadiobutton_C*                                      Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ButtonText;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FKey                                                ButtonCalloutKey;                                        // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UTexture2D*                                          IconTexture;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.CheckForFrontendHUD
	 */
	struct UGenericDialog_C_CheckForFrontendHUD_Params
	{
	public:
		bool                                                       IsFrontend;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
	 */
	struct UGenericDialog_C_BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.PreConstruct
	 */
	struct UGenericDialog_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.OnEscapeRequested
	 */
	struct UGenericDialog_C_OnEscapeRequested_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.Press Accept or Single Button
	 */
	struct UGenericDialog_C_Press_Accept_or_Single_Button_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.Press Decline Button
	 */
	struct UGenericDialog_C_Press_Decline_Button_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.ChangeText
	 */
	struct UGenericDialog_C_ChangeText_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Body;                                                    // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.Construct
	 */
	struct UGenericDialog_C_Construct_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.OnOutroAnimationDone
	 */
	struct UGenericDialog_C_OnOutroAnimationDone_Params
	{
	public:
		bool                                                       bWasScreenClosed;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.OnClosedScreen
	 */
	struct UGenericDialog_C_OnClosedScreen_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.OnOpenedScreen
	 */
	struct UGenericDialog_C_OnOpenedScreen_Params
	{
	};

	/**
	 * Function GenericDialog.GenericDialog_C.Tick
	 */
	struct UGenericDialog_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.ExecuteUbergraph_GenericDialog
	 */
	struct UGenericDialog_C_ExecuteUbergraph_GenericDialog_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GenericDialog.GenericDialog_C.OnClose__DelegateSignature
	 */
	struct UGenericDialog_C_OnClose__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
