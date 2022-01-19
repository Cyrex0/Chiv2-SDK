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
	 * 		Name   -> Function AchievementMenuEntry.AchievementMenuEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAchievementMenuEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AchievementMenuEntry.AchievementMenuEntry_C.PreConstruct");
		
		UAchievementMenuEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AchievementMenuEntry.AchievementMenuEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAchievementMenuEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AchievementMenuEntry.AchievementMenuEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAchievementMenuEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AchievementMenuEntry.AchievementMenuEntry_C.OpenMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAchievementMenuEntry_C::OpenMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AchievementMenuEntry.AchievementMenuEntry_C.OpenMessage");
		
		UAchievementMenuEntry_C_OpenMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AchievementMenuEntry.AchievementMenuEntry_C.Update Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAchievementMenuEntry_C::Update_Widget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AchievementMenuEntry.AchievementMenuEntry_C.Update Widget");
		
		UAchievementMenuEntry_C_Update_Widget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AchievementMenuEntry.AchievementMenuEntry_C.SetState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		AchievementState_EAchievementState                 Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAchievementMenuEntry_C::SetState(AchievementState_EAchievementState Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AchievementMenuEntry.AchievementMenuEntry_C.SetState");
		
		UAchievementMenuEntry_C_SetState_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AchievementMenuEntry.AchievementMenuEntry_C.CloseMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAchievementMenuEntry_C::CloseMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AchievementMenuEntry.AchievementMenuEntry_C.CloseMessage");
		
		UAchievementMenuEntry_C_CloseMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AchievementMenuEntry.AchievementMenuEntry_C.ExecuteUbergraph_AchievementMenuEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAchievementMenuEntry_C::ExecuteUbergraph_AchievementMenuEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AchievementMenuEntry.AchievementMenuEntry_C.ExecuteUbergraph_AchievementMenuEntry");
		
		UAchievementMenuEntry_C_ExecuteUbergraph_AchievementMenuEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AchievementMenuEntry.AchievementMenuEntry_C.OnEntryOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAchievementMenuEntry_C*                     Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAchievementMenuEntry_C::OnEntryOpened__DelegateSignature(class UAchievementMenuEntry_C* Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AchievementMenuEntry.AchievementMenuEntry_C.OnEntryOpened__DelegateSignature");
		
		UAchievementMenuEntry_C_OnEntryOpened__DelegateSignature_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAchievementMenuEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementMenuEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AchievementMenuEntry.AchievementMenuEntry_C");
		return ptr;
	}

}


