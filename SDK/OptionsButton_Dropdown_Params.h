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
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnAnalogValueChanged
	 */
	struct UOptionsButton_Dropdown_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnKeyDown
	 */
	struct UOptionsButton_Dropdown_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnGetMenuContent_1
	 */
	struct UOptionsButton_Dropdown_C_OnGetMenuContent_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Construct
	 */
	struct UOptionsButton_Dropdown_C_Construct_Params
	{
	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature
	 */
	struct UOptionsButton_Dropdown_C_BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.CloseDropDownList
	 */
	struct UOptionsButton_Dropdown_C_CloseDropDownList_Params
	{
	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OpenDropDownList
	 */
	struct UOptionsButton_Dropdown_C_OpenDropDownList_Params
	{
	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UOptionsButton_Dropdown_C_BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Clear Options
	 */
	struct UOptionsButton_Dropdown_C_Clear_Options_Params
	{
	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.UpdateOptions
	 */
	struct UOptionsButton_Dropdown_C_UpdateOptions_Params
	{
	public:
		TArray<class FText>                                        Options;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.SetSelectedOption
	 */
	struct UOptionsButton_Dropdown_C_SetSelectedOption_Params
	{
	public:
		int                                                        TextIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnSelectionChanged_Event_1
	 */
	struct UOptionsButton_Dropdown_C_OnSelectionChanged_Event_1_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.GamepadClick
	 */
	struct UOptionsButton_Dropdown_C_GamepadClick_Params
	{
	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.On Preview Mouse Button Down
	 */
	struct UOptionsButton_Dropdown_C_On_Preview_Mouse_Button_Down_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnInitialized
	 */
	struct UOptionsButton_Dropdown_C_OnInitialized_Params
	{
	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.ExecuteUbergraph_OptionsButton_Dropdown
	 */
	struct UOptionsButton_Dropdown_C_ExecuteUbergraph_OptionsButton_Dropdown_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownClosed__DelegateSignature
	 */
	struct UOptionsButton_Dropdown_C_OnDropdownClosed__DelegateSignature_Params
	{
	public:
		class UOptionsButton_Dropdown_C*                           Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownOpened__DelegateSignature
	 */
	struct UOptionsButton_Dropdown_C_OnDropdownOpened__DelegateSignature_Params
	{
	public:
		class UOptionsButton_Dropdown_C*                           Dropdown;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Selected option changed__DelegateSignature
	 */
	struct UOptionsButton_Dropdown_C_Selected_option_changed__DelegateSignature_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Option_text;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
