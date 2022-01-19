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
	 * 		Name   -> Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.UpdateNotifications
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Notifications                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonNotificationsWidget_C::UpdateNotifications(int Notifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.UpdateNotifications");
		
		UButtonNotificationsWidget_C_UpdateNotifications_Params params {};
		params.Notifications = Notifications;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.NewNotification
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UButtonNotificationsWidget_C::NewNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.NewNotification");
		
		UButtonNotificationsWidget_C_NewNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButtonNotificationsWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.PreConstruct");
		
		UButtonNotificationsWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.SetStyle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		NotificationsWidgetStyle_ENotificationsWidgetStyle Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonNotificationsWidget_C::SetStyle(NotificationsWidgetStyle_ENotificationsWidgetStyle Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.SetStyle");
		
		UButtonNotificationsWidget_C_SetStyle_Params params {};
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.ExecuteUbergraph_ButtonNotificationsWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonNotificationsWidget_C::ExecuteUbergraph_ButtonNotificationsWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.ExecuteUbergraph_ButtonNotificationsWidget");
		
		UButtonNotificationsWidget_C_ExecuteUbergraph_ButtonNotificationsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UButtonNotificationsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonNotificationsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ButtonNotificationsWidget.ButtonNotificationsWidget_C");
		return ptr;
	}

}


