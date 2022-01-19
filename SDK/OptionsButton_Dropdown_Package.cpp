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
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnAnalogValueChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOptionsButton_Dropdown_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnAnalogValueChanged");
		
		UOptionsButton_Dropdown_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOptionsButton_Dropdown_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnKeyDown");
		
		UOptionsButton_Dropdown_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnGetMenuContent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UOptionsButton_Dropdown_C::OnGetMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnGetMenuContent_1");
		
		UOptionsButton_Dropdown_C_OnGetMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UOptionsButton_Dropdown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Construct");
		
		UOptionsButton_Dropdown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsButton_Dropdown_C::BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature");
		
		UOptionsButton_Dropdown_C_BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.CloseDropDownList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsButton_Dropdown_C::CloseDropDownList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.CloseDropDownList");
		
		UOptionsButton_Dropdown_C_CloseDropDownList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OpenDropDownList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsButton_Dropdown_C::OpenDropDownList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OpenDropDownList");
		
		UOptionsButton_Dropdown_C_OpenDropDownList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsButton_Dropdown_C::BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature");
		
		UOptionsButton_Dropdown_C_BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Clear Options
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsButton_Dropdown_C::Clear_Options()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Clear Options");
		
		UOptionsButton_Dropdown_C_Clear_Options_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.UpdateOptions
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Options                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UOptionsButton_Dropdown_C::UpdateOptions(TArray<class FText> Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.UpdateOptions");
		
		UOptionsButton_Dropdown_C_UpdateOptions_Params params {};
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.SetSelectedOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                TextIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsButton_Dropdown_C::SetSelectedOption(int TextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.SetSelectedOption");
		
		UOptionsButton_Dropdown_C_SetSelectedOption_Params params {};
		params.TextIndex = TextIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnSelectionChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsButton_Dropdown_C::OnSelectionChanged_Event_1(const class FText& Text, int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnSelectionChanged_Event_1");
		
		UOptionsButton_Dropdown_C_OnSelectionChanged_Event_1_Params params {};
		params.Text = Text;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.GamepadClick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsButton_Dropdown_C::GamepadClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.GamepadClick");
		
		UOptionsButton_Dropdown_C_GamepadClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.On Preview Mouse Button Down
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOptionsButton_Dropdown_C::On_Preview_Mouse_Button_Down(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.On Preview Mouse Button Down");
		
		UOptionsButton_Dropdown_C_On_Preview_Mouse_Button_Down_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UOptionsButton_Dropdown_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnInitialized");
		
		UOptionsButton_Dropdown_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.ExecuteUbergraph_OptionsButton_Dropdown
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsButton_Dropdown_C::ExecuteUbergraph_OptionsButton_Dropdown(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.ExecuteUbergraph_OptionsButton_Dropdown");
		
		UOptionsButton_Dropdown_C_ExecuteUbergraph_OptionsButton_Dropdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOptionsButton_Dropdown_C*                   Dropdown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsButton_Dropdown_C::OnDropdownClosed__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownClosed__DelegateSignature");
		
		UOptionsButton_Dropdown_C_OnDropdownClosed__DelegateSignature_Params params {};
		params.Dropdown = Dropdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOptionsButton_Dropdown_C*                   Dropdown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsButton_Dropdown_C::OnDropdownOpened__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.OnDropdownOpened__DelegateSignature");
		
		UOptionsButton_Dropdown_C_OnDropdownOpened__DelegateSignature_Params params {};
		params.Dropdown = Dropdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Selected option changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Option_text                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionsButton_Dropdown_C::Selected_option_changed__DelegateSignature(int Index, const class FText& Option_text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsButton_Dropdown.OptionsButton_Dropdown_C.Selected option changed__DelegateSignature");
		
		UOptionsButton_Dropdown_C_Selected_option_changed__DelegateSignature_Params params {};
		params.Index = Index;
		params.Option_text = Option_text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOptionsButton_Dropdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsButton_Dropdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsButton_Dropdown.OptionsButton_Dropdown_C");
		return ptr;
	}

}


