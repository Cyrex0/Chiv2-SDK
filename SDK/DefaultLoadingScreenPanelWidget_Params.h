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
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.StopFadeAnimations
	 */
	struct UDefaultLoadingScreenPanelWidget_C_StopFadeAnimations_Params
	{
	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetBackGroundImageColorAndOpacity
	 */
	struct UDefaultLoadingScreenPanelWidget_C_SetBackGroundImageColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ColorOpacity;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeOutMapTexture
	 */
	struct UDefaultLoadingScreenPanelWidget_C_FadeOutMapTexture_Params
	{
	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeInMapTexture
	 */
	struct UDefaultLoadingScreenPanelWidget_C_FadeInMapTexture_Params
	{
	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapTexture
	 */
	struct UDefaultLoadingScreenPanelWidget_C_SetMapTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapDescriptionText
	 */
	struct UDefaultLoadingScreenPanelWidget_C_SetMapDescriptionText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapNameText
	 */
	struct UDefaultLoadingScreenPanelWidget_C_SetMapNameText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.EnabledScreenInputBlocking
	 */
	struct UDefaultLoadingScreenPanelWidget_C_EnabledScreenInputBlocking_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetContinueButtonVisibility
	 */
	struct UDefaultLoadingScreenPanelWidget_C_SetContinueButtonVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDefaultLoadingScreenPanelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.Construct
	 */
	struct UDefaultLoadingScreenPanelWidget_C_Construct_Params
	{
	};

	/**
	 * Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.ExecuteUbergraph_DefaultLoadingScreenPanelWidget
	 */
	struct UDefaultLoadingScreenPanelWidget_C_ExecuteUbergraph_DefaultLoadingScreenPanelWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
