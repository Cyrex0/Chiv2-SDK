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
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnAnalogValueChanged
	 */
	struct UDropDownComboBoxWidget_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnKeyDown
	 */
	struct UDropDownComboBoxWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnGenerateRow_2
	 */
	struct UDropDownComboBoxWidget_C_OnGenerateRow_2_Params
	{
	public:
		class UDropDownListItem*                                   DropDownItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Construct
	 */
	struct UDropDownComboBoxWidget_C_Construct_Params
	{
	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.AddText
	 */
	struct UDropDownComboBoxWidget_C_AddText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.RemoveAllItems
	 */
	struct UDropDownComboBoxWidget_C_RemoveAllItems_Params
	{
	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnDropDownClicked
	 */
	struct UDropDownComboBoxWidget_C_OnDropDownClicked_Params
	{
	public:
		class UOptionsDropDownEntry_C*                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseButtonDownEvent_Event_1
	 */
	struct UDropDownComboBoxWidget_C_OnMouseButtonDownEvent_Event_1_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.SetBackgroundAndBorderTexture
	 */
	struct UDropDownComboBoxWidget_C_SetBackgroundAndBorderTexture_Params
	{
	public:
		class UTexture2D*                                          BackgroundTexture;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          BorderTexture;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseLeave
	 */
	struct UDropDownComboBoxWidget_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnMouseEnter
	 */
	struct UDropDownComboBoxWidget_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Open
	 */
	struct UDropDownComboBoxWidget_C_Open_Params
	{
	public:
		class FText                                                CurrentText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.Re-Calculate Size
	 */
	struct UDropDownComboBoxWidget_C_Re_Calculate_Size_Params
	{
	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.ExecuteUbergraph_DropDownComboBoxWidget
	 */
	struct UDropDownComboBoxWidget_C_ExecuteUbergraph_DropDownComboBoxWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropDownComboBoxWidget.DropDownComboBoxWidget_C.OnSelectionChanged__DelegateSignature
	 */
	struct UDropDownComboBoxWidget_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
