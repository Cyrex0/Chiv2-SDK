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
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.StopFadeAnimations
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDefaultLoadingScreenPanelWidget_C::StopFadeAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.StopFadeAnimations");
		
		UDefaultLoadingScreenPanelWidget_C_StopFadeAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetBackGroundImageColorAndOpacity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                ColorOpacity                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultLoadingScreenPanelWidget_C::SetBackGroundImageColorAndOpacity(const struct FLinearColor& ColorOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetBackGroundImageColorAndOpacity");
		
		UDefaultLoadingScreenPanelWidget_C_SetBackGroundImageColorAndOpacity_Params params {};
		params.ColorOpacity = ColorOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeOutMapTexture
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDefaultLoadingScreenPanelWidget_C::FadeOutMapTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeOutMapTexture");
		
		UDefaultLoadingScreenPanelWidget_C_FadeOutMapTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeInMapTexture
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDefaultLoadingScreenPanelWidget_C::FadeInMapTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.FadeInMapTexture");
		
		UDefaultLoadingScreenPanelWidget_C_FadeInMapTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapTexture
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultLoadingScreenPanelWidget_C::SetMapTexture(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapTexture");
		
		UDefaultLoadingScreenPanelWidget_C_SetMapTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapDescriptionText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDefaultLoadingScreenPanelWidget_C::SetMapDescriptionText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapDescriptionText");
		
		UDefaultLoadingScreenPanelWidget_C_SetMapDescriptionText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapNameText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDefaultLoadingScreenPanelWidget_C::SetMapNameText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetMapNameText");
		
		UDefaultLoadingScreenPanelWidget_C_SetMapNameText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.EnabledScreenInputBlocking
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDefaultLoadingScreenPanelWidget_C::EnabledScreenInputBlocking(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.EnabledScreenInputBlocking");
		
		UDefaultLoadingScreenPanelWidget_C_EnabledScreenInputBlocking_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetContinueButtonVisibility
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDefaultLoadingScreenPanelWidget_C::SetContinueButtonVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.SetContinueButtonVisibility");
		
		UDefaultLoadingScreenPanelWidget_C_SetContinueButtonVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDefaultLoadingScreenPanelWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UDefaultLoadingScreenPanelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDefaultLoadingScreenPanelWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.Construct");
		
		UDefaultLoadingScreenPanelWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.ExecuteUbergraph_DefaultLoadingScreenPanelWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultLoadingScreenPanelWidget_C::ExecuteUbergraph_DefaultLoadingScreenPanelWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C.ExecuteUbergraph_DefaultLoadingScreenPanelWidget");
		
		UDefaultLoadingScreenPanelWidget_C_ExecuteUbergraph_DefaultLoadingScreenPanelWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDefaultLoadingScreenPanelWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultLoadingScreenPanelWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultLoadingScreenPanelWidget.DefaultLoadingScreenPanelWidget_C");
		return ptr;
	}

}


