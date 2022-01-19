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
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UTermsOfServiceScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnKeyDown");
		
		UTermsOfServiceScreen_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTermsOfServiceScreen_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UTermsOfServiceScreen_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTermsOfServiceScreen_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UTermsOfServiceScreen_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnOpenedScreen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTermsOfServiceScreen_C::OnOpenedScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnOpenedScreen");
		
		UTermsOfServiceScreen_C_OnOpenedScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.CloseScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTermsOfServiceScreen_C::CloseScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.CloseScreen");
		
		UTermsOfServiceScreen_C_CloseScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTermsOfServiceScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UTermsOfServiceScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTermsOfServiceScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.Construct");
		
		UTermsOfServiceScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.ExecuteUbergraph_TermsOfServiceScreen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTermsOfServiceScreen_C::ExecuteUbergraph_TermsOfServiceScreen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.ExecuteUbergraph_TermsOfServiceScreen");
		
		UTermsOfServiceScreen_C_ExecuteUbergraph_TermsOfServiceScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnTOSDeclined__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UTermsOfServiceScreen_C::OnTOSDeclined__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnTOSDeclined__DelegateSignature");
		
		UTermsOfServiceScreen_C_OnTOSDeclined__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnTOSAccepted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UTermsOfServiceScreen_C::OnTOSAccepted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TermsOfServiceScreen.TermsOfServiceScreen_C.OnTOSAccepted__DelegateSignature");
		
		UTermsOfServiceScreen_C_OnTOSAccepted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTermsOfServiceScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTermsOfServiceScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TermsOfServiceScreen.TermsOfServiceScreen_C");
		return ptr;
	}

}


