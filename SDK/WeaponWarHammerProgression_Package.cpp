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
	 * 		Name   -> Function WeaponWarHammerProgression.WeaponWarHammerProgression_C.OnAssemble_WeaponWarHammerProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponWarHammerProgression_C::OnAssemble_WeaponWarHammerProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWarHammerProgression.WeaponWarHammerProgression_C.OnAssemble_WeaponWarHammerProgression");
		
		UWeaponWarHammerProgression_C_OnAssemble_WeaponWarHammerProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponWarHammerProgression.WeaponWarHammerProgression_C.ExecuteUbergraph_WeaponWarHammerProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponWarHammerProgression_C::ExecuteUbergraph_WeaponWarHammerProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWarHammerProgression.WeaponWarHammerProgression_C.ExecuteUbergraph_WeaponWarHammerProgression");
		
		UWeaponWarHammerProgression_C_ExecuteUbergraph_WeaponWarHammerProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponWarHammerProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponWarHammerProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponWarHammerProgression.WeaponWarHammerProgression_C");
		return ptr;
	}

}


