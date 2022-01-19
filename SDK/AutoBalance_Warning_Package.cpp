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
	 * 		Name   -> Function AutoBalance_Warning.AutoBalance_Warning_C.Set Owning HUD Component
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDComponent_C*                             New_Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutoBalance_Warning_C::Set_Owning_HUD_Component(class UHUDComponent_C* New_Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoBalance_Warning.AutoBalance_Warning_C.Set Owning HUD Component");
		
		UAutoBalance_Warning_C_Set_Owning_HUD_Component_Params params {};
		params.New_Owner = New_Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AutoBalance_Warning.AutoBalance_Warning_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutoBalance_Warning_C::Initialize(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoBalance_Warning.AutoBalance_Warning_C.Initialize");
		
		UAutoBalance_Warning_C_Initialize_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AutoBalance_Warning.AutoBalance_Warning_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAutoBalance_Warning_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoBalance_Warning.AutoBalance_Warning_C.Construct");
		
		UAutoBalance_Warning_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AutoBalance_Warning.AutoBalance_Warning_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAutoBalance_Warning_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoBalance_Warning.AutoBalance_Warning_C.OnInitialized");
		
		UAutoBalance_Warning_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AutoBalance_Warning.AutoBalance_Warning_C.AutoBalanceNotificationReceived_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutoBalance_Warning_C::AutoBalanceNotificationReceived_Event_1(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoBalance_Warning.AutoBalance_Warning_C.AutoBalanceNotificationReceived_Event_1");
		
		UAutoBalance_Warning_C_AutoBalanceNotificationReceived_Event_1_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AutoBalance_Warning.AutoBalance_Warning_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAutoBalance_Warning_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoBalance_Warning.AutoBalance_Warning_C.CustomEvent_1");
		
		UAutoBalance_Warning_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AutoBalance_Warning.AutoBalance_Warning_C.ExecuteUbergraph_AutoBalance_Warning
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutoBalance_Warning_C::ExecuteUbergraph_AutoBalance_Warning(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoBalance_Warning.AutoBalance_Warning_C.ExecuteUbergraph_AutoBalance_Warning");
		
		UAutoBalance_Warning_C_ExecuteUbergraph_AutoBalance_Warning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoBalance_Warning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoBalance_Warning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AutoBalance_Warning.AutoBalance_Warning_C");
		return ptr;
	}

}


