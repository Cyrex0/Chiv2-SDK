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
	 * 		Name   -> Function WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C.OnAssemble_WeaponThrowingAxeProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponThrowingAxeProgression_C::OnAssemble_WeaponThrowingAxeProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C.OnAssemble_WeaponThrowingAxeProgression");
		
		UWeaponThrowingAxeProgression_C_OnAssemble_WeaponThrowingAxeProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C.ExecuteUbergraph_WeaponThrowingAxeProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponThrowingAxeProgression_C::ExecuteUbergraph_WeaponThrowingAxeProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C.ExecuteUbergraph_WeaponThrowingAxeProgression");
		
		UWeaponThrowingAxeProgression_C_ExecuteUbergraph_WeaponThrowingAxeProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponThrowingAxeProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponThrowingAxeProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C");
		return ptr;
	}

}


