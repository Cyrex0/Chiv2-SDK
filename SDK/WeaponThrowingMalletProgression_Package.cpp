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
	 * 		Name   -> Function WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C.OnAssemble_WeaponThrowingMalletProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponThrowingMalletProgression_C::OnAssemble_WeaponThrowingMalletProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C.OnAssemble_WeaponThrowingMalletProgression");
		
		UWeaponThrowingMalletProgression_C_OnAssemble_WeaponThrowingMalletProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C.ExecuteUbergraph_WeaponThrowingMalletProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponThrowingMalletProgression_C::ExecuteUbergraph_WeaponThrowingMalletProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C.ExecuteUbergraph_WeaponThrowingMalletProgression");
		
		UWeaponThrowingMalletProgression_C_ExecuteUbergraph_WeaponThrowingMalletProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponThrowingMalletProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponThrowingMalletProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C");
		return ptr;
	}

}


