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
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnPreviewKeyDown
	 */
	struct UKeybindingsEntry_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnKeyDown
	 */
	struct UKeybindingsEntry_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.ClearBinding
	 */
	struct UKeybindingsEntry_C_ClearBinding_Params
	{
	public:
		bool                                                       IsKeyboardMouse;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsGamePad;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.GetKeysArrayForAction
	 */
	struct UKeybindingsEntry_C_GetKeysArrayForAction_Params
	{
	public:
		TArray<struct FKey>                                        Keys;                                                    // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.Get_KeyboardSelectedOverlay_Visibility_1
	 */
	struct UKeybindingsEntry_C_Get_KeyboardSelectedOverlay_Visibility_1_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.Get_GamepadSelectedOverlay_Visibility_1
	 */
	struct UKeybindingsEntry_C_Get_GamepadSelectedOverlay_Visibility_1_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.BindKeyForAction
	 */
	struct UKeybindingsEntry_C_BindKeyForAction_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.FillKeysForAction
	 */
	struct UKeybindingsEntry_C_FillKeysForAction_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.Construct
	 */
	struct UKeybindingsEntry_C_Construct_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.Tick
	 */
	struct UKeybindingsEntry_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__SetKeyboard_K2Node_ComponentBoundEvent_320_OnButtonClickedEvent__DelegateSignature
	 */
	struct UKeybindingsEntry_C_BndEvt__SetKeyboard_K2Node_ComponentBoundEvent_320_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.AbortAction
	 */
	struct UKeybindingsEntry_C_AbortAction_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__SetGamepad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UKeybindingsEntry_C_BndEvt__SetGamepad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__ResetToDefaultButton_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature
	 */
	struct UKeybindingsEntry_C_BndEvt__ResetToDefaultButton_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnKeybindsReset
	 */
	struct UKeybindingsEntry_C_OnKeybindsReset_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.StartAction
	 */
	struct UKeybindingsEntry_C_StartAction_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnGotKeybindingKey_Event_1
	 */
	struct UKeybindingsEntry_C_OnGotKeybindingKey_Event_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__Reset_Button_Gamepad_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UKeybindingsEntry_C_BndEvt__Reset_Button_Gamepad_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__Reset_Button_PC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UKeybindingsEntry_C_BndEvt__Reset_Button_PC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.On Key Bind Changed
	 */
	struct UKeybindingsEntry_C_On_Key_Bind_Changed_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.GamepadClicked
	 */
	struct UKeybindingsEntry_C_GamepadClicked_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.Open
	 */
	struct UKeybindingsEntry_C_Open_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.Close
	 */
	struct UKeybindingsEntry_C_Close_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.BindDialog
	 */
	struct UKeybindingsEntry_C_BindDialog_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnClose
	 */
	struct UKeybindingsEntry_C_OnClose_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.KeyboardClicked
	 */
	struct UKeybindingsEntry_C_KeyboardClicked_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnRemovedFromFocusPath
	 */
	struct UKeybindingsEntry_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnFocusLost
	 */
	struct UKeybindingsEntry_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.K2_OnFocusChanging
	 */
	struct UKeybindingsEntry_C_K2_OnFocusChanging_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnAddedToFocusPath
	 */
	struct UKeybindingsEntry_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.ClearGamepadKeybind
	 */
	struct UKeybindingsEntry_C_ClearGamepadKeybind_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnGamepadInputModeChanged_Event_1
	 */
	struct UKeybindingsEntry_C_OnGamepadInputModeChanged_Event_1_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.OnInitialized
	 */
	struct UKeybindingsEntry_C_OnInitialized_Params
	{
	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.ExecuteUbergraph_KeybindingsEntry
	 */
	struct UKeybindingsEntry_C_ExecuteUbergraph_KeybindingsEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeybindingsEntry.KeybindingsEntry_C.KeyBindingUpdated__DelegateSignature
	 */
	struct UKeybindingsEntry_C_KeyBindingUpdated__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
