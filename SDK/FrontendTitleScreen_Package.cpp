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
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UFrontendTitleScreen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.OnPreviewKeyDown");
		
		UFrontendTitleScreen_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.GetText_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UFrontendTitleScreen_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.GetText_1");
		
		UFrontendTitleScreen_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UFrontendTitleScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.OnKeyDown");
		
		UFrontendTitleScreen_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__OfflineButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::BndEvt__OfflineButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__OfflineButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__OfflineButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFrontendTitleScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.Construct");
		
		UFrontendTitleScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceWidget_K2Node_ComponentBoundEvent_8_UserScrolledToEnd__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFrontendTitleScreen_C::BndEvt__TermsOfServiceWidget_K2Node_ComponentBoundEvent_8_UserScrolledToEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceWidget_K2Node_ComponentBoundEvent_8_UserScrolledToEnd__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__TermsOfServiceWidget_K2Node_ComponentBoundEvent_8_UserScrolledToEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.Set Screen State
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_ETitleScreenMode                               New_State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::Set_Screen_State(TBL_ETitleScreenMode New_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.Set Screen State");
		
		UFrontendTitleScreen_C_Set_Screen_State_Params params {};
		params.New_State = New_State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontendTitleScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.PreConstruct");
		
		UFrontendTitleScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.K2_OnStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		TBL_ETitleScreenMode                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::K2_OnStateChanged(TBL_ETitleScreenMode NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.K2_OnStateChanged");
		
		UFrontendTitleScreen_C_K2_OnStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__DeclineButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::BndEvt__DeclineButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__DeclineButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__DeclineButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::BndEvt__AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__AcceptButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_5_OnTOSAccepted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFrontendTitleScreen_C::BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_5_OnTOSAccepted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_5_OnTOSAccepted__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_5_OnTOSAccepted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_7_OnTOSDeclined__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFrontendTitleScreen_C::BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_7_OnTOSDeclined__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_7_OnTOSDeclined__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__TermsOfServiceScreen_K2Node_ComponentBoundEvent_7_OnTOSDeclined__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__ReturnToMainMenu_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::BndEvt__ReturnToMainMenu_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.BndEvt__ReturnToMainMenu_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UFrontendTitleScreen_C_BndEvt__ReturnToMainMenu_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.OnPurchased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFrontendTitleScreen_C::OnPurchased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.OnPurchased");
		
		UFrontendTitleScreen_C_OnPurchased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTitleScreen.FrontendTitleScreen_C.ExecuteUbergraph_FrontendTitleScreen
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrontendTitleScreen_C::ExecuteUbergraph_FrontendTitleScreen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTitleScreen.FrontendTitleScreen_C.ExecuteUbergraph_FrontendTitleScreen");
		
		UFrontendTitleScreen_C_ExecuteUbergraph_FrontendTitleScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFrontendTitleScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrontendTitleScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontendTitleScreen.FrontendTitleScreen_C");
		return ptr;
	}

}


