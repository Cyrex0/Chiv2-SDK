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
	 * Function OptionsButton_Toggle.OptionsButton_Toggle_C.OnKeyDown
	 */
	struct UOptionsButton_Toggle_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function OptionsButton_Toggle.OptionsButton_Toggle_C.SetEnabled
	 */
	struct UOptionsButton_Toggle_C_SetEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OptionsButton_Toggle.OptionsButton_Toggle_C.BndEvt__SetGamepad_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsButton_Toggle_C_BndEvt__SetGamepad_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsButton_Toggle.OptionsButton_Toggle_C.Handle Clicked
	 */
	struct UOptionsButton_Toggle_C_Handle_Clicked_Params
	{
	};

	/**
	 * Function OptionsButton_Toggle.OptionsButton_Toggle_C.SetText
	 */
	struct UOptionsButton_Toggle_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function OptionsButton_Toggle.OptionsButton_Toggle_C.ExecuteUbergraph_OptionsButton_Toggle
	 */
	struct UOptionsButton_Toggle_C_ExecuteUbergraph_OptionsButton_Toggle_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsButton_Toggle.OptionsButton_Toggle_C.OnClicked__DelegateSignature
	 */
	struct UOptionsButton_Toggle_C_OnClicked__DelegateSignature_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
