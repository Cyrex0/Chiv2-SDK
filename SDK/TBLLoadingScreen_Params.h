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
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.StopFadeAnimations
	 */
	struct ULoadingScreenPanelWidget_StopFadeAnimations_Params
	{
	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.SetStageEntries
	 */
	struct ULoadingScreenPanelWidget_SetStageEntries_Params
	{
	public:
		TArray<struct FMapSpecificStageEntries>                    TextEntries;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapTexture
	 */
	struct ULoadingScreenPanelWidget_SetMapTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapNameText
	 */
	struct ULoadingScreenPanelWidget_SetMapNameText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapDescriptionText
	 */
	struct ULoadingScreenPanelWidget_SetMapDescriptionText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.SetContinueButtonVisibility
	 */
	struct ULoadingScreenPanelWidget_SetContinueButtonVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.SetBackGroundImageColorAndOpacity
	 */
	struct ULoadingScreenPanelWidget_SetBackGroundImageColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ColorOpacity;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeOutMapTexture
	 */
	struct ULoadingScreenPanelWidget_FadeOutMapTexture_Params
	{
	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeInMapTexture
	 */
	struct ULoadingScreenPanelWidget_FadeInMapTexture_Params
	{
	};

	/**
	 * Function TBLLoadingScreen.LoadingScreenPanelWidget.EnabledScreenInputBlocking
	 */
	struct ULoadingScreenPanelWidget_EnabledScreenInputBlocking_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TBLLoadingScreen.MapSpecificLoadingScreenConfig.GetDefaultLoadingScreenPanelWidgetClass
	 */
	struct UMapSpecificLoadingScreenConfig_GetDefaultLoadingScreenPanelWidgetClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
