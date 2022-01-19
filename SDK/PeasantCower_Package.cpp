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
	 * 		Name   -> Function PeasantCower.PeasantCower_C.CanBeCancelled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bIsCancelIntoParry                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPeasantCower_C::CanBeCancelled(bool bIsCancelIntoParry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantCower.PeasantCower_C.CanBeCancelled");
		
		UPeasantCower_C_CanBeCancelled_Params params {};
		params.bIsCancelIntoParry = bIsCancelIntoParry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantCower.PeasantCower_C.OnAssemble_PeasantCower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPeasantCower_C::OnAssemble_PeasantCower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantCower.PeasantCower_C.OnAssemble_PeasantCower");
		
		UPeasantCower_C_OnAssemble_PeasantCower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantCower.PeasantCower_C.ExecuteUbergraph_PeasantCower
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPeasantCower_C::ExecuteUbergraph_PeasantCower(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantCower.PeasantCower_C.ExecuteUbergraph_PeasantCower");
		
		UPeasantCower_C_ExecuteUbergraph_PeasantCower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPeasantCower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeasantCower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PeasantCower.PeasantCower_C");
		return ptr;
	}

}


