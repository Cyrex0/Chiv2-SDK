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
	 * 		Name   -> Function WeaponGlaiveProgression.WeaponGlaiveProgression_C.OnAssemble_WeaponGlaiveProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponGlaiveProgression_C::OnAssemble_WeaponGlaiveProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponGlaiveProgression.WeaponGlaiveProgression_C.OnAssemble_WeaponGlaiveProgression");
		
		UWeaponGlaiveProgression_C_OnAssemble_WeaponGlaiveProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponGlaiveProgression.WeaponGlaiveProgression_C.ExecuteUbergraph_WeaponGlaiveProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponGlaiveProgression_C::ExecuteUbergraph_WeaponGlaiveProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponGlaiveProgression.WeaponGlaiveProgression_C.ExecuteUbergraph_WeaponGlaiveProgression");
		
		UWeaponGlaiveProgression_C_ExecuteUbergraph_WeaponGlaiveProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponGlaiveProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponGlaiveProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponGlaiveProgression.WeaponGlaiveProgression_C");
		return ptr;
	}

}


