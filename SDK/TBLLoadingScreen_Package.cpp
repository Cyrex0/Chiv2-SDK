/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.StopFadeAnimations
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULoadingScreenPanelWidget::StopFadeAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.StopFadeAnimations");
		
		ULoadingScreenPanelWidget_StopFadeAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.SetStageEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMapSpecificStageEntries>            TextEntries                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenPanelWidget::SetStageEntries(TArray<struct FMapSpecificStageEntries> TextEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetStageEntries");
		
		ULoadingScreenPanelWidget_SetStageEntries_Params params {};
		params.TextEntries = TextEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapTexture
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenPanelWidget::SetMapTexture(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapTexture");
		
		ULoadingScreenPanelWidget_SetMapTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapNameText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenPanelWidget::SetMapNameText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapNameText");
		
		ULoadingScreenPanelWidget_SetMapNameText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapDescriptionText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenPanelWidget::SetMapDescriptionText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetMapDescriptionText");
		
		ULoadingScreenPanelWidget_SetMapDescriptionText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.SetContinueButtonVisibility
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenPanelWidget::SetContinueButtonVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetContinueButtonVisibility");
		
		ULoadingScreenPanelWidget_SetContinueButtonVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.SetBackGroundImageColorAndOpacity
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                ColorOpacity                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenPanelWidget::SetBackGroundImageColorAndOpacity(const struct FLinearColor& ColorOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.SetBackGroundImageColorAndOpacity");
		
		ULoadingScreenPanelWidget_SetBackGroundImageColorAndOpacity_Params params {};
		params.ColorOpacity = ColorOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeOutMapTexture
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULoadingScreenPanelWidget::FadeOutMapTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeOutMapTexture");
		
		ULoadingScreenPanelWidget_FadeOutMapTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeInMapTexture
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULoadingScreenPanelWidget::FadeInMapTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.FadeInMapTexture");
		
		ULoadingScreenPanelWidget_FadeInMapTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLLoadingScreen.LoadingScreenPanelWidget.EnabledScreenInputBlocking
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenPanelWidget::EnabledScreenInputBlocking(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.LoadingScreenPanelWidget.EnabledScreenInputBlocking");
		
		ULoadingScreenPanelWidget_EnabledScreenInputBlocking_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadingScreenPanelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenPanelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TBLLoadingScreen.LoadingScreenPanelWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x03541450
	 * 		Name   -> Function TBLLoadingScreen.MapSpecificLoadingScreenConfig.GetDefaultLoadingScreenPanelWidgetClass
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	class UClass* UMapSpecificLoadingScreenConfig::GetDefaultLoadingScreenPanelWidgetClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLLoadingScreen.MapSpecificLoadingScreenConfig.GetDefaultLoadingScreenPanelWidgetClass");
		
		UMapSpecificLoadingScreenConfig_GetDefaultLoadingScreenPanelWidgetClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMapSpecificLoadingScreenConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapSpecificLoadingScreenConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TBLLoadingScreen.MapSpecificLoadingScreenConfig");
		return ptr;
	}

}


