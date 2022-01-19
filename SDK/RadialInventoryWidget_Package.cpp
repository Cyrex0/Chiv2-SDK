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
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.ClearCurrentSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::ClearCurrentSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.ClearCurrentSelection");
		
		URadialInventoryWidget_C_ClearCurrentSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateSelectedOverlay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIRadialInventoryStruct                    UIRadialInventoryStruct                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void URadialInventoryWidget_C::UpdateSelectedOverlay(const struct FUIRadialInventoryStruct& UIRadialInventoryStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateSelectedOverlay");
		
		URadialInventoryWidget_C_UpdateSelectedOverlay_Params params {};
		params.UIRadialInventoryStruct = UIRadialInventoryStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.ResetAllSlotColors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::ResetAllSlotColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.ResetAllSlotColors");
		
		URadialInventoryWidget_C_ResetAllSlotColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.SetSlotColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FColor                                      Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialInventoryWidget_C::SetSlotColor(int Slot, const struct FColor& Color, float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.SetSlotColor");
		
		URadialInventoryWidget_C_SetSlotColor_Params params {};
		params.Slot = Slot;
		params.Color = Color;
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.SelectIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialInventoryWidget_C::SelectIndex(int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.SelectIndex");
		
		URadialInventoryWidget_C_SelectIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.ResetInventoryContents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::ResetInventoryContents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.ResetInventoryContents");
		
		URadialInventoryWidget_C_ResetInventoryContents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateContentsForSlot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIRadialInventoryStruct                    RadialSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  ItemTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bHasItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TBL_EInventoryItemSlot                             InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  ShieldIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShieldEquipped                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialInventoryWidget_C::UpdateContentsForSlot(struct FUIRadialInventoryStruct* RadialSlot, class UTexture2D* ItemTexture, const class FText& ItemName, bool bHasItem, TBL_EInventoryItemSlot InventorySlot, bool ShowShield, class UTexture2D* ShieldIcon, bool ShieldEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateContentsForSlot");
		
		URadialInventoryWidget_C_UpdateContentsForSlot_Params params {};
		params.ItemTexture = ItemTexture;
		params.ItemName = ItemName;
		params.bHasItem = bHasItem;
		params.InventorySlot = InventorySlot;
		params.ShowShield = ShowShield;
		params.ShieldIcon = ShieldIcon;
		params.ShieldEquipped = ShieldEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadialSlot != nullptr)
			*RadialSlot = params.RadialSlot;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateInventory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::UpdateInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateInventory");
		
		URadialInventoryWidget_C_UpdateInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateAxis
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::UpdateAxis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateAxis");
		
		URadialInventoryWidget_C_UpdateAxis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.SetupRadialSlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::SetupRadialSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.SetupRadialSlots");
		
		URadialInventoryWidget_C_SetupRadialSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialInventoryWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.Tick");
		
		URadialInventoryWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.OnPossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialInventoryWidget_C::OnPossessedPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.OnPossessedPawn");
		
		URadialInventoryWidget_C_OnPossessedPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.OnInvSlotsUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::OnInvSlotsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.OnInvSlotsUpdated");
		
		URadialInventoryWidget_C_OnInvSlotsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.OnInventoryChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialInventoryWidget_C::OnInventoryChanged(class AInventoryItem* InventoryItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.OnInventoryChanged");
		
		URadialInventoryWidget_C_OnInventoryChanged_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.OnPlayerKilled
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void URadialInventoryWidget_C::OnPlayerKilled(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.OnPlayerKilled");
		
		URadialInventoryWidget_C_OnPlayerKilled_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialClosing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::OnRadialClosing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialClosing");
		
		URadialInventoryWidget_C_OnRadialClosing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialOpening
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::OnRadialOpening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialOpening");
		
		URadialInventoryWidget_C_OnRadialOpening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.OnInitialized");
		
		URadialInventoryWidget_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.PressInventoryKey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EInventoryItemSlot                             Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialInventoryWidget_C::PressInventoryKey(TBL_EInventoryItemSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.PressInventoryKey");
		
		URadialInventoryWidget_C_PressInventoryKey_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.Do nothing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialInventoryWidget_C::Do_nothing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.Do nothing");
		
		URadialInventoryWidget_C_Do_nothing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialInventoryWidget.RadialInventoryWidget_C.ExecuteUbergraph_RadialInventoryWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialInventoryWidget_C::ExecuteUbergraph_RadialInventoryWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialInventoryWidget.RadialInventoryWidget_C.ExecuteUbergraph_RadialInventoryWidget");
		
		URadialInventoryWidget_C_ExecuteUbergraph_RadialInventoryWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URadialInventoryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialInventoryWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialInventoryWidget.RadialInventoryWidget_C");
		return ptr;
	}

}


