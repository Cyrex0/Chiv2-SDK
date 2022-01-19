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
	 * 		Name   -> Function CrosshairConditonText.CrosshairConditonText_C.SetupUniversalKeyBindWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FString                                      InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UUniversalKeyBindingWidget_C*                InUniversalKeyBindWidget                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshairConditonText_C::SetupUniversalKeyBindWidget(const class FString& InActionName, class UUniversalKeyBindingWidget_C* InUniversalKeyBindWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrosshairConditonText.CrosshairConditonText_C.SetupUniversalKeyBindWidget");
		
		UCrosshairConditonText_C_SetupUniversalKeyBindWidget_Params params {};
		params.InActionName = InActionName;
		params.InUniversalKeyBindWidget = InUniversalKeyBindWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CrosshairConditonText.CrosshairConditonText_C.IsUsingGamepad
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bIsUsingGamepad                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshairConditonText_C::IsUsingGamepad(bool* bIsUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrosshairConditonText.CrosshairConditonText_C.IsUsingGamepad");
		
		UCrosshairConditonText_C_IsUsingGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsUsingGamepad != nullptr)
			*bIsUsingGamepad = params.bIsUsingGamepad;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CrosshairConditonText.CrosshairConditonText_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCrosshairConditonText_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrosshairConditonText.CrosshairConditonText_C.Construct");
		
		UCrosshairConditonText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CrosshairConditonText.CrosshairConditonText_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCrosshairConditonText_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrosshairConditonText.CrosshairConditonText_C.Update");
		
		UCrosshairConditonText_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CrosshairConditonText.CrosshairConditonText_C.On Gamepad Input Mode Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshairConditonText_C::On_Gamepad_Input_Mode_Changed(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrosshairConditonText.CrosshairConditonText_C.On Gamepad Input Mode Changed");
		
		UCrosshairConditonText_C_On_Gamepad_Input_Mode_Changed_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CrosshairConditonText.CrosshairConditonText_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCrosshairConditonText_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrosshairConditonText.CrosshairConditonText_C.Destruct");
		
		UCrosshairConditonText_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CrosshairConditonText.CrosshairConditonText_C.ExecuteUbergraph_CrosshairConditonText
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshairConditonText_C::ExecuteUbergraph_CrosshairConditonText(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrosshairConditonText.CrosshairConditonText_C.ExecuteUbergraph_CrosshairConditonText");
		
		UCrosshairConditonText_C_ExecuteUbergraph_CrosshairConditonText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCrosshairConditonText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshairConditonText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CrosshairConditonText.CrosshairConditonText_C");
		return ptr;
	}

}


