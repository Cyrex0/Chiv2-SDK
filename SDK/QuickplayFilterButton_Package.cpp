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
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.SetColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilterButton_C::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.SetColor");
		
		UQuickplayFilterButton_C_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UQuickplayFilterButton_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnInitialized");
		
		UQuickplayFilterButton_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.Update Button
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickplayFilterButton_C::Update_Button()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.Update Button");
		
		UQuickplayFilterButton_C_Update_Button_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UQuickplayFilterButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnAddedToFocusPath");
		
		UQuickplayFilterButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UQuickplayFilterButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnRemovedFromFocusPath");
		
		UQuickplayFilterButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UQuickplayFilterButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnFocusLost");
		
		UQuickplayFilterButton_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnInputChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilterButton_C::OnInputChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnInputChanged");
		
		UQuickplayFilterButton_C_OnInputChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnSelectedChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickplayFilterButton_C::OnSelectedChanged(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnSelectedChanged");
		
		UQuickplayFilterButton_C_OnSelectedChanged_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.Set Name Text
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        In_Text                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UQuickplayFilterButton_C::Set_Name_Text(const class FText& In_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.Set Name Text");
		
		UQuickplayFilterButton_C_Set_Name_Text_Params params {};
		params.In_Text = In_Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UQuickplayFilterButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.Construct");
		
		UQuickplayFilterButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.UpdateSelectedState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickplayFilterButton_C::UpdateSelectedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.UpdateSelectedState");
		
		UQuickplayFilterButton_C_UpdateSelectedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnSelectedStateful
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickplayFilterButton_C::OnSelectedStateful()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnSelectedStateful");
		
		UQuickplayFilterButton_C_OnSelectedStateful_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.Deselected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickplayFilterButton_C::Deselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.Deselected");
		
		UQuickplayFilterButton_C_Deselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.ExecuteUbergraph_QuickplayFilterButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilterButton_C::ExecuteUbergraph_QuickplayFilterButton(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.ExecuteUbergraph_QuickplayFilterButton");
		
		UQuickplayFilterButton_C_ExecuteUbergraph_QuickplayFilterButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnFilterUnselected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UQuickplayFilterButton_C*                    QuickplayFilterButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilterButton_C::OnFilterUnselected__DelegateSignature(class UQuickplayFilterButton_C* QuickplayFilterButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnFilterUnselected__DelegateSignature");
		
		UQuickplayFilterButton_C_OnFilterUnselected__DelegateSignature_Params params {};
		params.QuickplayFilterButton = QuickplayFilterButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilterButton.QuickplayFilterButton_C.OnFilterSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UQuickplayFilterButton_C*                    QuickplayFilterButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilterButton_C::OnFilterSelected__DelegateSignature(class UQuickplayFilterButton_C* QuickplayFilterButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilterButton.QuickplayFilterButton_C.OnFilterSelected__DelegateSignature");
		
		UQuickplayFilterButton_C_OnFilterSelected__DelegateSignature_Params params {};
		params.QuickplayFilterButton = QuickplayFilterButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UQuickplayFilterButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickplayFilterButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickplayFilterButton.QuickplayFilterButton_C");
		return ptr;
	}

}


