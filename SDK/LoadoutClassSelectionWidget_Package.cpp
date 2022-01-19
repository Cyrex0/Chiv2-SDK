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
	 * 		Name   -> Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateClassSelectionWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ParentClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      CurrentSubclass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutClassSelectionWidget_C::UpdateClassSelectionWidget(class UClass* ParentClass, class UClass* CurrentSubclass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateClassSelectionWidget");
		
		ULoadoutClassSelectionWidget_C_UpdateClassSelectionWidget_Params params {};
		params.ParentClass = ParentClass;
		params.CurrentSubclass = CurrentSubclass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULoadoutClassSelectionWidget_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnInitialized");
		
		ULoadoutClassSelectionWidget_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnSubclassClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubclassClicked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutSubclassButton_C*                    LoadoutSubclassButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutClassSelectionWidget_C::OnSubclassClicked(class UClass* SubclassClicked, class ULoadoutSubclassButton_C* LoadoutSubclassButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnSubclassClicked");
		
		ULoadoutClassSelectionWidget_C_OnSubclassClicked_Params params {};
		params.SubclassClicked = SubclassClicked;
		params.LoadoutSubclassButton = LoadoutSubclassButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ClassSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadoutClassSelectionWidget_C::ClassSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ClassSelected");
		
		ULoadoutClassSelectionWidget_C_ClassSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSelectedSubclass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Subclass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutSubclassButton_C*                    LoadoutClassButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutClassSelectionWidget_C::UpdateSelectedSubclass(class UClass* Subclass, class ULoadoutSubclassButton_C* LoadoutClassButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSelectedSubclass");
		
		ULoadoutClassSelectionWidget_C_UpdateSelectedSubclass_Params params {};
		params.Subclass = Subclass;
		params.LoadoutClassButton = LoadoutClassButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSubclassLockedState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutClassSelectionWidget_C::UpdateSubclassLockedState(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSubclassLockedState");
		
		ULoadoutClassSelectionWidget_C_UpdateSubclassLockedState_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ExecuteUbergraph_LoadoutClassSelectionWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutClassSelectionWidget_C::ExecuteUbergraph_LoadoutClassSelectionWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ExecuteUbergraph_LoadoutClassSelectionWidget");
		
		ULoadoutClassSelectionWidget_C_ExecuteUbergraph_LoadoutClassSelectionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.SubclassSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Subclass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutClassSelectionWidget_C*              LoadoutClassSelectionWidget                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutSubclassButton_C*                    LoadoutClassButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadoutClassSelectionWidget_C::SubclassSelected__DelegateSignature(class UClass* Subclass, class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget, class ULoadoutSubclassButton_C* LoadoutClassButton, bool bIsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.SubclassSelected__DelegateSignature");
		
		ULoadoutClassSelectionWidget_C_SubclassSelected__DelegateSignature_Params params {};
		params.Subclass = Subclass;
		params.LoadoutClassSelectionWidget = LoadoutClassSelectionWidget;
		params.LoadoutClassButton = LoadoutClassButton;
		params.bIsLocked = bIsLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadoutClassSelectionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutClassSelectionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C");
		return ptr;
	}

}


