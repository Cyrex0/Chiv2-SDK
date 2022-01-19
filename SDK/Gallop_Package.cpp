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
	 * 		Name   -> Function Gallop.Gallop_C.OnAssemble_Gallop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGallop_C::OnAssemble_Gallop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gallop.Gallop_C.OnAssemble_Gallop");
		
		UGallop_C_OnAssemble_Gallop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Gallop.Gallop_C.GearDown
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGallop_C::GearDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gallop.Gallop_C.GearDown");
		
		UGallop_C_GearDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Gallop.Gallop_C.UpdateMovement
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGallop_C::UpdateMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gallop.Gallop_C.UpdateMovement");
		
		UGallop_C_UpdateMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Gallop.Gallop_C.ExecuteUbergraph_Gallop
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGallop_C::ExecuteUbergraph_Gallop(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gallop.Gallop_C.ExecuteUbergraph_Gallop");
		
		UGallop_C_ExecuteUbergraph_Gallop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGallop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGallop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gallop.Gallop_C");
		return ptr;
	}

}


