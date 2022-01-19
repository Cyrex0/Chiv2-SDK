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
	 * 		Name   -> Function PeasantFreakout.PeasantFreakout_C.CanBeCancelled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bIsCancelIntoParry                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPeasantFreakout_C::CanBeCancelled(bool bIsCancelIntoParry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakout.PeasantFreakout_C.CanBeCancelled");
		
		UPeasantFreakout_C_CanBeCancelled_Params params {};
		params.bIsCancelIntoParry = bIsCancelIntoParry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantFreakout.PeasantFreakout_C.OnAssemble_PeasantFreakout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPeasantFreakout_C::OnAssemble_PeasantFreakout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakout.PeasantFreakout_C.OnAssemble_PeasantFreakout");
		
		UPeasantFreakout_C_OnAssemble_PeasantFreakout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantFreakout.PeasantFreakout_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPeasantFreakout_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakout.PeasantFreakout_C.EventEndAnimation");
		
		UPeasantFreakout_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantFreakout.PeasantFreakout_C.ExecuteUbergraph_PeasantFreakout
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPeasantFreakout_C::ExecuteUbergraph_PeasantFreakout(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakout.PeasantFreakout_C.ExecuteUbergraph_PeasantFreakout");
		
		UPeasantFreakout_C_ExecuteUbergraph_PeasantFreakout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPeasantFreakout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeasantFreakout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PeasantFreakout.PeasantFreakout_C");
		return ptr;
	}

}


