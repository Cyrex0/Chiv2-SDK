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
	 * 		Name   -> Function UseItem.UseItem_C.OnAssemble_UseItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUseItem_C::OnAssemble_UseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseItem.UseItem_C.OnAssemble_UseItem");
		
		UUseItem_C_OnAssemble_UseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function UseItem.UseItem_C.ExecuteUbergraph_UseItem
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUseItem_C::ExecuteUbergraph_UseItem(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseItem.UseItem_C.ExecuteUbergraph_UseItem");
		
		UUseItem_C_ExecuteUbergraph_UseItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUseItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUseItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UseItem.UseItem_C");
		return ptr;
	}

}


