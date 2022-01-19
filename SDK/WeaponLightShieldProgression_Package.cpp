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
	 * 		Name   -> Function WeaponLightShieldProgression.WeaponLightShieldProgression_C.OnAssemble_WeaponLightShieldProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponLightShieldProgression_C::OnAssemble_WeaponLightShieldProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponLightShieldProgression.WeaponLightShieldProgression_C.OnAssemble_WeaponLightShieldProgression");
		
		UWeaponLightShieldProgression_C_OnAssemble_WeaponLightShieldProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponLightShieldProgression.WeaponLightShieldProgression_C.ExecuteUbergraph_WeaponLightShieldProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponLightShieldProgression_C::ExecuteUbergraph_WeaponLightShieldProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponLightShieldProgression.WeaponLightShieldProgression_C.ExecuteUbergraph_WeaponLightShieldProgression");
		
		UWeaponLightShieldProgression_C_ExecuteUbergraph_WeaponLightShieldProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponLightShieldProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponLightShieldProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponLightShieldProgression.WeaponLightShieldProgression_C");
		return ptr;
	}

}


