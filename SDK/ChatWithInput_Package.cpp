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
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.GetIsInputMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UChatWithInput_C::GetIsInputMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.GetIsInputMode");
		
		UChatWithInput_C_GetIsInputMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.GetFactionColour
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      FactionColour                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWithInput_C::GetFactionColour(struct FColor* FactionColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.GetFactionColour");
		
		UChatWithInput_C_GetFactionColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactionColour != nullptr)
			*FactionColour = params.FactionColour;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.OnGenerateRow_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FChatLine                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	class UWidget* UChatWithInput_C::OnGenerateRow_1(const struct FChatLine& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.OnGenerateRow_1");
		
		UChatWithInput_C_OnGenerateRow_1_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.Switch to next input type
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UChatWithInput_C::Switch_to_next_input_type()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.Switch to next input type");
		
		UChatWithInput_C_Switch_to_next_input_type_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.IsKeyHandled
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyEvent                                   Key_Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 Handled                                                    (Parm, OutParm)
	 */
	void UChatWithInput_C::IsKeyHandled(const struct FKeyEvent& Key_Event, struct FEventReply* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.IsKeyHandled");
		
		UChatWithInput_C_IsKeyHandled_Params params {};
		params.Key_Event = Key_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.OnKeyChar
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FCharacterEvent                             InCharacterEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UChatWithInput_C::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.OnKeyChar");
		
		UChatWithInput_C_OnKeyChar_Params params {};
		params.MyGeometry = MyGeometry;
		params.InCharacterEvent = InCharacterEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UChatWithInput_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.OnKeyDown");
		
		UChatWithInput_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UChatWithInput_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.OnKeyUp");
		
		UChatWithInput_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UChatWithInput_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.Construct");
		
		UChatWithInput_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.Switch To Type
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EChatType                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWithInput_C::Switch_To_Type(TBL_EChatType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.Switch To Type");
		
		UChatWithInput_C_Switch_To_Type_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UChatWithInput_C::BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature");
		
		UChatWithInput_C_BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.Enter Input Mode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EChatType                                      In_ChatType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWithInput_C::Enter_Input_Mode(TBL_EChatType In_ChatType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.Enter Input Mode");
		
		UChatWithInput_C_Enter_Input_Mode_Params params {};
		params.In_ChatType = In_ChatType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.Enter Last Channel Input Mode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChatWithInput_C::Enter_Last_Channel_Input_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.Enter Last Channel Input Mode");
		
		UChatWithInput_C_Enter_Last_Channel_Input_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		SlateCore_ETextCommit                              CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWithInput_C::BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, SlateCore_ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UChatWithInput_C_BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UChatWithInput_C::BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UChatWithInput_C_BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		OverviewScreenState_EOverviewScreenState           NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		OverviewScreenState_EOverviewScreenState           PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWithInput_C::BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature(OverviewScreenState_EOverviewScreenState NewState, OverviewScreenState_EOverviewScreenState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature");
		
		UChatWithInput_C_BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		TBL_EChatType                                      InChatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWithInput_C::BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature(TBL_EChatType InChatType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature");
		
		UChatWithInput_C_BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature_Params params {};
		params.InChatType = InChatType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.Resized
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enlarged                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatWithInput_C::Resized(bool Enlarged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.Resized");
		
		UChatWithInput_C_Resized_Params params {};
		params.Enlarged = Enlarged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.ExecuteUbergraph_ChatWithInput
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWithInput_C::ExecuteUbergraph_ChatWithInput(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.ExecuteUbergraph_ChatWithInput");
		
		UChatWithInput_C_ExecuteUbergraph_ChatWithInput_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.On Left Input Mode__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UChatWithInput_C::On_Left_Input_Mode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.On Left Input Mode__DelegateSignature");
		
		UChatWithInput_C_On_Left_Input_Mode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ChatWithInput.ChatWithInput_C.On Entered Input Mode__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UChatWithInput_C::On_Entered_Input_Mode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWithInput.ChatWithInput_C.On Entered Input Mode__DelegateSignature");
		
		UChatWithInput_C_On_Entered_Input_Mode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UChatWithInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatWithInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatWithInput.ChatWithInput_C");
		return ptr;
	}

}


