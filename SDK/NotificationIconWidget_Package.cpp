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
	 * 		Name   -> Function NotificationIconWidget.NotificationIconWidget_C.UpdateWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHasUnviewed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHasPurchasable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNotificationIconWidget_C::UpdateWidget(bool bHasUnviewed, bool bHasPurchasable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationIconWidget.NotificationIconWidget_C.UpdateWidget");
		
		UNotificationIconWidget_C_UpdateWidget_Params params {};
		params.bHasUnviewed = bHasUnviewed;
		params.bHasPurchasable = bHasPurchasable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustNotification
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomizationEntry                         CustomizationEntry                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotificationIconWidget_C::UpdateCustNotification(const struct FCustomizationEntry& CustomizationEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustNotification");
		
		UNotificationIconWidget_C_UpdateCustNotification_Params params {};
		params.CustomizationEntry = CustomizationEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustListNotification
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FCustomizationEntry>                 CustomizationEntryList                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UNotificationIconWidget_C::UpdateCustListNotification(TArray<struct FCustomizationEntry> CustomizationEntryList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustListNotification");
		
		UNotificationIconWidget_C_UpdateCustListNotification_Params params {};
		params.CustomizationEntryList = CustomizationEntryList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NotificationIconWidget.NotificationIconWidget_C.ExecuteUbergraph_NotificationIconWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotificationIconWidget_C::ExecuteUbergraph_NotificationIconWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationIconWidget.NotificationIconWidget_C.ExecuteUbergraph_NotificationIconWidget");
		
		UNotificationIconWidget_C_ExecuteUbergraph_NotificationIconWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNotificationIconWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificationIconWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotificationIconWidget.NotificationIconWidget_C");
		return ptr;
	}

}


