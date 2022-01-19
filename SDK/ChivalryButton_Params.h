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
	 * Function ChivalryButton.ChivalryButton_C.PreConstruct
	 */
	struct UChivalryButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChivalryButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.OnMouseEnter
	 */
	struct UChivalryButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.OnMouseLeave
	 */
	struct UChivalryButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.UpdateIconColor
	 */
	struct UChivalryButton_C_UpdateIconColor_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.SetButtonEnabled
	 */
	struct UChivalryButton_C_SetButtonEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.UpdateButtonText
	 */
	struct UChivalryButton_C_UpdateButtonText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.Construct
	 */
	struct UChivalryButton_C_Construct_Params
	{
	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChivalryButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChivalryButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.UpdateIconMaterial
	 */
	struct UChivalryButton_C_UpdateIconMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.ExecuteUbergraph_ChivalryButton
	 */
	struct UChivalryButton_C_ExecuteUbergraph_ChivalryButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.Unhovered__DelegateSignature
	 */
	struct UChivalryButton_C_Unhovered__DelegateSignature_Params
	{
	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.Hovered__DelegateSignature
	 */
	struct UChivalryButton_C_Hovered__DelegateSignature_Params
	{
	};

	/**
	 * Function ChivalryButton.ChivalryButton_C.Clicked__DelegateSignature
	 */
	struct UChivalryButton_C_Clicked__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
