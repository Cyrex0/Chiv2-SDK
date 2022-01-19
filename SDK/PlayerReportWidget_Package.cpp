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
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.ChangedSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class URadiobutton_C*                              SelectedButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerReportWidget_C::ChangedSelected(class URadiobutton_C* SelectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.ChangedSelected");
		
		UPlayerReportWidget_C_ChangedSelected_Params params {};
		params.SelectedButton = SelectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UPlayerReportWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.OnMouseButtonDown");
		
		UPlayerReportWidget_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.GetReportedController
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Reported                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerReportWidget_C::GetReportedController(class AController** Reported)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.GetReportedController");
		
		UPlayerReportWidget_C_GetReportedController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reported != nullptr)
			*Reported = params.Reported;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.EnableReportWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerReportWidget_C::EnableReportWidget(class ATBLPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.EnableReportWidget");
		
		UPlayerReportWidget_C_EnableReportWidget_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.DisableReportWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerReportWidget_C::DisableReportWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.DisableReportWidget");
		
		UPlayerReportWidget_C_DisableReportWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayerReportWidget_C::BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__GriefingButton_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayerReportWidget_C::BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__CheatingButton_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayerReportWidget_C::BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayerReportWidget_C::BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_7_OnSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerReportWidget_C::BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerReportWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerReportWidget_C::BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayerReportWidget_C::BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__HarrasmentButton_K2Node_ComponentBoundEvent_1_OnDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayerReportWidget_C::BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__NegativeBehaviourButton_K2Node_ComponentBoundEvent_2_OnDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayerReportWidget_C::BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayerReportWidget_C::BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature");
		
		UPlayerReportWidget_C_BndEvt__GriefingButton_K2Node_ComponentBoundEvent_10_OnDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.ExecuteUbergraph_PlayerReportWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerReportWidget_C::ExecuteUbergraph_PlayerReportWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.ExecuteUbergraph_PlayerReportWidget");
		
		UPlayerReportWidget_C_ExecuteUbergraph_PlayerReportWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.OnReportClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerReportWidget_C::OnReportClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.OnReportClosed__DelegateSignature");
		
		UPlayerReportWidget_C_OnReportClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerReportWidget.PlayerReportWidget_C.OnReportChosen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EPlayerReportCategory                          ReportType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerReportWidget_C::OnReportChosen__DelegateSignature(TBL_EPlayerReportCategory ReportType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerReportWidget.PlayerReportWidget_C.OnReportChosen__DelegateSignature");
		
		UPlayerReportWidget_C_OnReportChosen__DelegateSignature_Params params {};
		params.ReportType = ReportType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerReportWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerReportWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerReportWidget.PlayerReportWidget_C");
		return ptr;
	}

}


