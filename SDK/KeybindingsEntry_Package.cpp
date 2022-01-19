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
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UKeybindingsEntry_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnPreviewKeyDown");
		
		UKeybindingsEntry_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UKeybindingsEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnKeyDown");
		
		UKeybindingsEntry_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.ClearBinding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsKeyboardMouse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsGamePad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeybindingsEntry_C::ClearBinding(bool IsKeyboardMouse, bool IsGamePad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.ClearBinding");
		
		UKeybindingsEntry_C_ClearBinding_Params params {};
		params.IsKeyboardMouse = IsKeyboardMouse;
		params.IsGamePad = IsGamePad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.GetKeysArrayForAction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FKey>                                Keys                                                       (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::GetKeysArrayForAction(TArray<struct FKey>* Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.GetKeysArrayForAction");
		
		UKeybindingsEntry_C_GetKeysArrayForAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keys != nullptr)
			*Keys = params.Keys;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.Get_KeyboardSelectedOverlay_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UKeybindingsEntry_C::Get_KeyboardSelectedOverlay_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.Get_KeyboardSelectedOverlay_Visibility_1");
		
		UKeybindingsEntry_C_Get_KeyboardSelectedOverlay_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.Get_GamepadSelectedOverlay_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UKeybindingsEntry_C::Get_GamepadSelectedOverlay_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.Get_GamepadSelectedOverlay_Visibility_1");
		
		UKeybindingsEntry_C_Get_GamepadSelectedOverlay_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.BindKeyForAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::BindKeyForAction(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.BindKeyForAction");
		
		UKeybindingsEntry_C_BindKeyForAction_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.FillKeysForAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::FillKeysForAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.FillKeysForAction");
		
		UKeybindingsEntry_C_FillKeysForAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.Construct");
		
		UKeybindingsEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.Tick");
		
		UKeybindingsEntry_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__SetKeyboard_K2Node_ComponentBoundEvent_320_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UKeybindingsEntry_C::BndEvt__SetKeyboard_K2Node_ComponentBoundEvent_320_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__SetKeyboard_K2Node_ComponentBoundEvent_320_OnButtonClickedEvent__DelegateSignature");
		
		UKeybindingsEntry_C_BndEvt__SetKeyboard_K2Node_ComponentBoundEvent_320_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.AbortAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::AbortAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.AbortAction");
		
		UKeybindingsEntry_C_AbortAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__SetGamepad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UKeybindingsEntry_C::BndEvt__SetGamepad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__SetGamepad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UKeybindingsEntry_C_BndEvt__SetGamepad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__ResetToDefaultButton_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UKeybindingsEntry_C::BndEvt__ResetToDefaultButton_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__ResetToDefaultButton_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature");
		
		UKeybindingsEntry_C_BndEvt__ResetToDefaultButton_K2Node_ComponentBoundEvent_133_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnKeybindsReset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::OnKeybindsReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnKeybindsReset");
		
		UKeybindingsEntry_C_OnKeybindsReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.StartAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::StartAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.StartAction");
		
		UKeybindingsEntry_C_StartAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnGotKeybindingKey_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::OnGotKeybindingKey_Event_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnGotKeybindingKey_Event_1");
		
		UKeybindingsEntry_C_OnGotKeybindingKey_Event_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__Reset_Button_Gamepad_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::BndEvt__Reset_Button_Gamepad_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__Reset_Button_Gamepad_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UKeybindingsEntry_C_BndEvt__Reset_Button_Gamepad_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__Reset_Button_PC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::BndEvt__Reset_Button_PC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.BndEvt__Reset_Button_PC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UKeybindingsEntry_C_BndEvt__Reset_Button_PC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.On Key Bind Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::On_Key_Bind_Changed(const class FName& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.On Key Bind Changed");
		
		UKeybindingsEntry_C_On_Key_Bind_Changed_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.GamepadClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::GamepadClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.GamepadClicked");
		
		UKeybindingsEntry_C_GamepadClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.Open
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.Open");
		
		UKeybindingsEntry_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.Close
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.Close");
		
		UKeybindingsEntry_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.BindDialog
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::BindDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.BindDialog");
		
		UKeybindingsEntry_C_BindDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnClose
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnClose");
		
		UKeybindingsEntry_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.KeyboardClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::KeyboardClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.KeyboardClicked");
		
		UKeybindingsEntry_C_KeyboardClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UKeybindingsEntry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnRemovedFromFocusPath");
		
		UKeybindingsEntry_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UKeybindingsEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnFocusLost");
		
		UKeybindingsEntry_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.K2_OnFocusChanging
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::K2_OnFocusChanging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.K2_OnFocusChanging");
		
		UKeybindingsEntry_C_K2_OnFocusChanging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UKeybindingsEntry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnAddedToFocusPath");
		
		UKeybindingsEntry_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.ClearGamepadKeybind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::ClearGamepadKeybind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.ClearGamepadKeybind");
		
		UKeybindingsEntry_C_ClearGamepadKeybind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnGamepadInputModeChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::OnGamepadInputModeChanged_Event_1(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnGamepadInputModeChanged_Event_1");
		
		UKeybindingsEntry_C_OnGamepadInputModeChanged_Event_1_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.OnInitialized");
		
		UKeybindingsEntry_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.ExecuteUbergraph_KeybindingsEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeybindingsEntry_C::ExecuteUbergraph_KeybindingsEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.ExecuteUbergraph_KeybindingsEntry");
		
		UKeybindingsEntry_C_ExecuteUbergraph_KeybindingsEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KeybindingsEntry.KeybindingsEntry_C.KeyBindingUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UKeybindingsEntry_C::KeyBindingUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeybindingsEntry.KeybindingsEntry_C.KeyBindingUpdated__DelegateSignature");
		
		UKeybindingsEntry_C_KeyBindingUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKeybindingsEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeybindingsEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeybindingsEntry.KeybindingsEntry_C");
		return ptr;
	}

}


