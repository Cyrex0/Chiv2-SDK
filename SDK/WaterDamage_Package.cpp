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
	 * 		Name   -> Function WaterDamage.WaterDamage_C.OnAssemble_WaterDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWaterDamage_C::OnAssemble_WaterDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterDamage.WaterDamage_C.OnAssemble_WaterDamage");
		
		UWaterDamage_C_OnAssemble_WaterDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WaterDamage.WaterDamage_C.ExecuteUbergraph_WaterDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterDamage_C::ExecuteUbergraph_WaterDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterDamage.WaterDamage_C.ExecuteUbergraph_WaterDamage");
		
		UWaterDamage_C_ExecuteUbergraph_WaterDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWaterDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterDamage.WaterDamage_C");
		return ptr;
	}

}


