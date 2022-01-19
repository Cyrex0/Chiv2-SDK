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
	 * 		Name   -> Function Carryable_Trumpet.Carryable_Trumpet_C.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACarryable_Trumpet_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_Trumpet.Carryable_Trumpet_C.OnInitialize");
		
		ACarryable_Trumpet_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_Trumpet.Carryable_Trumpet_C.OnUse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACarryable_Trumpet_C::OnUse(class AInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_Trumpet.Carryable_Trumpet_C.OnUse");
		
		ACarryable_Trumpet_C_OnUse_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_Trumpet.Carryable_Trumpet_C.ExecuteUbergraph_Carryable_Trumpet
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACarryable_Trumpet_C::ExecuteUbergraph_Carryable_Trumpet(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_Trumpet.Carryable_Trumpet_C.ExecuteUbergraph_Carryable_Trumpet");
		
		ACarryable_Trumpet_C_ExecuteUbergraph_Carryable_Trumpet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACarryable_Trumpet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarryable_Trumpet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Carryable_Trumpet.Carryable_Trumpet_C");
		return ptr;
	}

}


