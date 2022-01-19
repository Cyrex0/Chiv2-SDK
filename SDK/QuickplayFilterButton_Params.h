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
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.SetColor
	 */
	struct UQuickplayFilterButton_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnInitialized
	 */
	struct UQuickplayFilterButton_C_OnInitialized_Params
	{
	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.Update Button
	 */
	struct UQuickplayFilterButton_C_Update_Button_Params
	{
	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnAddedToFocusPath
	 */
	struct UQuickplayFilterButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnRemovedFromFocusPath
	 */
	struct UQuickplayFilterButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnFocusLost
	 */
	struct UQuickplayFilterButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnInputChanged
	 */
	struct UQuickplayFilterButton_C_OnInputChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnSelectedChanged
	 */
	struct UQuickplayFilterButton_C_OnSelectedChanged_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.Set Name Text
	 */
	struct UQuickplayFilterButton_C_Set_Name_Text_Params
	{
	public:
		class FText                                                In_Text;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.Construct
	 */
	struct UQuickplayFilterButton_C_Construct_Params
	{
	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.UpdateSelectedState
	 */
	struct UQuickplayFilterButton_C_UpdateSelectedState_Params
	{
	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnSelectedStateful
	 */
	struct UQuickplayFilterButton_C_OnSelectedStateful_Params
	{
	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.Deselected
	 */
	struct UQuickplayFilterButton_C_Deselected_Params
	{
	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.ExecuteUbergraph_QuickplayFilterButton
	 */
	struct UQuickplayFilterButton_C_ExecuteUbergraph_QuickplayFilterButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnFilterUnselected__DelegateSignature
	 */
	struct UQuickplayFilterButton_C_OnFilterUnselected__DelegateSignature_Params
	{
	public:
		class UQuickplayFilterButton_C*                            QuickplayFilterButton;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function QuickplayFilterButton.QuickplayFilterButton_C.OnFilterSelected__DelegateSignature
	 */
	struct UQuickplayFilterButton_C_OnFilterSelected__DelegateSignature_Params
	{
	public:
		class UQuickplayFilterButton_C*                            QuickplayFilterButton;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
