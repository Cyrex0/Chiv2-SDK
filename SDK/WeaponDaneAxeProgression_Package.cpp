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
	 * 		Name   -> Function WeaponDaneAxeProgression.WeaponDaneAxeProgression_C.OnAssemble_WeaponDaneAxeProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponDaneAxeProgression_C::OnAssemble_WeaponDaneAxeProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDaneAxeProgression.WeaponDaneAxeProgression_C.OnAssemble_WeaponDaneAxeProgression");
		
		UWeaponDaneAxeProgression_C_OnAssemble_WeaponDaneAxeProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponDaneAxeProgression.WeaponDaneAxeProgression_C.ExecuteUbergraph_WeaponDaneAxeProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDaneAxeProgression_C::ExecuteUbergraph_WeaponDaneAxeProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDaneAxeProgression.WeaponDaneAxeProgression_C.ExecuteUbergraph_WeaponDaneAxeProgression");
		
		UWeaponDaneAxeProgression_C_ExecuteUbergraph_WeaponDaneAxeProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponDaneAxeProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDaneAxeProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponDaneAxeProgression.WeaponDaneAxeProgression_C");
		return ptr;
	}

}


