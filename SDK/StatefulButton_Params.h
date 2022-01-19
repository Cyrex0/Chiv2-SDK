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
	 * Function StatefulButton.StatefulButton_C.OnKeyUp
	 */
	struct UStatefulButton_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnKeyDown
	 */
	struct UStatefulButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.ResetAnims
	 */
	struct UStatefulButton_C_ResetAnims_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.Get Normal StatefulButton ToolTipWidget
	 */
	struct UStatefulButton_C_Get_Normal_StatefulButton_ToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.GetSelected
	 */
	struct UStatefulButton_C_GetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.SetSelected
	 */
	struct UStatefulButton_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.SetHovered
	 */
	struct UStatefulButton_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.On Highlight Event
	 */
	struct UStatefulButton_C_On_Highlight_Event_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnSelectedChanged
	 */
	struct UStatefulButton_C_OnSelectedChanged_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.Init Animations
	 */
	struct UStatefulButton_C_Init_Animations_Params
	{
	public:
		class UWidgetAnimation*                                    Hover;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    Unhover;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    Select;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    Deselect;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    Click;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             Button;                                                  // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    SelectedHover;                                           // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    DeselectedHover;                                         // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    SelectedUnhover;                                         // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    DeslectedUnhover;                                        // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    InitialState;                                            // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.INTERNAL_OnClicked_Button
	 */
	struct UStatefulButton_C_INTERNAL_OnClicked_Button_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.INTERNAL_OnReleased_Button
	 */
	struct UStatefulButton_C_INTERNAL_OnReleased_Button_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.PreConstruct
	 */
	struct UStatefulButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.ResetButtonAnimations
	 */
	struct UStatefulButton_C_ResetButtonAnimations_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.K2_Unhighlight
	 */
	struct UStatefulButton_C_K2_Unhighlight_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.K2_Highlight
	 */
	struct UStatefulButton_C_K2_Highlight_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.Match Anims To Current State
	 */
	struct UStatefulButton_C_Match_Anims_To_Current_State_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnAddedToFocusPath
	 */
	struct UStatefulButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.ExecuteUbergraph_StatefulButton
	 */
	struct UStatefulButton_C_ExecuteUbergraph_StatefulButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnFocused__DelegateSignature
	 */
	struct UStatefulButton_C_OnFocused__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   StatefulButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnReleased__DelegateSignature
	 */
	struct UStatefulButton_C_OnReleased__DelegateSignature_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnUnhovered__DelegateSignature
	 */
	struct UStatefulButton_C_OnUnhovered__DelegateSignature_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnHovered__DelegateSignature
	 */
	struct UStatefulButton_C_OnHovered__DelegateSignature_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnDeselected__DelegateSignature
	 */
	struct UStatefulButton_C_OnDeselected__DelegateSignature_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnSelected__DelegateSignature
	 */
	struct UStatefulButton_C_OnSelected__DelegateSignature_Params
	{
	};

	/**
	 * Function StatefulButton.StatefulButton_C.OnClicked__DelegateSignature
	 */
	struct UStatefulButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
