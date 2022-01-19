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
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnAnalogValueChanged
	 */
	struct UOptionsMenuEntry_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeyDown
	 */
	struct UOptionsMenuEntry_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.Get Inner Entry Widget
	 */
	struct UOptionsMenuEntry_C_Get_Inner_Entry_Widget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeyUp
	 */
	struct UOptionsMenuEntry_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseButtonDown
	 */
	struct UOptionsMenuEntry_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.Construct
	 */
	struct UOptionsMenuEntry_C_Construct_Params
	{
	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.CurrentValueChanged
	 */
	struct UOptionsMenuEntry_C_CurrentValueChanged_Params
	{
	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnClicked_Event_1
	 */
	struct UOptionsMenuEntry_C_OnClicked_Event_1_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnSelectionChanged_Event_1
	 */
	struct UOptionsMenuEntry_C_OnSelectionChanged_Event_1_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnValueChanged_Event_1
	 */
	struct UOptionsMenuEntry_C_OnValueChanged_Event_1_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.UpdateResetButton
	 */
	struct UOptionsMenuEntry_C_UpdateResetButton_Params
	{
	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.CustomEvent_1
	 */
	struct UOptionsMenuEntry_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.UpdateSliderProgressBar
	 */
	struct UOptionsMenuEntry_C_UpdateSliderProgressBar_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.BndEvt__KeybindingsEntry_K2Node_ComponentBoundEvent_3_KeyBindingUpdated__DelegateSignature
	 */
	struct UOptionsMenuEntry_C_BndEvt__KeybindingsEntry_K2Node_ComponentBoundEvent_3_KeyBindingUpdated__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseEnter
	 */
	struct UOptionsMenuEntry_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnMouseLeave
	 */
	struct UOptionsMenuEntry_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.PreConstruct
	 */
	struct UOptionsMenuEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.InitializeLinebreak
	 */
	struct UOptionsMenuEntry_C_InitializeLinebreak_Params
	{
	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnTextCommitted
	 */
	struct UOptionsMenuEntry_C_OnTextCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.BndEvt__Reset_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UOptionsMenuEntry_C_BndEvt__Reset_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.GamepadResetButton
	 */
	struct UOptionsMenuEntry_C_GamepadResetButton_Params
	{
	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.BP_OnSelected
	 */
	struct UOptionsMenuEntry_C_BP_OnSelected_Params
	{
	public:
		SlateCore_ESelectInfo                                      SelectInfo;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.BindToOptionsListEvents
	 */
	struct UOptionsMenuEntry_C_BindToOptionsListEvents_Params
	{
	public:
		class UOptionsList*                                        OptionsList;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnOptionsListItemChanged
	 */
	struct UOptionsMenuEntry_C_OnOptionsListItemChanged_Params
	{
	public:
		class UObject*                                             ItemSelected;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.HandleOnDropdownOpened
	 */
	struct UOptionsMenuEntry_C_HandleOnDropdownOpened_Params
	{
	public:
		class UOptionsButton_Dropdown_C*                           Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.HandleOnDropdownClosed
	 */
	struct UOptionsMenuEntry_C_HandleOnDropdownClosed_Params
	{
	public:
		class UOptionsButton_Dropdown_C*                           Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnKeybindChange
	 */
	struct UOptionsMenuEntry_C_OnKeybindChange_Params
	{
	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.ExecuteUbergraph_OptionsMenuEntry
	 */
	struct UOptionsMenuEntry_C_ExecuteUbergraph_OptionsMenuEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnDropdownClosed__DelegateSignature
	 */
	struct UOptionsMenuEntry_C_OnDropdownClosed__DelegateSignature_Params
	{
	public:
		class UOptionsButton_Dropdown_C*                           Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnDropdownOpened__DelegateSignature
	 */
	struct UOptionsMenuEntry_C_OnDropdownOpened__DelegateSignature_Params
	{
	public:
		class UOptionsButton_Dropdown_C*                           Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnSelected__DelegateSignature
	 */
	struct UOptionsMenuEntry_C_OnSelected__DelegateSignature_Params
	{
	public:
		class UOptionsScreenProperty*                              Option;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnUnhovered__DelegateSignature
	 */
	struct UOptionsMenuEntry_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UOptionsScreenProperty*                              Option;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsMenuEntry.OptionsMenuEntry_C.OnHovered__DelegateSignature
	 */
	struct UOptionsMenuEntry_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UOptionsScreenProperty*                              Option;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
