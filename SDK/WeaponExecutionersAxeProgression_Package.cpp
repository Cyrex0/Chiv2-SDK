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
	 * 		Name   -> Function WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C.OnAssemble_WeaponExecutionersAxeProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponExecutionersAxeProgression_C::OnAssemble_WeaponExecutionersAxeProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C.OnAssemble_WeaponExecutionersAxeProgression");
		
		UWeaponExecutionersAxeProgression_C_OnAssemble_WeaponExecutionersAxeProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C.ExecuteUbergraph_WeaponExecutionersAxeProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponExecutionersAxeProgression_C::ExecuteUbergraph_WeaponExecutionersAxeProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C.ExecuteUbergraph_WeaponExecutionersAxeProgression");
		
		UWeaponExecutionersAxeProgression_C_ExecuteUbergraph_WeaponExecutionersAxeProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponExecutionersAxeProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponExecutionersAxeProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponExecutionersAxeProgression.WeaponExecutionersAxeProgression_C");
		return ptr;
	}

}


