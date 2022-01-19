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
	 * 		Name   -> Function debugmenu_CombatZones.debugmenu_CombatZones_C.RegenerateRows
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void Udebugmenu_CombatZones_C::RegenerateRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function debugmenu_CombatZones.debugmenu_CombatZones_C.RegenerateRows");
		
		Udebugmenu_CombatZones_C_RegenerateRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function debugmenu_CombatZones.debugmenu_CombatZones_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void Udebugmenu_CombatZones_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function debugmenu_CombatZones.debugmenu_CombatZones_C.Construct");
		
		Udebugmenu_CombatZones_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function debugmenu_CombatZones.debugmenu_CombatZones_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Udebugmenu_CombatZones_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function debugmenu_CombatZones.debugmenu_CombatZones_C.Tick");
		
		Udebugmenu_CombatZones_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function debugmenu_CombatZones.debugmenu_CombatZones_C.OnActiveVolumensChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Udebugmenu_CombatZones_C::OnActiveVolumensChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function debugmenu_CombatZones.debugmenu_CombatZones_C.OnActiveVolumensChanged");
		
		Udebugmenu_CombatZones_C_OnActiveVolumensChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function debugmenu_CombatZones.debugmenu_CombatZones_C.ExecuteUbergraph_debugmenu_CombatZones
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Udebugmenu_CombatZones_C::ExecuteUbergraph_debugmenu_CombatZones(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function debugmenu_CombatZones.debugmenu_CombatZones_C.ExecuteUbergraph_debugmenu_CombatZones");
		
		Udebugmenu_CombatZones_C_ExecuteUbergraph_debugmenu_CombatZones_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction Udebugmenu_CombatZones_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Udebugmenu_CombatZones_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass debugmenu_CombatZones.debugmenu_CombatZones_C");
		return ptr;
	}

}


