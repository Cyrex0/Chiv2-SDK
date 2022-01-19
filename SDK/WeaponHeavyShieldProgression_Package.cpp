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
	 * 		Name   -> Function WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C.OnAssemble_WeaponHeavyShieldProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponHeavyShieldProgression_C::OnAssemble_WeaponHeavyShieldProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C.OnAssemble_WeaponHeavyShieldProgression");
		
		UWeaponHeavyShieldProgression_C_OnAssemble_WeaponHeavyShieldProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C.ExecuteUbergraph_WeaponHeavyShieldProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponHeavyShieldProgression_C::ExecuteUbergraph_WeaponHeavyShieldProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C.ExecuteUbergraph_WeaponHeavyShieldProgression");
		
		UWeaponHeavyShieldProgression_C_ExecuteUbergraph_WeaponHeavyShieldProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponHeavyShieldProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponHeavyShieldProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C");
		return ptr;
	}

}


