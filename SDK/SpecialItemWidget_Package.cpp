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
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.UpdateInputMethod
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemWidget_C::UpdateInputMethod(TBL_EGamepadInputMode Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.UpdateInputMethod");
		
		USpecialItemWidget_C_UpdateInputMethod_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpecialItemWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.Construct");
		
		USpecialItemWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.OnPossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemWidget_C::OnPossessedPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.OnPossessedPawn");
		
		USpecialItemWidget_C_OnPossessedPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpecialItemWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.PreConstruct");
		
		USpecialItemWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.OnChargeUpdated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentCharge                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxCharge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_ESpecialItemChargeType                         ChargeType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemWidget_C::OnChargeUpdated_Event_1(float CurrentCharge, float MaxCharge, TBL_ESpecialItemChargeType ChargeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.OnChargeUpdated_Event_1");
		
		USpecialItemWidget_C_OnChargeUpdated_Event_1_Params params {};
		params.CurrentCharge = CurrentCharge;
		params.MaxCharge = MaxCharge;
		params.ChargeType = ChargeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.SetIsAvailable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInitializing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpecialItemWidget_C::SetIsAvailable(bool IsInitializing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.SetIsAvailable");
		
		USpecialItemWidget_C_SetIsAvailable_Params params {};
		params.IsInitializing = IsInitializing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.SetUnavailable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInitializing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpecialItemWidget_C::SetUnavailable(bool IsInitializing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.SetUnavailable");
		
		USpecialItemWidget_C_SetUnavailable_Params params {};
		params.IsInitializing = IsInitializing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.OnUseSpecialItem_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpecialItemWidget_C::OnUseSpecialItem_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.OnUseSpecialItem_Event_1");
		
		USpecialItemWidget_C_OnUseSpecialItem_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.OnEquipSpecialItem_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpecialItemWidget_C::OnEquipSpecialItem_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.OnEquipSpecialItem_Event_1");
		
		USpecialItemWidget_C_OnEquipSpecialItem_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.OnSpecialItemUseFailed_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpecialItemWidget_C::OnSpecialItemUseFailed_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.OnSpecialItemUseFailed_Event_1");
		
		USpecialItemWidget_C_OnSpecialItemUseFailed_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.OnGamepadInputModeChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemWidget_C::OnGamepadInputModeChanged_Event_1(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.OnGamepadInputModeChanged_Event_1");
		
		USpecialItemWidget_C_OnGamepadInputModeChanged_Event_1_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.SpecialItemSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpecialItemWidget_C::SpecialItemSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.SpecialItemSet");
		
		USpecialItemWidget_C_SpecialItemSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.OnItemStackChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemWidget_C::OnItemStackChanged_Event_1(class AInventoryItem* Item, int Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.OnItemStackChanged_Event_1");
		
		USpecialItemWidget_C_OnItemStackChanged_Event_1_Params params {};
		params.Item = Item;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpecialItemWidget.SpecialItemWidget_C.ExecuteUbergraph_SpecialItemWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpecialItemWidget_C::ExecuteUbergraph_SpecialItemWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpecialItemWidget.SpecialItemWidget_C.ExecuteUbergraph_SpecialItemWidget");
		
		USpecialItemWidget_C_ExecuteUbergraph_SpecialItemWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpecialItemWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecialItemWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpecialItemWidget.SpecialItemWidget_C");
		return ptr;
	}

}


