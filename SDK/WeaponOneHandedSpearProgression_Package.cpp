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
	 * 		Name   -> Function WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C.OnAssemble_WeaponOneHandedSpearProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponOneHandedSpearProgression_C::OnAssemble_WeaponOneHandedSpearProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C.OnAssemble_WeaponOneHandedSpearProgression");
		
		UWeaponOneHandedSpearProgression_C_OnAssemble_WeaponOneHandedSpearProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C.ExecuteUbergraph_WeaponOneHandedSpearProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponOneHandedSpearProgression_C::ExecuteUbergraph_WeaponOneHandedSpearProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C.ExecuteUbergraph_WeaponOneHandedSpearProgression");
		
		UWeaponOneHandedSpearProgression_C_ExecuteUbergraph_WeaponOneHandedSpearProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponOneHandedSpearProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponOneHandedSpearProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C");
		return ptr;
	}

}


