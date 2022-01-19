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
	 * 		Name   -> Function WeaponMorningStarProgression.WeaponMorningStarProgression_C.OnAssemble_WeaponMorningStarProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponMorningStarProgression_C::OnAssemble_WeaponMorningStarProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponMorningStarProgression.WeaponMorningStarProgression_C.OnAssemble_WeaponMorningStarProgression");
		
		UWeaponMorningStarProgression_C_OnAssemble_WeaponMorningStarProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponMorningStarProgression.WeaponMorningStarProgression_C.ExecuteUbergraph_WeaponMorningStarProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponMorningStarProgression_C::ExecuteUbergraph_WeaponMorningStarProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponMorningStarProgression.WeaponMorningStarProgression_C.ExecuteUbergraph_WeaponMorningStarProgression");
		
		UWeaponMorningStarProgression_C_ExecuteUbergraph_WeaponMorningStarProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponMorningStarProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponMorningStarProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponMorningStarProgression.WeaponMorningStarProgression_C");
		return ptr;
	}

}


