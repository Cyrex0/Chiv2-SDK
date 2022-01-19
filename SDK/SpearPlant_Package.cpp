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
	 * 		Name   -> Function SpearPlant.SpearPlant_C.OnAssemble_SpearPlant
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpearPlant_C::OnAssemble_SpearPlant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpearPlant.SpearPlant_C.OnAssemble_SpearPlant");
		
		USpearPlant_C_OnAssemble_SpearPlant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpearPlant.SpearPlant_C.ExecuteUbergraph_SpearPlant
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpearPlant_C::ExecuteUbergraph_SpearPlant(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpearPlant.SpearPlant_C.ExecuteUbergraph_SpearPlant");
		
		USpearPlant_C_ExecuteUbergraph_SpearPlant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpearPlant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpearPlant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpearPlant.SpearPlant_C");
		return ptr;
	}

}


