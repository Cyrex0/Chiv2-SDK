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
	 * 		Name   -> Function SwitchItem.SwitchItem_C.OnAssemble_SwitchItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USwitchItem_C::OnAssemble_SwitchItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchItem.SwitchItem_C.OnAssemble_SwitchItem");
		
		USwitchItem_C_OnAssemble_SwitchItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SwitchItem.SwitchItem_C.ExecuteUbergraph_SwitchItem
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchItem_C::ExecuteUbergraph_SwitchItem(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchItem.SwitchItem_C.ExecuteUbergraph_SwitchItem");
		
		USwitchItem_C_ExecuteUbergraph_SwitchItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USwitchItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwitchItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SwitchItem.SwitchItem_C");
		return ptr;
	}

}


