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
	 * 		Name   -> Function WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C.OnAssemble_WeaponThrowingKnifeProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponThrowingKnifeProgression_C::OnAssemble_WeaponThrowingKnifeProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C.OnAssemble_WeaponThrowingKnifeProgression");
		
		UWeaponThrowingKnifeProgression_C_OnAssemble_WeaponThrowingKnifeProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C.ExecuteUbergraph_WeaponThrowingKnifeProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponThrowingKnifeProgression_C::ExecuteUbergraph_WeaponThrowingKnifeProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C.ExecuteUbergraph_WeaponThrowingKnifeProgression");
		
		UWeaponThrowingKnifeProgression_C_ExecuteUbergraph_WeaponThrowingKnifeProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponThrowingKnifeProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponThrowingKnifeProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C");
		return ptr;
	}

}


