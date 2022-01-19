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
	 * 		Name   -> Function WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C.OnAssemble_WeaponHeavyMaceProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponHeavyMaceProgression_C::OnAssemble_WeaponHeavyMaceProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C.OnAssemble_WeaponHeavyMaceProgression");
		
		UWeaponHeavyMaceProgression_C_OnAssemble_WeaponHeavyMaceProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C.ExecuteUbergraph_WeaponHeavyMaceProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponHeavyMaceProgression_C::ExecuteUbergraph_WeaponHeavyMaceProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C.ExecuteUbergraph_WeaponHeavyMaceProgression");
		
		UWeaponHeavyMaceProgression_C_ExecuteUbergraph_WeaponHeavyMaceProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponHeavyMaceProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponHeavyMaceProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C");
		return ptr;
	}

}


