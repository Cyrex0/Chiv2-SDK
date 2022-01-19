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
	 * Function Radiobutton.Radiobutton_C.CustomEvent_1
	 */
	struct URadiobutton_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.Stop Looping Highlight Animation
	 */
	struct URadiobutton_C_Stop_Looping_Highlight_Animation_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.PreConstruct
	 */
	struct URadiobutton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.UpdateText
	 */
	struct URadiobutton_C_UpdateText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.UpdateTextColor
	 */
	struct URadiobutton_C_UpdateTextColor_Params
	{
	public:
		struct FLinearColor                                        Specified_Color;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.Set Button Callout
	 */
	struct URadiobutton_C_Set_Button_Callout_Params
	{
	public:
		struct FButtonCallout                                      Callout;                                                 // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.OnGamepadActivated
	 */
	struct URadiobutton_C_OnGamepadActivated_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.OnGamepadDeactivated
	 */
	struct URadiobutton_C_OnGamepadDeactivated_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.UpdateIcon
	 */
	struct URadiobutton_C_UpdateIcon_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.OnInitialized
	 */
	struct URadiobutton_C_OnInitialized_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct URadiobutton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct URadiobutton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.Construct
	 */
	struct URadiobutton_C_Construct_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.INTERNAL_OnClicked_Button
	 */
	struct URadiobutton_C_INTERNAL_OnClicked_Button_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.Play Looping Highlight Animation
	 */
	struct URadiobutton_C_Play_Looping_Highlight_Animation_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.SetButtonEnabled
	 */
	struct URadiobutton_C_SetButtonEnabled_Params
	{
	public:
		bool                                                       _;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.Initialize
	 */
	struct URadiobutton_C_Initialize_Params
	{
	};

	/**
	 * Function Radiobutton.Radiobutton_C.OnAddedToFocusPath
	 */
	struct URadiobutton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.OnFocusLost
	 */
	struct URadiobutton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.UpdateIconColor
	 */
	struct URadiobutton_C_UpdateIconColor_Params
	{
	public:
		struct FLinearColor                                        Specified_Color;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.SetSelected
	 */
	struct URadiobutton_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.OnGamepadInputModeChanged
	 */
	struct URadiobutton_C_OnGamepadInputModeChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Radiobutton.Radiobutton_C.ExecuteUbergraph_Radiobutton
	 */
	struct URadiobutton_C_ExecuteUbergraph_Radiobutton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
