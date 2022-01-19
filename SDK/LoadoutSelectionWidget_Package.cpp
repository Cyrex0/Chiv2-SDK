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
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryDownNavLogic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* ULoadoutSelectionWidget_C::SecondaryDownNavLogic(SlateCore_EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryDownNavLogic");
		
		ULoadoutSelectionWidget_C_SecondaryDownNavLogic_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryUpNavLogic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* ULoadoutSelectionWidget_C::SecondaryUpNavLogic(SlateCore_EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryUpNavLogic");
		
		ULoadoutSelectionWidget_C_SecondaryUpNavLogic_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.PrimaryDownNavLogic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* ULoadoutSelectionWidget_C::PrimaryDownNavLogic(SlateCore_EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.PrimaryDownNavLogic");
		
		ULoadoutSelectionWidget_C_PrimaryDownNavLogic_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponSelections
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SubclassChoice                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLoadout                                    Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ULoadoutSelectionWidget_C::UpdateWeaponSelections(class UClass* SubclassChoice, const struct FLoadout& Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponSelections");
		
		ULoadoutSelectionWidget_C_UpdateWeaponSelections_Params params {};
		params.SubclassChoice = SubclassChoice;
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideAllItems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSelectionWidget_C::HideAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideAllItems");
		
		ULoadoutSelectionWidget_C_HideAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponItems
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHorizontalBox*                              HoriBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              WeaponGroup                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TBL_EInventoryItemSlot                             Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      CurrentEquipped                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     ContainerBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      LoadoutSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSelectionWidget_C::UpdateWeaponItems(class UHorizontalBox* HoriBox, TArray<class UClass*> WeaponGroup, TBL_EInventoryItemSlot Slot, class UClass* CurrentEquipped, class UWidget* ContainerBox, class UClass* LoadoutSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponItems");
		
		ULoadoutSelectionWidget_C_UpdateWeaponItems_Params params {};
		params.HoriBox = HoriBox;
		params.WeaponGroup = WeaponGroup;
		params.Slot = Slot;
		params.CurrentEquipped = CurrentEquipped;
		params.ContainerBox = ContainerBox;
		params.LoadoutSelection = LoadoutSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideItems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHorizontalBox*                              HoriBox                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSelectionWidget_C::HideItems(class UHorizontalBox* HoriBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideItems");
		
		ULoadoutSelectionWidget_C_HideItems_Params params {};
		params.HoriBox = HoriBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindAllSlots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSelectionWidget_C::BindAllSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindAllSlots");
		
		ULoadoutSelectionWidget_C_BindAllSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindSlots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHorizontalBox*                              HoriBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSelectionWidget_C::BindSlots(class UHorizontalBox* HoriBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindSlots");
		
		ULoadoutSelectionWidget_C_BindSlots_Params params {};
		params.HoriBox = HoriBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULoadoutSelectionWidget_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnInitialized");
		
		ULoadoutSelectionWidget_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnItemHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSelectionWidget_C::OnItemHovered(class UWidget* Widget, class UClass* InventoryItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnItemHovered");
		
		ULoadoutSelectionWidget_C_OnItemHovered_Params params {};
		params.Widget = Widget;
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UnhoveredItems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSelectionWidget_C::UnhoveredItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UnhoveredItems");
		
		ULoadoutSelectionWidget_C_UnhoveredItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemClickedHandler
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EInventoryItemSlot                             Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutButton_C*                            LoadoutButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSelectionWidget_C::ItemClickedHandler(class UClass* InventoryItem, TBL_EInventoryItemSlot Slot, class ULoadoutButton_C* LoadoutButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemClickedHandler");
		
		ULoadoutSelectionWidget_C_ItemClickedHandler_Params params {};
		params.InventoryItem = InventoryItem;
		params.Slot = Slot;
		params.LoadoutButton = LoadoutButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.EquipItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULoadoutButton_C*                            LoadoutButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EInventoryItemSlot                             Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSkipAnim                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadoutSelectionWidget_C::EquipItem(class ULoadoutButton_C* LoadoutButton, TBL_EInventoryItemSlot Slot, bool bSkipAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.EquipItem");
		
		ULoadoutSelectionWidget_C_EquipItem_Params params {};
		params.LoadoutButton = LoadoutButton;
		params.Slot = Slot;
		params.bSkipAnim = bSkipAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ResetCount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSelectionWidget_C::ResetCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ResetCount");
		
		ULoadoutSelectionWidget_C_ResetCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ExecuteUbergraph_LoadoutSelectionWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSelectionWidget_C::ExecuteUbergraph_LoadoutSelectionWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ExecuteUbergraph_LoadoutSelectionWidget");
		
		ULoadoutSelectionWidget_C_ExecuteUbergraph_LoadoutSelectionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SubclassItemsUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSelectionWidget_C::SubclassItemsUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SubclassItemsUpdated__DelegateSignature");
		
		ULoadoutSelectionWidget_C_SubclassItemsUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSelectionWidget_C::ItemHovered__DelegateSignature(class UClass* InventoryItem, class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemHovered__DelegateSignature");
		
		ULoadoutSelectionWidget_C_ItemHovered__DelegateSignature_Params params {};
		params.InventoryItem = InventoryItem;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EInventoryItemSlot                             Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutButton_C*                            LoadoutButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSelectionWidget_C::ItemSelected__DelegateSignature(TBL_EInventoryItemSlot Slot, class UClass* Item, class ULoadoutButton_C* LoadoutButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemSelected__DelegateSignature");
		
		ULoadoutSelectionWidget_C_ItemSelected__DelegateSignature_Params params {};
		params.Slot = Slot;
		params.Item = Item;
		params.LoadoutButton = LoadoutButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadoutSelectionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutSelectionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadoutSelectionWidget.LoadoutSelectionWidget_C");
		return ptr;
	}

}


