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
	 * Function KeymapWidget.KeymapWidget_C.GetGamepadOpenKeymapButton
	 */
	struct UKeymapWidget_C_GetGamepadOpenKeymapButton_Params
	{
	public:
		struct FKey                                                NewParam;                                                // 0x0000(0x0018)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.OnKeyUp
	 */
	struct UKeymapWidget_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.OnKeyDown
	 */
	struct UKeymapWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.ChangeKeymap
	 */
	struct UKeymapWidget_C_ChangeKeymap_Params
	{
	public:
		eActiveKeymap_EeActiveKeymap                               _NewKeyMap;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.OnLoaded_71FF425349550646758E7CAA0A5DF91F
	 */
	struct UKeymapWidget_C_OnLoaded_71FF425349550646758E7CAA0A5DF91F_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.Construct
	 */
	struct UKeymapWidget_C_Construct_Params
	{
	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.Animate Deanimate
	 */
	struct UKeymapWidget_C_Animate_Deanimate_Params
	{
	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.Async Load Key Map Texture
	 */
	struct UKeymapWidget_C_Async_Load_Key_Map_Texture_Params
	{
	public:
		struct FSoftObjectPath                                     KeyMapTexturePath;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.On Gamepad Input Mode Changed
	 */
	struct UKeymapWidget_C_On_Gamepad_Input_Mode_Changed_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.Open
	 */
	struct UKeymapWidget_C_Open_Params
	{
	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.Close
	 */
	struct UKeymapWidget_C_Close_Params
	{
	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.Resume
	 */
	struct UKeymapWidget_C_Resume_Params
	{
	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.GoToInGameMenu
	 */
	struct UKeymapWidget_C_GoToInGameMenu_Params
	{
	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.PreConstruct
	 */
	struct UKeymapWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.BndEvt__ResumeButton_90_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UKeymapWidget_C_BndEvt__ResumeButton_90_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UKeymapWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function KeymapWidget.KeymapWidget_C.ExecuteUbergraph_KeymapWidget
	 */
	struct UKeymapWidget_C_ExecuteUbergraph_KeymapWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
