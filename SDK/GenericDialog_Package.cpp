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
	 * 		Name   -> Function GenericDialog.GenericDialog_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UGenericDialog_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.OnPreviewKeyDown");
		
		UGenericDialog_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UGenericDialog_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.OnKeyDown");
		
		UGenericDialog_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.OnHoveredButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class URadiobutton_C*                              Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterial*                                   FontMaterial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericDialog_C::OnHoveredButton(class URadiobutton_C* Button, class UMaterial* FontMaterial, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.OnHoveredButton");
		
		UGenericDialog_C_OnHoveredButton_Params params {};
		params.Button = Button;
		params.FontMaterial = FontMaterial;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.InitButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class URadiobutton_C*                              Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FKey                                        ButtonCalloutKey                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  IconTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericDialog_C::InitButton(class URadiobutton_C* Button, const class FText& ButtonText, const struct FKey& ButtonCalloutKey, class UTexture2D* IconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.InitButton");
		
		UGenericDialog_C_InitButton_Params params {};
		params.Button = Button;
		params.ButtonText = ButtonText;
		params.ButtonCalloutKey = ButtonCalloutKey;
		params.IconTexture = IconTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.CheckForFrontendHUD
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFrontend                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGenericDialog_C::CheckForFrontendHUD(bool* IsFrontend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.CheckForFrontendHUD");
		
		UGenericDialog_C_CheckForFrontendHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFrontend != nullptr)
			*IsFrontend = params.IsFrontend;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericDialog_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature");
		
		UGenericDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericDialog_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature");
		
		UGenericDialog_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericDialog_C::BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature");
		
		UGenericDialog_C_BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGenericDialog_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");
		
		UGenericDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGenericDialog_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature");
		
		UGenericDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGenericDialog_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");
		
		UGenericDialog_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGenericDialog_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");
		
		UGenericDialog_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGenericDialog_C::BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");
		
		UGenericDialog_C_BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGenericDialog_C::BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature");
		
		UGenericDialog_C_BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGenericDialog_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.PreConstruct");
		
		UGenericDialog_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.OnEscapeRequested
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGenericDialog_C::OnEscapeRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.OnEscapeRequested");
		
		UGenericDialog_C_OnEscapeRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.Press Accept or Single Button
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGenericDialog_C::Press_Accept_or_Single_Button()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.Press Accept or Single Button");
		
		UGenericDialog_C_Press_Accept_or_Single_Button_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.Press Decline Button
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGenericDialog_C::Press_Decline_Button()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.Press Decline Button");
		
		UGenericDialog_C_Press_Decline_Button_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.ChangeText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Body                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGenericDialog_C::ChangeText(const class FText& Title, const class FText& Body)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.ChangeText");
		
		UGenericDialog_C_ChangeText_Params params {};
		params.Title = Title;
		params.Body = Body;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGenericDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.Construct");
		
		UGenericDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.OnOutroAnimationDone
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasScreenClosed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGenericDialog_C::OnOutroAnimationDone(bool bWasScreenClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.OnOutroAnimationDone");
		
		UGenericDialog_C_OnOutroAnimationDone_Params params {};
		params.bWasScreenClosed = bWasScreenClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.OnClosedScreen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGenericDialog_C::OnClosedScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.OnClosedScreen");
		
		UGenericDialog_C_OnClosedScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.OnOpenedScreen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGenericDialog_C::OnOpenedScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.OnOpenedScreen");
		
		UGenericDialog_C_OnOpenedScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.Tick");
		
		UGenericDialog_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.ExecuteUbergraph_GenericDialog
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericDialog_C::ExecuteUbergraph_GenericDialog(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.ExecuteUbergraph_GenericDialog");
		
		UGenericDialog_C_ExecuteUbergraph_GenericDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericDialog.GenericDialog_C.OnClose__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UGenericDialog_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericDialog.GenericDialog_C.OnClose__DelegateSignature");
		
		UGenericDialog_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGenericDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericDialog.GenericDialog_C");
		return ptr;
	}

}


