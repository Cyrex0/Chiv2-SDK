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
	 * 		Name   -> Function WeaponBastardSwordProgression.WeaponBastardSwordProgression_C.OnAssemble_WeaponBastardSwordProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponBastardSwordProgression_C::OnAssemble_WeaponBastardSwordProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBastardSwordProgression.WeaponBastardSwordProgression_C.OnAssemble_WeaponBastardSwordProgression");
		
		UWeaponBastardSwordProgression_C_OnAssemble_WeaponBastardSwordProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponBastardSwordProgression.WeaponBastardSwordProgression_C.ExecuteUbergraph_WeaponBastardSwordProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponBastardSwordProgression_C::ExecuteUbergraph_WeaponBastardSwordProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBastardSwordProgression.WeaponBastardSwordProgression_C.ExecuteUbergraph_WeaponBastardSwordProgression");
		
		UWeaponBastardSwordProgression_C_ExecuteUbergraph_WeaponBastardSwordProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponBastardSwordProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponBastardSwordProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponBastardSwordProgression.WeaponBastardSwordProgression_C");
		return ptr;
	}

}


