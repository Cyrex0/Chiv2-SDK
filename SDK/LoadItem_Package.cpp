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
	 * 		Name   -> Function LoadItem.LoadItem_C.OnAssemble_LoadItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadItem_C::OnAssemble_LoadItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadItem.LoadItem_C.OnAssemble_LoadItem");
		
		ULoadItem_C_OnAssemble_LoadItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadItem.LoadItem_C.ExecuteUbergraph_LoadItem
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadItem_C::ExecuteUbergraph_LoadItem(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadItem.LoadItem_C.ExecuteUbergraph_LoadItem");
		
		ULoadItem_C_ExecuteUbergraph_LoadItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LoadItem.LoadItem_C");
		return ptr;
	}

}


