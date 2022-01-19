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
	 * 		Name   -> Function AmmoEventEntry.AmmoEventEntry_C.Add Amount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAmmoEventEntry_C::Add_Amount(int Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmmoEventEntry.AmmoEventEntry_C.Add Amount");
		
		UAmmoEventEntry_C_Add_Amount_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AmmoEventEntry.AmmoEventEntry_C.On Fade Out Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAmmoEventEntry_C::On_Fade_Out_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmmoEventEntry.AmmoEventEntry_C.On Fade Out Timer");
		
		UAmmoEventEntry_C_On_Fade_Out_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AmmoEventEntry.AmmoEventEntry_C.ExecuteUbergraph_AmmoEventEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAmmoEventEntry_C::ExecuteUbergraph_AmmoEventEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmmoEventEntry.AmmoEventEntry_C.ExecuteUbergraph_AmmoEventEntry");
		
		UAmmoEventEntry_C_ExecuteUbergraph_AmmoEventEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAmmoEventEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmoEventEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AmmoEventEntry.AmmoEventEntry_C");
		return ptr;
	}

}


