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
	 * 		Name   -> Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UFreeWeekendWidgetConsole_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnFocusLost");
		
		UFreeWeekendWidgetConsole_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFreeWeekendWidgetConsole_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.Tick");
		
		UFreeWeekendWidgetConsole_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.K2_OnFocusChanging
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UFreeWeekendWidgetConsole_C::K2_OnFocusChanging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.K2_OnFocusChanging");
		
		UFreeWeekendWidgetConsole_C_K2_OnFocusChanging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.ExecuteUbergraph_FreeWeekendWidgetConsole
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFreeWeekendWidgetConsole_C::ExecuteUbergraph_FreeWeekendWidgetConsole(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.ExecuteUbergraph_FreeWeekendWidgetConsole");
		
		UFreeWeekendWidgetConsole_C_ExecuteUbergraph_FreeWeekendWidgetConsole_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnPurchasePerformed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UFreeWeekendWidgetConsole_C::OnPurchasePerformed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnPurchasePerformed__DelegateSignature");
		
		UFreeWeekendWidgetConsole_C_OnPurchasePerformed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFreeWeekendWidgetConsole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFreeWeekendWidgetConsole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C");
		return ptr;
	}

}


